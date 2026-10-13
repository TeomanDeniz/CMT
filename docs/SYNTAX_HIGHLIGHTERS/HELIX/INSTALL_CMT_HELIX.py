#!/usr/bin/env python3
# CMT (C MAXIMUM TENSION) - HELIX INSTALLER
#
# USAGE:  python INSTALL_CMT_HELIX.py              (INSTALL / UPDATE)
#         python INSTALL_CMT_HELIX.py --uninstall
# RE-RUN IT AFTER EVERY HELIX UPDATE, SO THE C RULES STAY IN SYNC WITH HELIX.
#
# IT READS HELIX'S OWN queries/c/highlights.scm, ADDS THE CMT RULES FROM
# cmt-highlights.scm AND WRITES THE RESULT INTO YOUR CONFIG RUNTIME FOLDER
# (~/.config/helix/runtime OR %APPDATA%\helix\runtime), WHICH HELIX PREFERS.
# C++ IS COVERED TOO: HELIX'S C++ QUERY INHERITS THE C ONE.

import os
import shutil
import subprocess
import sys

MARK = "; CMT-HELIX-INSTALLER: GENERATED FILE"
HERE = os.path.dirname(os.path.abspath(__file__))


def runtime_dirs():
	hx = shutil.which("hx") or shutil.which("helix")
	if not hx:
		sys.exit("Helix ('hx') was not found in PATH.")
	out = subprocess.run([hx, "--health"], capture_output=True, text=True).stdout
	for line in out.splitlines():
		if line.startswith("Runtime directories:"):
			return [d.strip() for d in line.split(":", 1)[1].split(";") if d.strip()]
	sys.exit("Couldn't read the runtime directories from 'hx --health'.")


def main():
	dirs = runtime_dirs()
	target = os.path.join(dirs[0], "queries", "c", "highlights.scm")
	if "--uninstall" in sys.argv:
		if os.path.exists(target) and MARK in open(target, encoding="utf-8").read():
			os.remove(target)
			print("Removed", target)
		else:
			print("Nothing to remove.")
		return
	source = None
	for d in dirs[1:]:
		p = os.path.join(d, "queries", "c", "highlights.scm")
		if os.path.exists(p) and MARK not in open(p, encoding="utf-8").read():
			source = p
			break
	if not source:
		sys.exit("Couldn't find Helix's built-in queries/c/highlights.scm.")
	if os.path.exists(target) and MARK not in open(target, encoding="utf-8").read():
		sys.exit("%s already exists and wasn't made by this installer; not touching it." % target)
	cmt = open(os.path.join(HERE, "cmt-highlights.scm"), encoding="utf-8").read()
	base = open(source, encoding="utf-8").read()
	os.makedirs(os.path.dirname(target), exist_ok=True)
	with open(target, "w", encoding="utf-8", newline="\n") as f:
		f.write(MARK + " FROM " + source + "\n\n" + cmt + "\n" + base + "\n" + cmt)
	print("Installed", target)
	print("(based on", source + ")")


if __name__ == "__main__":
	main()
