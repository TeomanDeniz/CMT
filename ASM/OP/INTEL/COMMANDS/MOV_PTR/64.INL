/* ************************* [v] 64-BIT MEMORY [v] ************************** */
#define _MOV_RAX_FROM_PTR_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_FROM_PTR_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_FROM_PTR_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_FROM_PTR_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_FROM_PTR_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_FROM_PTR_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_FROM_PTR_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_FROM_PTR_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_FROM_PTR_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_FROM_PTR_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_FROM_PTR_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_FROM_PTR_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_FROM_PTR_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_FROM_PTR_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_FROM_PTR_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_FROM_PTR_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_RAX_TO_PTR_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_TO_PTR_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_TO_PTR_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_TO_PTR_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_TO_PTR_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_TO_PTR_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_TO_PTR_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_TO_PTR_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_TO_PTR_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_TO_PTR_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_TO_PTR_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_TO_PTR_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_TO_PTR_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_TO_PTR_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_TO_PTR_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_TO_PTR_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_RAX_FROM_PTR_RAX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X00)
#define _MOV_RAX_FROM_PTR_RBX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X03)
#define _MOV_RAX_FROM_PTR_RCX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X01)
#define _MOV_RAX_FROM_PTR_RDX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X02)
#define _MOV_RAX_FROM_PTR_RDI \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X07)
#define _MOV_RAX_FROM_PTR_RSI \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X06)
#define _MOV_RAX_FROM_PTR_RBP \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X00)
#define _MOV_RAX_FROM_PTR_RSP \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X24)
#define _MOV_RAX_FROM_PTR_R8 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X00)
#define _MOV_RAX_FROM_PTR_R9 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X01)
#define _MOV_RAX_FROM_PTR_R10 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X02)
#define _MOV_RAX_FROM_PTR_R11 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X03)
#define _MOV_RAX_FROM_PTR_R12 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X24)
#define _MOV_RAX_FROM_PTR_R13 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X00)
#define _MOV_RAX_FROM_PTR_R14 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X06)
#define _MOV_RAX_FROM_PTR_R15 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X07)
#define _MOV_RAX_FROM_PTR_EAX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X00)
#define _MOV_RAX_FROM_PTR_EBX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X03)
#define _MOV_RAX_FROM_PTR_ECX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X01)
#define _MOV_RAX_FROM_PTR_EDX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X02)
#define _MOV_RAX_FROM_PTR_EDI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X07)
#define _MOV_RAX_FROM_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X06)
#define _MOV_RAX_FROM_PTR_EBP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X00)
#define _MOV_RAX_FROM_PTR_ESP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X24)

#define _MOV_RBX_FROM_PTR_RAX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X18)
#define _MOV_RBX_FROM_PTR_RBX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1B)
#define _MOV_RBX_FROM_PTR_RCX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X19)
#define _MOV_RBX_FROM_PTR_RDX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1A)
#define _MOV_RBX_FROM_PTR_RDI \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1F)
#define _MOV_RBX_FROM_PTR_RSI \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1E)
#define _MOV_RBX_FROM_PTR_RBP \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X5D)\
	__ASM__OP__(0X00)
#define _MOV_RBX_FROM_PTR_RSP \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X24)
#define _MOV_RBX_FROM_PTR_R8 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X18)
#define _MOV_RBX_FROM_PTR_R9 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X19)
#define _MOV_RBX_FROM_PTR_R10 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1A)
#define _MOV_RBX_FROM_PTR_R11 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1B)
#define _MOV_RBX_FROM_PTR_R12 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X24)
#define _MOV_RBX_FROM_PTR_R13 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X5D)\
	__ASM__OP__(0X00)
#define _MOV_RBX_FROM_PTR_R14 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1E)
#define _MOV_RBX_FROM_PTR_R15 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1F)
#define _MOV_RBX_FROM_PTR_EAX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X18)
#define _MOV_RBX_FROM_PTR_EBX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1B)
#define _MOV_RBX_FROM_PTR_ECX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X19)
#define _MOV_RBX_FROM_PTR_EDX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1A)
#define _MOV_RBX_FROM_PTR_EDI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1F)
#define _MOV_RBX_FROM_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1E)
#define _MOV_RBX_FROM_PTR_EBP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X5D)\
	__ASM__OP__(0X00)
#define _MOV_RBX_FROM_PTR_ESP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X24)

#define _MOV_RCX_FROM_PTR_RAX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X08)
#define _MOV_RCX_FROM_PTR_RBX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0B)
#define _MOV_RCX_FROM_PTR_RCX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X09)
#define _MOV_RCX_FROM_PTR_RDX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0A)
#define _MOV_RCX_FROM_PTR_RDI \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0F)
#define _MOV_RCX_FROM_PTR_RSI \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0E)
#define _MOV_RCX_FROM_PTR_RBP \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X00)
#define _MOV_RCX_FROM_PTR_RSP \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X24)
#define _MOV_RCX_FROM_PTR_R8 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X08)
#define _MOV_RCX_FROM_PTR_R9 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X09)
#define _MOV_RCX_FROM_PTR_R10 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0A)
#define _MOV_RCX_FROM_PTR_R11 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0B)
#define _MOV_RCX_FROM_PTR_R12 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X24)
#define _MOV_RCX_FROM_PTR_R13 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X00)
#define _MOV_RCX_FROM_PTR_R14 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0E)
#define _MOV_RCX_FROM_PTR_R15 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0F)
#define _MOV_RCX_FROM_PTR_EAX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X08)
#define _MOV_RCX_FROM_PTR_EBX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0B)
#define _MOV_RCX_FROM_PTR_ECX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X09)
#define _MOV_RCX_FROM_PTR_EDX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0A)
#define _MOV_RCX_FROM_PTR_EDI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0F)
#define _MOV_RCX_FROM_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0E)
#define _MOV_RCX_FROM_PTR_EBP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X00)
#define _MOV_RCX_FROM_PTR_ESP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X24)

#define _MOV_RDX_FROM_PTR_RAX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X10)
#define _MOV_RDX_FROM_PTR_RBX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X13)
#define _MOV_RDX_FROM_PTR_RCX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X11)
#define _MOV_RDX_FROM_PTR_RDX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X12)
#define _MOV_RDX_FROM_PTR_RDI \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X17)
#define _MOV_RDX_FROM_PTR_RSI \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X16)
#define _MOV_RDX_FROM_PTR_RBP \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X55)\
	__ASM__OP__(0X00)
#define _MOV_RDX_FROM_PTR_RSP \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X24)
#define _MOV_RDX_FROM_PTR_R8 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X10)
#define _MOV_RDX_FROM_PTR_R9 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X11)
#define _MOV_RDX_FROM_PTR_R10 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X12)
#define _MOV_RDX_FROM_PTR_R11 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X13)
#define _MOV_RDX_FROM_PTR_R12 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X24)
#define _MOV_RDX_FROM_PTR_R13 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X55)\
	__ASM__OP__(0X00)
#define _MOV_RDX_FROM_PTR_R14 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X16)
#define _MOV_RDX_FROM_PTR_R15 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X17)
#define _MOV_RDX_FROM_PTR_EAX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X10)
#define _MOV_RDX_FROM_PTR_EBX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X13)
#define _MOV_RDX_FROM_PTR_ECX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X11)
#define _MOV_RDX_FROM_PTR_EDX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X12)
#define _MOV_RDX_FROM_PTR_EDI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X17)
#define _MOV_RDX_FROM_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X16)
#define _MOV_RDX_FROM_PTR_EBP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X55)\
	__ASM__OP__(0X00)
#define _MOV_RDX_FROM_PTR_ESP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X24)

#define _MOV_RDI_FROM_PTR_RAX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X38)
#define _MOV_RDI_FROM_PTR_RBX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3B)
#define _MOV_RDI_FROM_PTR_RCX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X39)
#define _MOV_RDI_FROM_PTR_RDX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3A)
#define _MOV_RDI_FROM_PTR_RDI \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3F)
#define _MOV_RDI_FROM_PTR_RSI \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3E)
#define _MOV_RDI_FROM_PTR_RBP \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X7D)\
	__ASM__OP__(0X00)
#define _MOV_RDI_FROM_PTR_RSP \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X24)
#define _MOV_RDI_FROM_PTR_R8 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X38)
#define _MOV_RDI_FROM_PTR_R9 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X39)
#define _MOV_RDI_FROM_PTR_R10 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3A)
#define _MOV_RDI_FROM_PTR_R11 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3B)
#define _MOV_RDI_FROM_PTR_R12 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X24)
#define _MOV_RDI_FROM_PTR_R13 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X7D)\
	__ASM__OP__(0X00)
#define _MOV_RDI_FROM_PTR_R14 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3E)
#define _MOV_RDI_FROM_PTR_R15 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3F)
#define _MOV_RDI_FROM_PTR_EAX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X38)
#define _MOV_RDI_FROM_PTR_EBX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3B)
#define _MOV_RDI_FROM_PTR_ECX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X39)
#define _MOV_RDI_FROM_PTR_EDX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3A)
#define _MOV_RDI_FROM_PTR_EDI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3F)
#define _MOV_RDI_FROM_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3E)
#define _MOV_RDI_FROM_PTR_EBP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X7D)\
	__ASM__OP__(0X00)
#define _MOV_RDI_FROM_PTR_ESP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X24)

#define _MOV_RSI_FROM_PTR_RAX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X30)
#define _MOV_RSI_FROM_PTR_RBX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X33)
#define _MOV_RSI_FROM_PTR_RCX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X31)
#define _MOV_RSI_FROM_PTR_RDX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X32)
#define _MOV_RSI_FROM_PTR_RDI \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X37)
#define _MOV_RSI_FROM_PTR_RSI \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X36)
#define _MOV_RSI_FROM_PTR_RBP \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X75)\
	__ASM__OP__(0X00)
#define _MOV_RSI_FROM_PTR_RSP \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X24)
#define _MOV_RSI_FROM_PTR_R8 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X30)
#define _MOV_RSI_FROM_PTR_R9 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X31)
#define _MOV_RSI_FROM_PTR_R10 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X32)
#define _MOV_RSI_FROM_PTR_R11 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X33)
#define _MOV_RSI_FROM_PTR_R12 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X24)
#define _MOV_RSI_FROM_PTR_R13 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X75)\
	__ASM__OP__(0X00)
#define _MOV_RSI_FROM_PTR_R14 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X36)
#define _MOV_RSI_FROM_PTR_R15 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X37)
#define _MOV_RSI_FROM_PTR_EAX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X30)
#define _MOV_RSI_FROM_PTR_EBX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X33)
#define _MOV_RSI_FROM_PTR_ECX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X31)
#define _MOV_RSI_FROM_PTR_EDX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X32)
#define _MOV_RSI_FROM_PTR_EDI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X37)
#define _MOV_RSI_FROM_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X36)
#define _MOV_RSI_FROM_PTR_EBP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X75)\
	__ASM__OP__(0X00)
#define _MOV_RSI_FROM_PTR_ESP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X24)

#define _MOV_RBP_FROM_PTR_RAX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X28)
#define _MOV_RBP_FROM_PTR_RBX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2B)
#define _MOV_RBP_FROM_PTR_RCX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X29)
#define _MOV_RBP_FROM_PTR_RDX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2A)
#define _MOV_RBP_FROM_PTR_RDI \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2F)
#define _MOV_RBP_FROM_PTR_RSI \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2E)
#define _MOV_RBP_FROM_PTR_RBP \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X6D)\
	__ASM__OP__(0X00)
#define _MOV_RBP_FROM_PTR_RSP \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X24)
#define _MOV_RBP_FROM_PTR_R8 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X28)
#define _MOV_RBP_FROM_PTR_R9 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X29)
#define _MOV_RBP_FROM_PTR_R10 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2A)
#define _MOV_RBP_FROM_PTR_R11 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2B)
#define _MOV_RBP_FROM_PTR_R12 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X24)
#define _MOV_RBP_FROM_PTR_R13 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X6D)\
	__ASM__OP__(0X00)
#define _MOV_RBP_FROM_PTR_R14 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2E)
#define _MOV_RBP_FROM_PTR_R15 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2F)
#define _MOV_RBP_FROM_PTR_EAX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X28)
#define _MOV_RBP_FROM_PTR_EBX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2B)
#define _MOV_RBP_FROM_PTR_ECX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X29)
#define _MOV_RBP_FROM_PTR_EDX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2A)
#define _MOV_RBP_FROM_PTR_EDI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2F)
#define _MOV_RBP_FROM_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2E)
#define _MOV_RBP_FROM_PTR_EBP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X6D)\
	__ASM__OP__(0X00)
#define _MOV_RBP_FROM_PTR_ESP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X24)

#define _MOV_RSP_FROM_PTR_RAX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X20)
#define _MOV_RSP_FROM_PTR_RBX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X23)
#define _MOV_RSP_FROM_PTR_RCX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X21)
#define _MOV_RSP_FROM_PTR_RDX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X22)
#define _MOV_RSP_FROM_PTR_RDI \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X27)
#define _MOV_RSP_FROM_PTR_RSI \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X26)
#define _MOV_RSP_FROM_PTR_RBP \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X65)\
	__ASM__OP__(0X00)
#define _MOV_RSP_FROM_PTR_RSP \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X24)
#define _MOV_RSP_FROM_PTR_R8 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X20)
#define _MOV_RSP_FROM_PTR_R9 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X21)
#define _MOV_RSP_FROM_PTR_R10 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X22)
#define _MOV_RSP_FROM_PTR_R11 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X23)
#define _MOV_RSP_FROM_PTR_R12 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X24)
#define _MOV_RSP_FROM_PTR_R13 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X65)\
	__ASM__OP__(0X00)
#define _MOV_RSP_FROM_PTR_R14 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X26)
#define _MOV_RSP_FROM_PTR_R15 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X27)
#define _MOV_RSP_FROM_PTR_EAX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X20)
#define _MOV_RSP_FROM_PTR_EBX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X23)
#define _MOV_RSP_FROM_PTR_ECX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X21)
#define _MOV_RSP_FROM_PTR_EDX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X22)
#define _MOV_RSP_FROM_PTR_EDI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X27)
#define _MOV_RSP_FROM_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X26)
#define _MOV_RSP_FROM_PTR_EBP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X65)\
	__ASM__OP__(0X00)
#define _MOV_RSP_FROM_PTR_ESP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X24)

#define _MOV_R8_FROM_PTR_RAX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X00)
#define _MOV_R8_FROM_PTR_RBX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X03)
#define _MOV_R8_FROM_PTR_RCX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X01)
#define _MOV_R8_FROM_PTR_RDX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X02)
#define _MOV_R8_FROM_PTR_RDI \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X07)
#define _MOV_R8_FROM_PTR_RSI \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X06)
#define _MOV_R8_FROM_PTR_RBP \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X00)
#define _MOV_R8_FROM_PTR_RSP \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X24)
#define _MOV_R8_FROM_PTR_R8 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X00)
#define _MOV_R8_FROM_PTR_R9 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X01)
#define _MOV_R8_FROM_PTR_R10 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X02)
#define _MOV_R8_FROM_PTR_R11 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X03)
#define _MOV_R8_FROM_PTR_R12 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X24)
#define _MOV_R8_FROM_PTR_R13 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X00)
#define _MOV_R8_FROM_PTR_R14 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X06)
#define _MOV_R8_FROM_PTR_R15 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X07)
#define _MOV_R8_FROM_PTR_EAX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X00)
#define _MOV_R8_FROM_PTR_EBX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X03)
#define _MOV_R8_FROM_PTR_ECX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X01)
#define _MOV_R8_FROM_PTR_EDX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X02)
#define _MOV_R8_FROM_PTR_EDI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X07)
#define _MOV_R8_FROM_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X06)
#define _MOV_R8_FROM_PTR_EBP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X00)
#define _MOV_R8_FROM_PTR_ESP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X24)

#define _MOV_R9_FROM_PTR_RAX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X08)
#define _MOV_R9_FROM_PTR_RBX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0B)
#define _MOV_R9_FROM_PTR_RCX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X09)
#define _MOV_R9_FROM_PTR_RDX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0A)
#define _MOV_R9_FROM_PTR_RDI \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0F)
#define _MOV_R9_FROM_PTR_RSI \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0E)
#define _MOV_R9_FROM_PTR_RBP \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X00)
#define _MOV_R9_FROM_PTR_RSP \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X24)
#define _MOV_R9_FROM_PTR_R8 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X08)
#define _MOV_R9_FROM_PTR_R9 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X09)
#define _MOV_R9_FROM_PTR_R10 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0A)
#define _MOV_R9_FROM_PTR_R11 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0B)
#define _MOV_R9_FROM_PTR_R12 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X24)
#define _MOV_R9_FROM_PTR_R13 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X00)
#define _MOV_R9_FROM_PTR_R14 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0E)
#define _MOV_R9_FROM_PTR_R15 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0F)
#define _MOV_R9_FROM_PTR_EAX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X08)
#define _MOV_R9_FROM_PTR_EBX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0B)
#define _MOV_R9_FROM_PTR_ECX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X09)
#define _MOV_R9_FROM_PTR_EDX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0A)
#define _MOV_R9_FROM_PTR_EDI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0F)
#define _MOV_R9_FROM_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0E)
#define _MOV_R9_FROM_PTR_EBP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X00)
#define _MOV_R9_FROM_PTR_ESP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X24)

#define _MOV_R10_FROM_PTR_RAX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X10)
#define _MOV_R10_FROM_PTR_RBX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X13)
#define _MOV_R10_FROM_PTR_RCX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X11)
#define _MOV_R10_FROM_PTR_RDX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X12)
#define _MOV_R10_FROM_PTR_RDI \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X17)
#define _MOV_R10_FROM_PTR_RSI \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X16)
#define _MOV_R10_FROM_PTR_RBP \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X55)\
	__ASM__OP__(0X00)
#define _MOV_R10_FROM_PTR_RSP \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X24)
#define _MOV_R10_FROM_PTR_R8 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X10)
#define _MOV_R10_FROM_PTR_R9 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X11)
#define _MOV_R10_FROM_PTR_R10 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X12)
#define _MOV_R10_FROM_PTR_R11 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X13)
#define _MOV_R10_FROM_PTR_R12 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X24)
#define _MOV_R10_FROM_PTR_R13 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X55)\
	__ASM__OP__(0X00)
#define _MOV_R10_FROM_PTR_R14 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X16)
#define _MOV_R10_FROM_PTR_R15 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X17)
#define _MOV_R10_FROM_PTR_EAX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X10)
#define _MOV_R10_FROM_PTR_EBX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X13)
#define _MOV_R10_FROM_PTR_ECX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X11)
#define _MOV_R10_FROM_PTR_EDX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X12)
#define _MOV_R10_FROM_PTR_EDI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X17)
#define _MOV_R10_FROM_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X16)
#define _MOV_R10_FROM_PTR_EBP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X55)\
	__ASM__OP__(0X00)
#define _MOV_R10_FROM_PTR_ESP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X24)

#define _MOV_R11_FROM_PTR_RAX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X18)
#define _MOV_R11_FROM_PTR_RBX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1B)
#define _MOV_R11_FROM_PTR_RCX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X19)
#define _MOV_R11_FROM_PTR_RDX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1A)
#define _MOV_R11_FROM_PTR_RDI \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1F)
#define _MOV_R11_FROM_PTR_RSI \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1E)
#define _MOV_R11_FROM_PTR_RBP \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X5D)\
	__ASM__OP__(0X00)
#define _MOV_R11_FROM_PTR_RSP \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X24)
#define _MOV_R11_FROM_PTR_R8 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X18)
#define _MOV_R11_FROM_PTR_R9 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X19)
#define _MOV_R11_FROM_PTR_R10 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1A)
#define _MOV_R11_FROM_PTR_R11 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1B)
#define _MOV_R11_FROM_PTR_R12 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X24)
#define _MOV_R11_FROM_PTR_R13 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X5D)\
	__ASM__OP__(0X00)
#define _MOV_R11_FROM_PTR_R14 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1E)
#define _MOV_R11_FROM_PTR_R15 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1F)
#define _MOV_R11_FROM_PTR_EAX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X18)
#define _MOV_R11_FROM_PTR_EBX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1B)
#define _MOV_R11_FROM_PTR_ECX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X19)
#define _MOV_R11_FROM_PTR_EDX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1A)
#define _MOV_R11_FROM_PTR_EDI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1F)
#define _MOV_R11_FROM_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1E)
#define _MOV_R11_FROM_PTR_EBP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X5D)\
	__ASM__OP__(0X00)
#define _MOV_R11_FROM_PTR_ESP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X24)

#define _MOV_R12_FROM_PTR_RAX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X20)
#define _MOV_R12_FROM_PTR_RBX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X23)
#define _MOV_R12_FROM_PTR_RCX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X21)
#define _MOV_R12_FROM_PTR_RDX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X22)
#define _MOV_R12_FROM_PTR_RDI \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X27)
#define _MOV_R12_FROM_PTR_RSI \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X26)
#define _MOV_R12_FROM_PTR_RBP \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X65)\
	__ASM__OP__(0X00)
#define _MOV_R12_FROM_PTR_RSP \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X24)
#define _MOV_R12_FROM_PTR_R8 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X20)
#define _MOV_R12_FROM_PTR_R9 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X21)
#define _MOV_R12_FROM_PTR_R10 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X22)
#define _MOV_R12_FROM_PTR_R11 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X23)
#define _MOV_R12_FROM_PTR_R12 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X24)
#define _MOV_R12_FROM_PTR_R13 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X65)\
	__ASM__OP__(0X00)
#define _MOV_R12_FROM_PTR_R14 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X26)
#define _MOV_R12_FROM_PTR_R15 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X27)
#define _MOV_R12_FROM_PTR_EAX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X20)
#define _MOV_R12_FROM_PTR_EBX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X23)
#define _MOV_R12_FROM_PTR_ECX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X21)
#define _MOV_R12_FROM_PTR_EDX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X22)
#define _MOV_R12_FROM_PTR_EDI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X27)
#define _MOV_R12_FROM_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X26)
#define _MOV_R12_FROM_PTR_EBP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X65)\
	__ASM__OP__(0X00)
#define _MOV_R12_FROM_PTR_ESP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X24)

#define _MOV_R13_FROM_PTR_RAX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X28)
#define _MOV_R13_FROM_PTR_RBX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2B)
#define _MOV_R13_FROM_PTR_RCX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X29)
#define _MOV_R13_FROM_PTR_RDX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2A)
#define _MOV_R13_FROM_PTR_RDI \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2F)
#define _MOV_R13_FROM_PTR_RSI \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2E)
#define _MOV_R13_FROM_PTR_RBP \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X6D)\
	__ASM__OP__(0X00)
#define _MOV_R13_FROM_PTR_RSP \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X24)
#define _MOV_R13_FROM_PTR_R8 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X28)
#define _MOV_R13_FROM_PTR_R9 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X29)
#define _MOV_R13_FROM_PTR_R10 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2A)
#define _MOV_R13_FROM_PTR_R11 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2B)
#define _MOV_R13_FROM_PTR_R12 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X24)
#define _MOV_R13_FROM_PTR_R13 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X6D)\
	__ASM__OP__(0X00)
#define _MOV_R13_FROM_PTR_R14 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2E)
#define _MOV_R13_FROM_PTR_R15 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2F)
#define _MOV_R13_FROM_PTR_EAX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X28)
#define _MOV_R13_FROM_PTR_EBX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2B)
#define _MOV_R13_FROM_PTR_ECX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X29)
#define _MOV_R13_FROM_PTR_EDX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2A)
#define _MOV_R13_FROM_PTR_EDI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2F)
#define _MOV_R13_FROM_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2E)
#define _MOV_R13_FROM_PTR_EBP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X6D)\
	__ASM__OP__(0X00)
#define _MOV_R13_FROM_PTR_ESP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X24)

#define _MOV_R14_FROM_PTR_RAX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X30)
#define _MOV_R14_FROM_PTR_RBX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X33)
#define _MOV_R14_FROM_PTR_RCX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X31)
#define _MOV_R14_FROM_PTR_RDX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X32)
#define _MOV_R14_FROM_PTR_RDI \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X37)
#define _MOV_R14_FROM_PTR_RSI \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X36)
#define _MOV_R14_FROM_PTR_RBP \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X75)\
	__ASM__OP__(0X00)
#define _MOV_R14_FROM_PTR_RSP \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X24)
#define _MOV_R14_FROM_PTR_R8 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X30)
#define _MOV_R14_FROM_PTR_R9 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X31)
#define _MOV_R14_FROM_PTR_R10 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X32)
#define _MOV_R14_FROM_PTR_R11 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X33)
#define _MOV_R14_FROM_PTR_R12 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X24)
#define _MOV_R14_FROM_PTR_R13 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X75)\
	__ASM__OP__(0X00)
#define _MOV_R14_FROM_PTR_R14 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X36)
#define _MOV_R14_FROM_PTR_R15 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X37)
#define _MOV_R14_FROM_PTR_EAX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X30)
#define _MOV_R14_FROM_PTR_EBX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X33)
#define _MOV_R14_FROM_PTR_ECX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X31)
#define _MOV_R14_FROM_PTR_EDX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X32)
#define _MOV_R14_FROM_PTR_EDI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X37)
#define _MOV_R14_FROM_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X36)
#define _MOV_R14_FROM_PTR_EBP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X75)\
	__ASM__OP__(0X00)
#define _MOV_R14_FROM_PTR_ESP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X24)

#define _MOV_R15_FROM_PTR_RAX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X38)
#define _MOV_R15_FROM_PTR_RBX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3B)
#define _MOV_R15_FROM_PTR_RCX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X39)
#define _MOV_R15_FROM_PTR_RDX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3A)
#define _MOV_R15_FROM_PTR_RDI \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3F)
#define _MOV_R15_FROM_PTR_RSI \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3E)
#define _MOV_R15_FROM_PTR_RBP \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X7D)\
	__ASM__OP__(0X00)
#define _MOV_R15_FROM_PTR_RSP \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X24)
#define _MOV_R15_FROM_PTR_R8 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X38)
#define _MOV_R15_FROM_PTR_R9 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X39)
#define _MOV_R15_FROM_PTR_R10 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3A)
#define _MOV_R15_FROM_PTR_R11 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3B)
#define _MOV_R15_FROM_PTR_R12 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X24)
#define _MOV_R15_FROM_PTR_R13 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X7D)\
	__ASM__OP__(0X00)
#define _MOV_R15_FROM_PTR_R14 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3E)
#define _MOV_R15_FROM_PTR_R15 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3F)
#define _MOV_R15_FROM_PTR_EAX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X38)
#define _MOV_R15_FROM_PTR_EBX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3B)
#define _MOV_R15_FROM_PTR_ECX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X39)
#define _MOV_R15_FROM_PTR_EDX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3A)
#define _MOV_R15_FROM_PTR_EDI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3F)
#define _MOV_R15_FROM_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3E)
#define _MOV_R15_FROM_PTR_EBP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X7D)\
	__ASM__OP__(0X00)
#define _MOV_R15_FROM_PTR_ESP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X24)

#define _MOV_RAX_TO_PTR_RAX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X00)
#define _MOV_RAX_TO_PTR_RBX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X03)
#define _MOV_RAX_TO_PTR_RCX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X01)
#define _MOV_RAX_TO_PTR_RDX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X02)
#define _MOV_RAX_TO_PTR_RDI \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X07)
#define _MOV_RAX_TO_PTR_RSI \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X06)
#define _MOV_RAX_TO_PTR_RBP \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X00)
#define _MOV_RAX_TO_PTR_RSP \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X24)
#define _MOV_RAX_TO_PTR_R8 __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0X00)
#define _MOV_RAX_TO_PTR_R9 __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0X01)
#define _MOV_RAX_TO_PTR_R10 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X02)
#define _MOV_RAX_TO_PTR_R11 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X03)
#define _MOV_RAX_TO_PTR_R12 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X24)
#define _MOV_RAX_TO_PTR_R13 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X00)
#define _MOV_RAX_TO_PTR_R14 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X06)
#define _MOV_RAX_TO_PTR_R15 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X07)
#define _MOV_RAX_TO_PTR_EAX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X00)
#define _MOV_RAX_TO_PTR_EBX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X03)
#define _MOV_RAX_TO_PTR_ECX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X01)
#define _MOV_RAX_TO_PTR_EDX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X02)
#define _MOV_RAX_TO_PTR_EDI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X07)
#define _MOV_RAX_TO_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X06)
#define _MOV_RAX_TO_PTR_EBP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X00)
#define _MOV_RAX_TO_PTR_ESP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X24)

#define _MOV_RBX_TO_PTR_RAX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X18)
#define _MOV_RBX_TO_PTR_RBX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1B)
#define _MOV_RBX_TO_PTR_RCX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X19)
#define _MOV_RBX_TO_PTR_RDX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1A)
#define _MOV_RBX_TO_PTR_RDI \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1F)
#define _MOV_RBX_TO_PTR_RSI \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1E)
#define _MOV_RBX_TO_PTR_RBP \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X5D)\
	__ASM__OP__(0X00)
#define _MOV_RBX_TO_PTR_RSP \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X24)
#define _MOV_RBX_TO_PTR_R8 __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0X18)
#define _MOV_RBX_TO_PTR_R9 __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0X19)
#define _MOV_RBX_TO_PTR_R10 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1A)
#define _MOV_RBX_TO_PTR_R11 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1B)
#define _MOV_RBX_TO_PTR_R12 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X24)
#define _MOV_RBX_TO_PTR_R13 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X5D)\
	__ASM__OP__(0X00)
#define _MOV_RBX_TO_PTR_R14 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1E)
#define _MOV_RBX_TO_PTR_R15 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1F)
#define _MOV_RBX_TO_PTR_EAX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X18)
#define _MOV_RBX_TO_PTR_EBX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1B)
#define _MOV_RBX_TO_PTR_ECX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X19)
#define _MOV_RBX_TO_PTR_EDX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1A)
#define _MOV_RBX_TO_PTR_EDI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1F)
#define _MOV_RBX_TO_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1E)
#define _MOV_RBX_TO_PTR_EBP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X5D)\
	__ASM__OP__(0X00)
#define _MOV_RBX_TO_PTR_ESP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X24)

#define _MOV_RCX_TO_PTR_RAX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X08)
#define _MOV_RCX_TO_PTR_RBX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0B)
#define _MOV_RCX_TO_PTR_RCX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X09)
#define _MOV_RCX_TO_PTR_RDX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0A)
#define _MOV_RCX_TO_PTR_RDI \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0F)
#define _MOV_RCX_TO_PTR_RSI \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0E)
#define _MOV_RCX_TO_PTR_RBP \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X00)
#define _MOV_RCX_TO_PTR_RSP \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X24)
#define _MOV_RCX_TO_PTR_R8 __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0X08)
#define _MOV_RCX_TO_PTR_R9 __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0X09)
#define _MOV_RCX_TO_PTR_R10 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0A)
#define _MOV_RCX_TO_PTR_R11 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0B)
#define _MOV_RCX_TO_PTR_R12 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X24)
#define _MOV_RCX_TO_PTR_R13 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X00)
#define _MOV_RCX_TO_PTR_R14 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0E)
#define _MOV_RCX_TO_PTR_R15 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0F)
#define _MOV_RCX_TO_PTR_EAX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X08)
#define _MOV_RCX_TO_PTR_EBX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0B)
#define _MOV_RCX_TO_PTR_ECX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X09)
#define _MOV_RCX_TO_PTR_EDX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0A)
#define _MOV_RCX_TO_PTR_EDI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0F)
#define _MOV_RCX_TO_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0E)
#define _MOV_RCX_TO_PTR_EBP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X00)
#define _MOV_RCX_TO_PTR_ESP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X24)

#define _MOV_RDX_TO_PTR_RAX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X10)
#define _MOV_RDX_TO_PTR_RBX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X13)
#define _MOV_RDX_TO_PTR_RCX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X11)
#define _MOV_RDX_TO_PTR_RDX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X12)
#define _MOV_RDX_TO_PTR_RDI \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X17)
#define _MOV_RDX_TO_PTR_RSI \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X16)
#define _MOV_RDX_TO_PTR_RBP \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X55)\
	__ASM__OP__(0X00)
#define _MOV_RDX_TO_PTR_RSP \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X24)
#define _MOV_RDX_TO_PTR_R8 __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0X10)
#define _MOV_RDX_TO_PTR_R9 __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0X11)
#define _MOV_RDX_TO_PTR_R10 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X12)
#define _MOV_RDX_TO_PTR_R11 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X13)
#define _MOV_RDX_TO_PTR_R12 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X24)
#define _MOV_RDX_TO_PTR_R13 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X55)\
	__ASM__OP__(0X00)
#define _MOV_RDX_TO_PTR_R14 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X16)
#define _MOV_RDX_TO_PTR_R15 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X17)
#define _MOV_RDX_TO_PTR_EAX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X10)
#define _MOV_RDX_TO_PTR_EBX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X13)
#define _MOV_RDX_TO_PTR_ECX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X11)
#define _MOV_RDX_TO_PTR_EDX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X12)
#define _MOV_RDX_TO_PTR_EDI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X17)
#define _MOV_RDX_TO_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X16)
#define _MOV_RDX_TO_PTR_EBP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X55)\
	__ASM__OP__(0X00)
#define _MOV_RDX_TO_PTR_ESP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X24)

#define _MOV_RDI_TO_PTR_RAX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X38)
#define _MOV_RDI_TO_PTR_RBX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3B)
#define _MOV_RDI_TO_PTR_RCX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X39)
#define _MOV_RDI_TO_PTR_RDX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3A)
#define _MOV_RDI_TO_PTR_RDI \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3F)
#define _MOV_RDI_TO_PTR_RSI \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3E)
#define _MOV_RDI_TO_PTR_RBP \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X7D)\
	__ASM__OP__(0X00)
#define _MOV_RDI_TO_PTR_RSP \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X24)
#define _MOV_RDI_TO_PTR_R8 __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0X38)
#define _MOV_RDI_TO_PTR_R9 __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0X39)
#define _MOV_RDI_TO_PTR_R10 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3A)
#define _MOV_RDI_TO_PTR_R11 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3B)
#define _MOV_RDI_TO_PTR_R12 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X24)
#define _MOV_RDI_TO_PTR_R13 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X7D)\
	__ASM__OP__(0X00)
#define _MOV_RDI_TO_PTR_R14 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3E)
#define _MOV_RDI_TO_PTR_R15 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3F)
#define _MOV_RDI_TO_PTR_EAX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X38)
#define _MOV_RDI_TO_PTR_EBX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3B)
#define _MOV_RDI_TO_PTR_ECX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X39)
#define _MOV_RDI_TO_PTR_EDX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3A)
#define _MOV_RDI_TO_PTR_EDI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3F)
#define _MOV_RDI_TO_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3E)
#define _MOV_RDI_TO_PTR_EBP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X7D)\
	__ASM__OP__(0X00)
#define _MOV_RDI_TO_PTR_ESP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X24)

#define _MOV_RSI_TO_PTR_RAX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X30)
#define _MOV_RSI_TO_PTR_RBX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X33)
#define _MOV_RSI_TO_PTR_RCX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X31)
#define _MOV_RSI_TO_PTR_RDX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X32)
#define _MOV_RSI_TO_PTR_RDI \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X37)
#define _MOV_RSI_TO_PTR_RSI \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X36)
#define _MOV_RSI_TO_PTR_RBP \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X75)\
	__ASM__OP__(0X00)
#define _MOV_RSI_TO_PTR_RSP \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X24)
#define _MOV_RSI_TO_PTR_R8 __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0X30)
#define _MOV_RSI_TO_PTR_R9 __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0X31)
#define _MOV_RSI_TO_PTR_R10 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X32)
#define _MOV_RSI_TO_PTR_R11 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X33)
#define _MOV_RSI_TO_PTR_R12 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X24)
#define _MOV_RSI_TO_PTR_R13 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X75)\
	__ASM__OP__(0X00)
#define _MOV_RSI_TO_PTR_R14 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X36)
#define _MOV_RSI_TO_PTR_R15 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X37)
#define _MOV_RSI_TO_PTR_EAX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X30)
#define _MOV_RSI_TO_PTR_EBX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X33)
#define _MOV_RSI_TO_PTR_ECX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X31)
#define _MOV_RSI_TO_PTR_EDX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X32)
#define _MOV_RSI_TO_PTR_EDI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X37)
#define _MOV_RSI_TO_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X36)
#define _MOV_RSI_TO_PTR_EBP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X75)\
	__ASM__OP__(0X00)
#define _MOV_RSI_TO_PTR_ESP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X24)

#define _MOV_RBP_TO_PTR_RAX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X28)
#define _MOV_RBP_TO_PTR_RBX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2B)
#define _MOV_RBP_TO_PTR_RCX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X29)
#define _MOV_RBP_TO_PTR_RDX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2A)
#define _MOV_RBP_TO_PTR_RDI \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2F)
#define _MOV_RBP_TO_PTR_RSI \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2E)
#define _MOV_RBP_TO_PTR_RBP \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X6D)\
	__ASM__OP__(0X00)
#define _MOV_RBP_TO_PTR_RSP \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X24)
#define _MOV_RBP_TO_PTR_R8 __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0X28)
#define _MOV_RBP_TO_PTR_R9 __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0X29)
#define _MOV_RBP_TO_PTR_R10 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2A)
#define _MOV_RBP_TO_PTR_R11 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2B)
#define _MOV_RBP_TO_PTR_R12 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X24)
#define _MOV_RBP_TO_PTR_R13 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X6D)\
	__ASM__OP__(0X00)
#define _MOV_RBP_TO_PTR_R14 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2E)
#define _MOV_RBP_TO_PTR_R15 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2F)
#define _MOV_RBP_TO_PTR_EAX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X28)
#define _MOV_RBP_TO_PTR_EBX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2B)
#define _MOV_RBP_TO_PTR_ECX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X29)
#define _MOV_RBP_TO_PTR_EDX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2A)
#define _MOV_RBP_TO_PTR_EDI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2F)
#define _MOV_RBP_TO_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2E)
#define _MOV_RBP_TO_PTR_EBP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X6D)\
	__ASM__OP__(0X00)
#define _MOV_RBP_TO_PTR_ESP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X24)

#define _MOV_RSP_TO_PTR_RAX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X20)
#define _MOV_RSP_TO_PTR_RBX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X23)
#define _MOV_RSP_TO_PTR_RCX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X21)
#define _MOV_RSP_TO_PTR_RDX \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X22)
#define _MOV_RSP_TO_PTR_RDI \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X27)
#define _MOV_RSP_TO_PTR_RSI \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X26)
#define _MOV_RSP_TO_PTR_RBP \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X65)\
	__ASM__OP__(0X00)
#define _MOV_RSP_TO_PTR_RSP \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X24)
#define _MOV_RSP_TO_PTR_R8 __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0X20)
#define _MOV_RSP_TO_PTR_R9 __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0X21)
#define _MOV_RSP_TO_PTR_R10 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X22)
#define _MOV_RSP_TO_PTR_R11 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X23)
#define _MOV_RSP_TO_PTR_R12 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X24)
#define _MOV_RSP_TO_PTR_R13 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X65)\
	__ASM__OP__(0X00)
#define _MOV_RSP_TO_PTR_R14 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X26)
#define _MOV_RSP_TO_PTR_R15 \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X27)
#define _MOV_RSP_TO_PTR_EAX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X20)
#define _MOV_RSP_TO_PTR_EBX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X23)
#define _MOV_RSP_TO_PTR_ECX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X21)
#define _MOV_RSP_TO_PTR_EDX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X22)
#define _MOV_RSP_TO_PTR_EDI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X27)
#define _MOV_RSP_TO_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X26)
#define _MOV_RSP_TO_PTR_EBP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X65)\
	__ASM__OP__(0X00)
#define _MOV_RSP_TO_PTR_ESP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X24)

#define _MOV_R8_TO_PTR_RAX __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0X00)
#define _MOV_R8_TO_PTR_RBX __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0X03)
#define _MOV_R8_TO_PTR_RCX __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0X01)
#define _MOV_R8_TO_PTR_RDX __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0X02)
#define _MOV_R8_TO_PTR_RDI __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0X07)
#define _MOV_R8_TO_PTR_RSI __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0X06)
#define _MOV_R8_TO_PTR_RBP \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X00)
#define _MOV_R8_TO_PTR_RSP \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X24)
#define _MOV_R8_TO_PTR_R8 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0X00)
#define _MOV_R8_TO_PTR_R9 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0X01)
#define _MOV_R8_TO_PTR_R10 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0X02)
#define _MOV_R8_TO_PTR_R11 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0X03)
#define _MOV_R8_TO_PTR_R12 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X24)
#define _MOV_R8_TO_PTR_R13 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X00)
#define _MOV_R8_TO_PTR_R14 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0X06)
#define _MOV_R8_TO_PTR_R15 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0X07)
#define _MOV_R8_TO_PTR_EAX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X00)
#define _MOV_R8_TO_PTR_EBX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X03)
#define _MOV_R8_TO_PTR_ECX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X01)
#define _MOV_R8_TO_PTR_EDX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X02)
#define _MOV_R8_TO_PTR_EDI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X07)
#define _MOV_R8_TO_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X06)
#define _MOV_R8_TO_PTR_EBP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X00)
#define _MOV_R8_TO_PTR_ESP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X24)

#define _MOV_R9_TO_PTR_RAX __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0X08)
#define _MOV_R9_TO_PTR_RBX __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0X0B)
#define _MOV_R9_TO_PTR_RCX __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0X09)
#define _MOV_R9_TO_PTR_RDX __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0X0A)
#define _MOV_R9_TO_PTR_RDI __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0X0F)
#define _MOV_R9_TO_PTR_RSI __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0X0E)
#define _MOV_R9_TO_PTR_RBP \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X00)
#define _MOV_R9_TO_PTR_RSP \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X24)
#define _MOV_R9_TO_PTR_R8 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0X08)
#define _MOV_R9_TO_PTR_R9 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0X09)
#define _MOV_R9_TO_PTR_R10 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0X0A)
#define _MOV_R9_TO_PTR_R11 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0X0B)
#define _MOV_R9_TO_PTR_R12 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X24)
#define _MOV_R9_TO_PTR_R13 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X00)
#define _MOV_R9_TO_PTR_R14 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0X0E)
#define _MOV_R9_TO_PTR_R15 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0X0F)
#define _MOV_R9_TO_PTR_EAX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X08)
#define _MOV_R9_TO_PTR_EBX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0B)
#define _MOV_R9_TO_PTR_ECX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X09)
#define _MOV_R9_TO_PTR_EDX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0A)
#define _MOV_R9_TO_PTR_EDI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0F)
#define _MOV_R9_TO_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0E)
#define _MOV_R9_TO_PTR_EBP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X00)
#define _MOV_R9_TO_PTR_ESP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X24)

#define _MOV_R10_TO_PTR_RAX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X10)
#define _MOV_R10_TO_PTR_RBX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X13)
#define _MOV_R10_TO_PTR_RCX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X11)
#define _MOV_R10_TO_PTR_RDX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X12)
#define _MOV_R10_TO_PTR_RDI \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X17)
#define _MOV_R10_TO_PTR_RSI \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X16)
#define _MOV_R10_TO_PTR_RBP \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X55)\
	__ASM__OP__(0X00)
#define _MOV_R10_TO_PTR_RSP \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X24)
#define _MOV_R10_TO_PTR_R8 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0X10)
#define _MOV_R10_TO_PTR_R9 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0X11)
#define _MOV_R10_TO_PTR_R10 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X12)
#define _MOV_R10_TO_PTR_R11 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X13)
#define _MOV_R10_TO_PTR_R12 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X24)
#define _MOV_R10_TO_PTR_R13 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X55)\
	__ASM__OP__(0X00)
#define _MOV_R10_TO_PTR_R14 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X16)
#define _MOV_R10_TO_PTR_R15 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X17)
#define _MOV_R10_TO_PTR_EAX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X10)
#define _MOV_R10_TO_PTR_EBX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X13)
#define _MOV_R10_TO_PTR_ECX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X11)
#define _MOV_R10_TO_PTR_EDX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X12)
#define _MOV_R10_TO_PTR_EDI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X17)
#define _MOV_R10_TO_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X16)
#define _MOV_R10_TO_PTR_EBP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X55)\
	__ASM__OP__(0X00)
#define _MOV_R10_TO_PTR_ESP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X24)

#define _MOV_R11_TO_PTR_RAX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X18)
#define _MOV_R11_TO_PTR_RBX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1B)
#define _MOV_R11_TO_PTR_RCX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X19)
#define _MOV_R11_TO_PTR_RDX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1A)
#define _MOV_R11_TO_PTR_RDI \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1F)
#define _MOV_R11_TO_PTR_RSI \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1E)
#define _MOV_R11_TO_PTR_RBP \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X5D)\
	__ASM__OP__(0X00)
#define _MOV_R11_TO_PTR_RSP \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X24)
#define _MOV_R11_TO_PTR_R8 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0X18)
#define _MOV_R11_TO_PTR_R9 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0X19)
#define _MOV_R11_TO_PTR_R10 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1A)
#define _MOV_R11_TO_PTR_R11 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1B)
#define _MOV_R11_TO_PTR_R12 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X24)
#define _MOV_R11_TO_PTR_R13 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X5D)\
	__ASM__OP__(0X00)
#define _MOV_R11_TO_PTR_R14 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1E)
#define _MOV_R11_TO_PTR_R15 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1F)
#define _MOV_R11_TO_PTR_EAX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X18)
#define _MOV_R11_TO_PTR_EBX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1B)
#define _MOV_R11_TO_PTR_ECX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X19)
#define _MOV_R11_TO_PTR_EDX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1A)
#define _MOV_R11_TO_PTR_EDI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1F)
#define _MOV_R11_TO_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1E)
#define _MOV_R11_TO_PTR_EBP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X5D)\
	__ASM__OP__(0X00)
#define _MOV_R11_TO_PTR_ESP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X24)

#define _MOV_R12_TO_PTR_RAX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X20)
#define _MOV_R12_TO_PTR_RBX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X23)
#define _MOV_R12_TO_PTR_RCX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X21)
#define _MOV_R12_TO_PTR_RDX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X22)
#define _MOV_R12_TO_PTR_RDI \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X27)
#define _MOV_R12_TO_PTR_RSI \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X26)
#define _MOV_R12_TO_PTR_RBP \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X65)\
	__ASM__OP__(0X00)
#define _MOV_R12_TO_PTR_RSP \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X24)
#define _MOV_R12_TO_PTR_R8 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0X20)
#define _MOV_R12_TO_PTR_R9 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0X21)
#define _MOV_R12_TO_PTR_R10 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X22)
#define _MOV_R12_TO_PTR_R11 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X23)
#define _MOV_R12_TO_PTR_R12 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X24)
#define _MOV_R12_TO_PTR_R13 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X65)\
	__ASM__OP__(0X00)
#define _MOV_R12_TO_PTR_R14 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X26)
#define _MOV_R12_TO_PTR_R15 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X27)
#define _MOV_R12_TO_PTR_EAX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X20)
#define _MOV_R12_TO_PTR_EBX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X23)
#define _MOV_R12_TO_PTR_ECX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X21)
#define _MOV_R12_TO_PTR_EDX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X22)
#define _MOV_R12_TO_PTR_EDI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X27)
#define _MOV_R12_TO_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X26)
#define _MOV_R12_TO_PTR_EBP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X65)\
	__ASM__OP__(0X00)
#define _MOV_R12_TO_PTR_ESP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X24)

#define _MOV_R13_TO_PTR_RAX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X28)
#define _MOV_R13_TO_PTR_RBX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2B)
#define _MOV_R13_TO_PTR_RCX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X29)
#define _MOV_R13_TO_PTR_RDX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2A)
#define _MOV_R13_TO_PTR_RDI \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2F)
#define _MOV_R13_TO_PTR_RSI \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2E)
#define _MOV_R13_TO_PTR_RBP \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X6D)\
	__ASM__OP__(0X00)
#define _MOV_R13_TO_PTR_RSP \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X24)
#define _MOV_R13_TO_PTR_R8 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0X28)
#define _MOV_R13_TO_PTR_R9 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0X29)
#define _MOV_R13_TO_PTR_R10 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2A)
#define _MOV_R13_TO_PTR_R11 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2B)
#define _MOV_R13_TO_PTR_R12 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X24)
#define _MOV_R13_TO_PTR_R13 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X6D)\
	__ASM__OP__(0X00)
#define _MOV_R13_TO_PTR_R14 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2E)
#define _MOV_R13_TO_PTR_R15 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2F)
#define _MOV_R13_TO_PTR_EAX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X28)
#define _MOV_R13_TO_PTR_EBX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2B)
#define _MOV_R13_TO_PTR_ECX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X29)
#define _MOV_R13_TO_PTR_EDX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2A)
#define _MOV_R13_TO_PTR_EDI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2F)
#define _MOV_R13_TO_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2E)
#define _MOV_R13_TO_PTR_EBP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X6D)\
	__ASM__OP__(0X00)
#define _MOV_R13_TO_PTR_ESP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X24)

#define _MOV_R14_TO_PTR_RAX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X30)
#define _MOV_R14_TO_PTR_RBX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X33)
#define _MOV_R14_TO_PTR_RCX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X31)
#define _MOV_R14_TO_PTR_RDX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X32)
#define _MOV_R14_TO_PTR_RDI \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X37)
#define _MOV_R14_TO_PTR_RSI \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X36)
#define _MOV_R14_TO_PTR_RBP \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X75)\
	__ASM__OP__(0X00)
#define _MOV_R14_TO_PTR_RSP \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X24)
#define _MOV_R14_TO_PTR_R8 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0X30)
#define _MOV_R14_TO_PTR_R9 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0X31)
#define _MOV_R14_TO_PTR_R10 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X32)
#define _MOV_R14_TO_PTR_R11 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X33)
#define _MOV_R14_TO_PTR_R12 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X24)
#define _MOV_R14_TO_PTR_R13 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X75)\
	__ASM__OP__(0X00)
#define _MOV_R14_TO_PTR_R14 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X36)
#define _MOV_R14_TO_PTR_R15 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X37)
#define _MOV_R14_TO_PTR_EAX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X30)
#define _MOV_R14_TO_PTR_EBX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X33)
#define _MOV_R14_TO_PTR_ECX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X31)
#define _MOV_R14_TO_PTR_EDX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X32)
#define _MOV_R14_TO_PTR_EDI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X37)
#define _MOV_R14_TO_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X36)
#define _MOV_R14_TO_PTR_EBP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X75)\
	__ASM__OP__(0X00)
#define _MOV_R14_TO_PTR_ESP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X24)

#define _MOV_R15_TO_PTR_RAX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X38)
#define _MOV_R15_TO_PTR_RBX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3B)
#define _MOV_R15_TO_PTR_RCX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X39)
#define _MOV_R15_TO_PTR_RDX \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3A)
#define _MOV_R15_TO_PTR_RDI \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3F)
#define _MOV_R15_TO_PTR_RSI \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3E)
#define _MOV_R15_TO_PTR_RBP \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X7D)\
	__ASM__OP__(0X00)
#define _MOV_R15_TO_PTR_RSP \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X24)
#define _MOV_R15_TO_PTR_R8 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0X38)
#define _MOV_R15_TO_PTR_R9 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0X39)
#define _MOV_R15_TO_PTR_R10 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3A)
#define _MOV_R15_TO_PTR_R11 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3B)
#define _MOV_R15_TO_PTR_R12 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X24)
#define _MOV_R15_TO_PTR_R13 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X7D)\
	__ASM__OP__(0X00)
#define _MOV_R15_TO_PTR_R14 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3E)
#define _MOV_R15_TO_PTR_R15 \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3F)
#define _MOV_R15_TO_PTR_EAX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X38)
#define _MOV_R15_TO_PTR_EBX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3B)
#define _MOV_R15_TO_PTR_ECX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X39)
#define _MOV_R15_TO_PTR_EDX \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3A)
#define _MOV_R15_TO_PTR_EDI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3F)
#define _MOV_R15_TO_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3E)
#define _MOV_R15_TO_PTR_EBP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X7D)\
	__ASM__OP__(0X00)
#define _MOV_R15_TO_PTR_ESP \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X24)

#define _MOV_RAX_FROM_PTR_RAX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X80)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_FROM_PTR_RBX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X83)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_FROM_PTR_RCX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X81)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_FROM_PTR_RDX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X82)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_FROM_PTR_RDI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X87)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_FROM_PTR_RSI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X86)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_FROM_PTR_R8_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X80)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_FROM_PTR_R9_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X81)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_FROM_PTR_R10_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X82)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_FROM_PTR_R11_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X83)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_FROM_PTR_R12_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_FROM_PTR_R13_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_FROM_PTR_R14_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X86)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_FROM_PTR_R15_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X87)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_FROM_PTR_EAX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X80)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_FROM_PTR_EBX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X83)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_FROM_PTR_ECX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X81)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_FROM_PTR_EDX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X82)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_FROM_PTR_EDI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X87)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_FROM_PTR_ESI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X86)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_RBX_FROM_PTR_RAX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X98)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_FROM_PTR_RBX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9B)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_FROM_PTR_RCX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X99)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_FROM_PTR_RDX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9A)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_FROM_PTR_RDI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9F)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_FROM_PTR_RSI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9E)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_FROM_PTR_R8_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X98)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_FROM_PTR_R9_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X99)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_FROM_PTR_R10_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9A)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_FROM_PTR_R11_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9B)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_FROM_PTR_R12_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_FROM_PTR_R13_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_FROM_PTR_R14_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9E)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_FROM_PTR_R15_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9F)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_FROM_PTR_EAX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X98)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_FROM_PTR_EBX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9B)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_FROM_PTR_ECX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X99)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_FROM_PTR_EDX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9A)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_FROM_PTR_EDI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9F)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_FROM_PTR_ESI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9E)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_RCX_FROM_PTR_RAX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X88)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_FROM_PTR_RBX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8B)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_FROM_PTR_RCX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X89)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_FROM_PTR_RDX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8A)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_FROM_PTR_RDI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8F)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_FROM_PTR_RSI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8E)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_FROM_PTR_R8_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X88)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_FROM_PTR_R9_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X89)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_FROM_PTR_R10_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8A)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_FROM_PTR_R11_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8B)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_FROM_PTR_R12_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_FROM_PTR_R13_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_FROM_PTR_R14_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8E)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_FROM_PTR_R15_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8F)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_FROM_PTR_EAX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X88)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_FROM_PTR_EBX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8B)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_FROM_PTR_ECX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X89)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_FROM_PTR_EDX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8A)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_FROM_PTR_EDI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8F)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_FROM_PTR_ESI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8E)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_RDX_FROM_PTR_RAX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X90)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_FROM_PTR_RBX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X93)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_FROM_PTR_RCX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X91)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_FROM_PTR_RDX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X92)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_FROM_PTR_RDI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X97)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_FROM_PTR_RSI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X96)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X94)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_FROM_PTR_R8_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X90)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_FROM_PTR_R9_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X91)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_FROM_PTR_R10_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X92)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_FROM_PTR_R11_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X93)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_FROM_PTR_R12_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X94)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_FROM_PTR_R13_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_FROM_PTR_R14_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X96)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_FROM_PTR_R15_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X97)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_FROM_PTR_EAX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X90)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_FROM_PTR_EBX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X93)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_FROM_PTR_ECX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X91)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_FROM_PTR_EDX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X92)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_FROM_PTR_EDI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X97)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_FROM_PTR_ESI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X96)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X94)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_RDI_FROM_PTR_RAX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB8)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_FROM_PTR_RBX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBB)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_FROM_PTR_RCX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB9)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_FROM_PTR_RDX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBA)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_FROM_PTR_RDI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBF)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_FROM_PTR_RSI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBE)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_FROM_PTR_R8_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB8)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_FROM_PTR_R9_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB9)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_FROM_PTR_R10_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBA)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_FROM_PTR_R11_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBB)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_FROM_PTR_R12_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_FROM_PTR_R13_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_FROM_PTR_R14_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBE)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_FROM_PTR_R15_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBF)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_FROM_PTR_EAX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB8)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_FROM_PTR_EBX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBB)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_FROM_PTR_ECX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB9)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_FROM_PTR_EDX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBA)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_FROM_PTR_EDI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBF)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_FROM_PTR_ESI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBE)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_RSI_FROM_PTR_RAX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB0)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_FROM_PTR_RBX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB3)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_FROM_PTR_RCX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB1)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_FROM_PTR_RDX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB2)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_FROM_PTR_RDI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB7)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_FROM_PTR_RSI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB6)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB5)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_FROM_PTR_R8_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB0)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_FROM_PTR_R9_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB1)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_FROM_PTR_R10_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB2)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_FROM_PTR_R11_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB3)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_FROM_PTR_R12_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_FROM_PTR_R13_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB5)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_FROM_PTR_R14_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB6)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_FROM_PTR_R15_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB7)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_FROM_PTR_EAX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB0)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_FROM_PTR_EBX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB3)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_FROM_PTR_ECX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB1)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_FROM_PTR_EDX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB2)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_FROM_PTR_EDI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB7)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_FROM_PTR_ESI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB6)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB5)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_RBP_FROM_PTR_RAX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA8)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_FROM_PTR_RBX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAB)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_FROM_PTR_RCX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA9)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_FROM_PTR_RDX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAA)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_FROM_PTR_RDI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAF)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_FROM_PTR_RSI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAE)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAD)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_FROM_PTR_R8_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA8)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_FROM_PTR_R9_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA9)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_FROM_PTR_R10_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAA)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_FROM_PTR_R11_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAB)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_FROM_PTR_R12_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_FROM_PTR_R13_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAD)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_FROM_PTR_R14_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAE)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_FROM_PTR_R15_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAF)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_FROM_PTR_EAX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA8)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_FROM_PTR_EBX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAB)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_FROM_PTR_ECX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA9)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_FROM_PTR_EDX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAA)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_FROM_PTR_EDI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAF)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_FROM_PTR_ESI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAE)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAD)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_RSP_FROM_PTR_RAX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA0)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_FROM_PTR_RBX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA3)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_FROM_PTR_RCX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA1)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_FROM_PTR_RDX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA2)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_FROM_PTR_RDI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA7)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_FROM_PTR_RSI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA6)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA5)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_FROM_PTR_R8_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA0)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_FROM_PTR_R9_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA1)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_FROM_PTR_R10_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA2)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_FROM_PTR_R11_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA3)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_FROM_PTR_R12_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_FROM_PTR_R13_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA5)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_FROM_PTR_R14_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA6)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_FROM_PTR_R15_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA7)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_FROM_PTR_EAX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA0)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_FROM_PTR_EBX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA3)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_FROM_PTR_ECX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA1)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_FROM_PTR_EDX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA2)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_FROM_PTR_EDI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA7)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_FROM_PTR_ESI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA6)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA5)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_R8_FROM_PTR_RAX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X80)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_FROM_PTR_RBX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X83)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_FROM_PTR_RCX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X81)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_FROM_PTR_RDX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X82)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_FROM_PTR_RDI_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X87)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_FROM_PTR_RSI_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X86)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_FROM_PTR_R8_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X80)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_FROM_PTR_R9_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X81)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_FROM_PTR_R10_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X82)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_FROM_PTR_R11_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X83)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_FROM_PTR_R12_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_FROM_PTR_R13_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_FROM_PTR_R14_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X86)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_FROM_PTR_R15_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X87)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_FROM_PTR_EAX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X80)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_FROM_PTR_EBX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X83)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_FROM_PTR_ECX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X81)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_FROM_PTR_EDX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X82)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_FROM_PTR_EDI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X87)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_FROM_PTR_ESI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X86)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_R9_FROM_PTR_RAX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X88)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_FROM_PTR_RBX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8B)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_FROM_PTR_RCX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X89)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_FROM_PTR_RDX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8A)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_FROM_PTR_RDI_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8F)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_FROM_PTR_RSI_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8E)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_FROM_PTR_R8_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X88)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_FROM_PTR_R9_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X89)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_FROM_PTR_R10_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8A)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_FROM_PTR_R11_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8B)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_FROM_PTR_R12_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_FROM_PTR_R13_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_FROM_PTR_R14_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8E)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_FROM_PTR_R15_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8F)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_FROM_PTR_EAX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X88)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_FROM_PTR_EBX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8B)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_FROM_PTR_ECX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X89)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_FROM_PTR_EDX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8A)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_FROM_PTR_EDI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8F)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_FROM_PTR_ESI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8E)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_R10_FROM_PTR_RAX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X90)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_FROM_PTR_RBX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X93)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_FROM_PTR_RCX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X91)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_FROM_PTR_RDX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X92)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_FROM_PTR_RDI_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X97)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_FROM_PTR_RSI_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X96)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X94)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_FROM_PTR_R8_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X90)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_FROM_PTR_R9_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X91)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_FROM_PTR_R10_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X92)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_FROM_PTR_R11_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X93)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_FROM_PTR_R12_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X94)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_FROM_PTR_R13_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_FROM_PTR_R14_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X96)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_FROM_PTR_R15_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X97)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_FROM_PTR_EAX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X90)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_FROM_PTR_EBX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X93)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_FROM_PTR_ECX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X91)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_FROM_PTR_EDX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X92)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_FROM_PTR_EDI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X97)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_FROM_PTR_ESI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X96)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X94)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_R11_FROM_PTR_RAX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X98)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_FROM_PTR_RBX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9B)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_FROM_PTR_RCX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X99)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_FROM_PTR_RDX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9A)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_FROM_PTR_RDI_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9F)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_FROM_PTR_RSI_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9E)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_FROM_PTR_R8_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X98)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_FROM_PTR_R9_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X99)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_FROM_PTR_R10_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9A)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_FROM_PTR_R11_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9B)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_FROM_PTR_R12_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_FROM_PTR_R13_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_FROM_PTR_R14_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9E)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_FROM_PTR_R15_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9F)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_FROM_PTR_EAX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X98)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_FROM_PTR_EBX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9B)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_FROM_PTR_ECX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X99)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_FROM_PTR_EDX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9A)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_FROM_PTR_EDI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9F)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_FROM_PTR_ESI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9E)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_R12_FROM_PTR_RAX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA0)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_FROM_PTR_RBX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA3)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_FROM_PTR_RCX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA1)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_FROM_PTR_RDX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA2)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_FROM_PTR_RDI_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA7)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_FROM_PTR_RSI_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA6)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA5)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_FROM_PTR_R8_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA0)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_FROM_PTR_R9_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA1)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_FROM_PTR_R10_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA2)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_FROM_PTR_R11_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA3)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_FROM_PTR_R12_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_FROM_PTR_R13_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA5)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_FROM_PTR_R14_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA6)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_FROM_PTR_R15_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA7)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_FROM_PTR_EAX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA0)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_FROM_PTR_EBX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA3)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_FROM_PTR_ECX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA1)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_FROM_PTR_EDX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA2)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_FROM_PTR_EDI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA7)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_FROM_PTR_ESI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA6)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA5)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_R13_FROM_PTR_RAX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA8)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_FROM_PTR_RBX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAB)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_FROM_PTR_RCX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA9)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_FROM_PTR_RDX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAA)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_FROM_PTR_RDI_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAF)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_FROM_PTR_RSI_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAE)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAD)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_FROM_PTR_R8_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA8)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_FROM_PTR_R9_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA9)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_FROM_PTR_R10_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAA)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_FROM_PTR_R11_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAB)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_FROM_PTR_R12_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_FROM_PTR_R13_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAD)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_FROM_PTR_R14_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAE)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_FROM_PTR_R15_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAF)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_FROM_PTR_EAX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA8)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_FROM_PTR_EBX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAB)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_FROM_PTR_ECX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA9)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_FROM_PTR_EDX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAA)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_FROM_PTR_EDI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAF)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_FROM_PTR_ESI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAE)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAD)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_R14_FROM_PTR_RAX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB0)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_FROM_PTR_RBX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB3)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_FROM_PTR_RCX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB1)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_FROM_PTR_RDX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB2)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_FROM_PTR_RDI_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB7)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_FROM_PTR_RSI_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB6)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB5)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_FROM_PTR_R8_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB0)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_FROM_PTR_R9_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB1)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_FROM_PTR_R10_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB2)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_FROM_PTR_R11_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB3)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_FROM_PTR_R12_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_FROM_PTR_R13_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB5)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_FROM_PTR_R14_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB6)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_FROM_PTR_R15_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB7)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_FROM_PTR_EAX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB0)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_FROM_PTR_EBX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB3)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_FROM_PTR_ECX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB1)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_FROM_PTR_EDX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB2)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_FROM_PTR_EDI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB7)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_FROM_PTR_ESI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB6)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB5)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_R15_FROM_PTR_RAX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB8)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_FROM_PTR_RBX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBB)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_FROM_PTR_RCX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB9)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_FROM_PTR_RDX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBA)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_FROM_PTR_RDI_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBF)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_FROM_PTR_RSI_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBE)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_FROM_PTR_R8_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB8)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_FROM_PTR_R9_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB9)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_FROM_PTR_R10_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBA)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_FROM_PTR_R11_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBB)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_FROM_PTR_R12_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_FROM_PTR_R13_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_FROM_PTR_R14_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBE)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_FROM_PTR_R15_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBF)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_FROM_PTR_EAX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB8)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_FROM_PTR_EBX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBB)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_FROM_PTR_ECX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB9)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_FROM_PTR_EDX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBA)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_FROM_PTR_EDI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBF)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_FROM_PTR_ESI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBE)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_RAX_TO_PTR_RAX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X80)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_TO_PTR_RBX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X83)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_TO_PTR_RCX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X81)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_TO_PTR_RDX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X82)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_TO_PTR_RDI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X87)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_TO_PTR_RSI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X86)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_TO_PTR_R8_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X80)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_TO_PTR_R9_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X81)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_TO_PTR_R10_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X82)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_TO_PTR_R11_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X83)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_TO_PTR_R12_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_TO_PTR_R13_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_TO_PTR_R14_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X86)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_TO_PTR_R15_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X87)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_TO_PTR_EAX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X80)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_TO_PTR_EBX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X83)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_TO_PTR_ECX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X81)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_TO_PTR_EDX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X82)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_TO_PTR_EDI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X87)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_TO_PTR_ESI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X86)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE)
#define _MOV_RAX_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_RBX_TO_PTR_RAX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X98)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_TO_PTR_RBX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9B)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_TO_PTR_RCX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X99)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_TO_PTR_RDX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9A)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_TO_PTR_RDI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9F)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_TO_PTR_RSI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9E)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_TO_PTR_R8_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X98)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_TO_PTR_R9_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X99)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_TO_PTR_R10_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9A)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_TO_PTR_R11_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9B)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_TO_PTR_R12_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_TO_PTR_R13_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_TO_PTR_R14_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9E)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_TO_PTR_R15_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9F)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_TO_PTR_EAX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X98)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_TO_PTR_EBX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9B)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_TO_PTR_ECX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X99)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_TO_PTR_EDX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9A)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_TO_PTR_EDI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9F)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_TO_PTR_ESI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9E)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_RCX_TO_PTR_RAX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X88)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_TO_PTR_RBX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8B)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_TO_PTR_RCX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X89)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_TO_PTR_RDX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8A)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_TO_PTR_RDI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8F)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_TO_PTR_RSI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8E)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_TO_PTR_R8_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X88)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_TO_PTR_R9_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X89)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_TO_PTR_R10_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8A)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_TO_PTR_R11_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8B)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_TO_PTR_R12_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_TO_PTR_R13_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_TO_PTR_R14_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8E)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_TO_PTR_R15_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8F)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_TO_PTR_EAX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X88)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_TO_PTR_EBX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8B)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_TO_PTR_ECX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X89)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_TO_PTR_EDX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8A)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_TO_PTR_EDI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8F)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_TO_PTR_ESI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8E)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_RDX_TO_PTR_RAX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X90)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_TO_PTR_RBX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X93)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_TO_PTR_RCX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X91)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_TO_PTR_RDX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X92)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_TO_PTR_RDI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X97)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_TO_PTR_RSI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X96)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X94)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_TO_PTR_R8_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X90)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_TO_PTR_R9_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X91)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_TO_PTR_R10_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X92)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_TO_PTR_R11_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X93)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_TO_PTR_R12_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X94)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_TO_PTR_R13_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_TO_PTR_R14_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X96)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_TO_PTR_R15_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X97)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_TO_PTR_EAX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X90)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_TO_PTR_EBX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X93)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_TO_PTR_ECX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X91)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_TO_PTR_EDX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X92)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_TO_PTR_EDI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X97)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_TO_PTR_ESI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X96)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X94)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_RDI_TO_PTR_RAX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB8)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_TO_PTR_RBX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBB)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_TO_PTR_RCX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB9)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_TO_PTR_RDX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBA)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_TO_PTR_RDI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBF)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_TO_PTR_RSI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBE)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_TO_PTR_R8_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB8)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_TO_PTR_R9_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB9)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_TO_PTR_R10_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBA)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_TO_PTR_R11_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBB)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_TO_PTR_R12_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_TO_PTR_R13_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_TO_PTR_R14_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBE)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_TO_PTR_R15_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBF)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_TO_PTR_EAX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB8)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_TO_PTR_EBX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBB)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_TO_PTR_ECX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB9)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_TO_PTR_EDX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBA)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_TO_PTR_EDI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBF)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_TO_PTR_ESI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBE)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_RSI_TO_PTR_RAX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB0)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_TO_PTR_RBX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB3)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_TO_PTR_RCX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB1)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_TO_PTR_RDX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB2)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_TO_PTR_RDI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB7)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_TO_PTR_RSI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB6)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB5)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_TO_PTR_R8_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB0)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_TO_PTR_R9_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB1)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_TO_PTR_R10_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB2)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_TO_PTR_R11_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB3)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_TO_PTR_R12_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_TO_PTR_R13_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB5)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_TO_PTR_R14_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB6)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_TO_PTR_R15_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB7)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_TO_PTR_EAX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB0)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_TO_PTR_EBX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB3)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_TO_PTR_ECX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB1)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_TO_PTR_EDX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB2)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_TO_PTR_EDI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB7)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_TO_PTR_ESI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB6)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB5)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_RBP_TO_PTR_RAX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA8)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_TO_PTR_RBX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAB)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_TO_PTR_RCX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA9)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_TO_PTR_RDX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAA)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_TO_PTR_RDI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAF)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_TO_PTR_RSI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAE)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAD)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_TO_PTR_R8_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA8)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_TO_PTR_R9_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA9)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_TO_PTR_R10_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAA)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_TO_PTR_R11_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAB)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_TO_PTR_R12_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_TO_PTR_R13_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAD)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_TO_PTR_R14_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAE)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_TO_PTR_R15_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAF)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_TO_PTR_EAX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA8)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_TO_PTR_EBX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAB)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_TO_PTR_ECX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA9)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_TO_PTR_EDX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAA)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_TO_PTR_EDI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAF)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_TO_PTR_ESI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAE)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAD)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_RSP_TO_PTR_RAX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA0)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_TO_PTR_RBX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA3)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_TO_PTR_RCX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA1)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_TO_PTR_RDX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA2)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_TO_PTR_RDI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA7)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_TO_PTR_RSI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA6)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA5)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_TO_PTR_R8_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA0)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_TO_PTR_R9_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA1)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_TO_PTR_R10_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA2)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_TO_PTR_R11_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA3)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_TO_PTR_R12_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_TO_PTR_R13_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA5)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_TO_PTR_R14_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA6)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_TO_PTR_R15_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA7)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_TO_PTR_EAX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA0)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_TO_PTR_EBX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA3)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_TO_PTR_ECX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA1)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_TO_PTR_EDX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA2)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_TO_PTR_EDI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA7)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_TO_PTR_ESI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA6)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA5)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_R8_TO_PTR_RAX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X80)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_TO_PTR_RBX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X83)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_TO_PTR_RCX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X81)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_TO_PTR_RDX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X82)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_TO_PTR_RDI_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X87)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_TO_PTR_RSI_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X86)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_TO_PTR_R8_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X80)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_TO_PTR_R9_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X81)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_TO_PTR_R10_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X82)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_TO_PTR_R11_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X83)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_TO_PTR_R12_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_TO_PTR_R13_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_TO_PTR_R14_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X86)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_TO_PTR_R15_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X87)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_TO_PTR_EAX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X80)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_TO_PTR_EBX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X83)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_TO_PTR_ECX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X81)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_TO_PTR_EDX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X82)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_TO_PTR_EDI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X87)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_TO_PTR_ESI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X86)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_R9_TO_PTR_RAX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X88)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_TO_PTR_RBX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8B)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_TO_PTR_RCX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X89)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_TO_PTR_RDX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8A)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_TO_PTR_RDI_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8F)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_TO_PTR_RSI_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8E)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_TO_PTR_R8_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X88)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_TO_PTR_R9_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X89)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_TO_PTR_R10_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8A)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_TO_PTR_R11_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8B)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_TO_PTR_R12_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_TO_PTR_R13_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_TO_PTR_R14_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8E)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_TO_PTR_R15_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8F)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_TO_PTR_EAX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X88)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_TO_PTR_EBX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8B)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_TO_PTR_ECX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X89)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_TO_PTR_EDX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8A)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_TO_PTR_EDI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8F)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_TO_PTR_ESI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8E)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_R10_TO_PTR_RAX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X90)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_TO_PTR_RBX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X93)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_TO_PTR_RCX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X91)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_TO_PTR_RDX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X92)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_TO_PTR_RDI_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X97)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_TO_PTR_RSI_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X96)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X94)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_TO_PTR_R8_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X90)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_TO_PTR_R9_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X91)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_TO_PTR_R10_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X92)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_TO_PTR_R11_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X93)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_TO_PTR_R12_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X94)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_TO_PTR_R13_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_TO_PTR_R14_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X96)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_TO_PTR_R15_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X97)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_TO_PTR_EAX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X90)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_TO_PTR_EBX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X93)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_TO_PTR_ECX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X91)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_TO_PTR_EDX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X92)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_TO_PTR_EDI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X97)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_TO_PTR_ESI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X96)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X94)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_R11_TO_PTR_RAX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X98)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_TO_PTR_RBX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9B)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_TO_PTR_RCX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X99)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_TO_PTR_RDX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9A)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_TO_PTR_RDI_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9F)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_TO_PTR_RSI_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9E)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_TO_PTR_R8_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X98)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_TO_PTR_R9_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X99)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_TO_PTR_R10_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9A)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_TO_PTR_R11_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9B)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_TO_PTR_R12_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_TO_PTR_R13_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_TO_PTR_R14_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9E)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_TO_PTR_R15_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9F)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_TO_PTR_EAX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X98)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_TO_PTR_EBX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9B)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_TO_PTR_ECX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X99)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_TO_PTR_EDX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9A)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_TO_PTR_EDI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9F)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_TO_PTR_ESI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9E)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_R12_TO_PTR_RAX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA0)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_TO_PTR_RBX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA3)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_TO_PTR_RCX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA1)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_TO_PTR_RDX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA2)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_TO_PTR_RDI_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA7)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_TO_PTR_RSI_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA6)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA5)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_TO_PTR_R8_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA0)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_TO_PTR_R9_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA1)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_TO_PTR_R10_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA2)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_TO_PTR_R11_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA3)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_TO_PTR_R12_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_TO_PTR_R13_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA5)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_TO_PTR_R14_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA6)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_TO_PTR_R15_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA7)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_TO_PTR_EAX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA0)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_TO_PTR_EBX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA3)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_TO_PTR_ECX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA1)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_TO_PTR_EDX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA2)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_TO_PTR_EDI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA7)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_TO_PTR_ESI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA6)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA5)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_R13_TO_PTR_RAX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA8)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_TO_PTR_RBX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAB)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_TO_PTR_RCX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA9)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_TO_PTR_RDX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAA)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_TO_PTR_RDI_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAF)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_TO_PTR_RSI_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAE)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAD)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_TO_PTR_R8_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA8)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_TO_PTR_R9_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA9)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_TO_PTR_R10_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAA)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_TO_PTR_R11_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAB)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_TO_PTR_R12_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_TO_PTR_R13_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAD)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_TO_PTR_R14_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAE)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_TO_PTR_R15_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAF)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_TO_PTR_EAX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA8)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_TO_PTR_EBX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAB)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_TO_PTR_ECX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA9)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_TO_PTR_EDX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAA)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_TO_PTR_EDI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAF)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_TO_PTR_ESI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAE)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAD)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_R14_TO_PTR_RAX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB0)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_TO_PTR_RBX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB3)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_TO_PTR_RCX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB1)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_TO_PTR_RDX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB2)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_TO_PTR_RDI_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB7)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_TO_PTR_RSI_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB6)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB5)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_TO_PTR_R8_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB0)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_TO_PTR_R9_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB1)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_TO_PTR_R10_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB2)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_TO_PTR_R11_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB3)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_TO_PTR_R12_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_TO_PTR_R13_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB5)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_TO_PTR_R14_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB6)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_TO_PTR_R15_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB7)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_TO_PTR_EAX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB0)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_TO_PTR_EBX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB3)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_TO_PTR_ECX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB1)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_TO_PTR_EDX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB2)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_TO_PTR_EDI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB7)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_TO_PTR_ESI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB6)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB5)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_R15_TO_PTR_RAX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB8)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_TO_PTR_RBX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBB)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_TO_PTR_RCX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB9)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_TO_PTR_RDX_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBA)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_TO_PTR_RDI_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBF)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_TO_PTR_RSI_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBE)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_TO_PTR_R8_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB8)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_TO_PTR_R9_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB9)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_TO_PTR_R10_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBA)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_TO_PTR_R11_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBB)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_TO_PTR_R12_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_TO_PTR_R13_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_TO_PTR_R14_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBE)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_TO_PTR_R15_(VALUE) \
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBF)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_TO_PTR_EAX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB8)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_TO_PTR_EBX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBB)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_TO_PTR_ECX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB9)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_TO_PTR_EDX_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBA)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_TO_PTR_EDI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBF)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_TO_PTR_ESI_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBE)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
/* ************************* [^] 64-BIT MEMORY [^] ************************** */

#include "32.INL"

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
