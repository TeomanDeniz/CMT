/* ************************ [v] 32-BIT SEGMENTS [v] ************************* */
#ifdef __SYSTEM_32_BIT__
#define _MOV_EAX_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X05)\
	__ASM__IMM32__(VALUE)
#define _MOV_EAX_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X05)\
	__ASM__IMM32__(VALUE)

#define _MOV_EBX_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1D)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBX_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1D)\
	__ASM__IMM32__(VALUE)

#define _MOV_ECX_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0D)\
	__ASM__IMM32__(VALUE)
#define _MOV_ECX_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0D)\
	__ASM__IMM32__(VALUE)

#define _MOV_EDX_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X15)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDX_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X15)\
	__ASM__IMM32__(VALUE)

#define _MOV_EDI_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3D)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDI_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3D)\
	__ASM__IMM32__(VALUE)

#define _MOV_ESI_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X35)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESI_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X35)\
	__ASM__IMM32__(VALUE)

#define _MOV_EBP_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2D)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBP_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2D)\
	__ASM__IMM32__(VALUE)

#define _MOV_ESP_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESP_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_EAX_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X05)\
	__ASM__IMM32__(VALUE)
#define _MOV_EAX_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X05)\
	__ASM__IMM32__(VALUE)

#define _MOV_EBX_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1D)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBX_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1D)\
	__ASM__IMM32__(VALUE)

#define _MOV_ECX_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0D)\
	__ASM__IMM32__(VALUE)
#define _MOV_ECX_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0D)\
	__ASM__IMM32__(VALUE)

#define _MOV_EDX_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X15)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDX_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X15)\
	__ASM__IMM32__(VALUE)

#define _MOV_EDI_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3D)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDI_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3D)\
	__ASM__IMM32__(VALUE)

#define _MOV_ESI_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X35)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESI_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X35)\
	__ASM__IMM32__(VALUE)

#define _MOV_EBP_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2D)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBP_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2D)\
	__ASM__IMM32__(VALUE)

#define _MOV_ESP_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESP_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_EAX_FROM_PTR_FS_EAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X00)
#define _MOV_EAX_FROM_PTR_FS_EBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X03)
#define _MOV_EAX_FROM_PTR_FS_ECX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X01)
#define _MOV_EAX_FROM_PTR_FS_EDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X02)
#define _MOV_EAX_FROM_PTR_FS_EDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X07)
#define _MOV_EAX_FROM_PTR_FS_ESI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X06)
#define _MOV_EAX_FROM_PTR_FS_EBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X00)
#define _MOV_EAX_FROM_PTR_FS_ESP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X24)
#define _MOV_EAX_FROM_PTR_GS_EAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X00)
#define _MOV_EAX_FROM_PTR_GS_EBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X03)
#define _MOV_EAX_FROM_PTR_GS_ECX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X01)
#define _MOV_EAX_FROM_PTR_GS_EDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X02)
#define _MOV_EAX_FROM_PTR_GS_EDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X07)
#define _MOV_EAX_FROM_PTR_GS_ESI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X06)
#define _MOV_EAX_FROM_PTR_GS_EBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X00)
#define _MOV_EAX_FROM_PTR_GS_ESP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X24)

#define _MOV_EBX_FROM_PTR_FS_EAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X18)
#define _MOV_EBX_FROM_PTR_FS_EBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1B)
#define _MOV_EBX_FROM_PTR_FS_ECX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X19)
#define _MOV_EBX_FROM_PTR_FS_EDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1A)
#define _MOV_EBX_FROM_PTR_FS_EDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1F)
#define _MOV_EBX_FROM_PTR_FS_ESI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1E)
#define _MOV_EBX_FROM_PTR_FS_EBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X5D)\
	__ASM__OP__(0X00)
#define _MOV_EBX_FROM_PTR_FS_ESP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X24)
#define _MOV_EBX_FROM_PTR_GS_EAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X18)
#define _MOV_EBX_FROM_PTR_GS_EBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1B)
#define _MOV_EBX_FROM_PTR_GS_ECX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X19)
#define _MOV_EBX_FROM_PTR_GS_EDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1A)
#define _MOV_EBX_FROM_PTR_GS_EDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1F)
#define _MOV_EBX_FROM_PTR_GS_ESI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1E)
#define _MOV_EBX_FROM_PTR_GS_EBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X5D)\
	__ASM__OP__(0X00)
#define _MOV_EBX_FROM_PTR_GS_ESP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X24)

#define _MOV_ECX_FROM_PTR_FS_EAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X08)
#define _MOV_ECX_FROM_PTR_FS_EBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0B)
#define _MOV_ECX_FROM_PTR_FS_ECX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X09)
#define _MOV_ECX_FROM_PTR_FS_EDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0A)
#define _MOV_ECX_FROM_PTR_FS_EDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0F)
#define _MOV_ECX_FROM_PTR_FS_ESI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0E)
#define _MOV_ECX_FROM_PTR_FS_EBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X00)
#define _MOV_ECX_FROM_PTR_FS_ESP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X24)
#define _MOV_ECX_FROM_PTR_GS_EAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X08)
#define _MOV_ECX_FROM_PTR_GS_EBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0B)
#define _MOV_ECX_FROM_PTR_GS_ECX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X09)
#define _MOV_ECX_FROM_PTR_GS_EDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0A)
#define _MOV_ECX_FROM_PTR_GS_EDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0F)
#define _MOV_ECX_FROM_PTR_GS_ESI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0E)
#define _MOV_ECX_FROM_PTR_GS_EBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X00)
#define _MOV_ECX_FROM_PTR_GS_ESP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X24)

#define _MOV_EDX_FROM_PTR_FS_EAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X10)
#define _MOV_EDX_FROM_PTR_FS_EBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X13)
#define _MOV_EDX_FROM_PTR_FS_ECX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X11)
#define _MOV_EDX_FROM_PTR_FS_EDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X12)
#define _MOV_EDX_FROM_PTR_FS_EDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X17)
#define _MOV_EDX_FROM_PTR_FS_ESI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X16)
#define _MOV_EDX_FROM_PTR_FS_EBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X55)\
	__ASM__OP__(0X00)
#define _MOV_EDX_FROM_PTR_FS_ESP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X24)
#define _MOV_EDX_FROM_PTR_GS_EAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X10)
#define _MOV_EDX_FROM_PTR_GS_EBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X13)
#define _MOV_EDX_FROM_PTR_GS_ECX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X11)
#define _MOV_EDX_FROM_PTR_GS_EDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X12)
#define _MOV_EDX_FROM_PTR_GS_EDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X17)
#define _MOV_EDX_FROM_PTR_GS_ESI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X16)
#define _MOV_EDX_FROM_PTR_GS_EBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X55)\
	__ASM__OP__(0X00)
#define _MOV_EDX_FROM_PTR_GS_ESP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X24)

#define _MOV_EDI_FROM_PTR_FS_EAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X38)
#define _MOV_EDI_FROM_PTR_FS_EBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3B)
#define _MOV_EDI_FROM_PTR_FS_ECX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X39)
#define _MOV_EDI_FROM_PTR_FS_EDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3A)
#define _MOV_EDI_FROM_PTR_FS_EDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3F)
#define _MOV_EDI_FROM_PTR_FS_ESI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3E)
#define _MOV_EDI_FROM_PTR_FS_EBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X7D)\
	__ASM__OP__(0X00)
#define _MOV_EDI_FROM_PTR_FS_ESP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X24)
#define _MOV_EDI_FROM_PTR_GS_EAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X38)
#define _MOV_EDI_FROM_PTR_GS_EBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3B)
#define _MOV_EDI_FROM_PTR_GS_ECX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X39)
#define _MOV_EDI_FROM_PTR_GS_EDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3A)
#define _MOV_EDI_FROM_PTR_GS_EDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3F)
#define _MOV_EDI_FROM_PTR_GS_ESI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3E)
#define _MOV_EDI_FROM_PTR_GS_EBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X7D)\
	__ASM__OP__(0X00)
#define _MOV_EDI_FROM_PTR_GS_ESP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X24)

#define _MOV_ESI_FROM_PTR_FS_EAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X30)
#define _MOV_ESI_FROM_PTR_FS_EBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X33)
#define _MOV_ESI_FROM_PTR_FS_ECX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X31)
#define _MOV_ESI_FROM_PTR_FS_EDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X32)
#define _MOV_ESI_FROM_PTR_FS_EDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X37)
#define _MOV_ESI_FROM_PTR_FS_ESI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X36)
#define _MOV_ESI_FROM_PTR_FS_EBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X75)\
	__ASM__OP__(0X00)
#define _MOV_ESI_FROM_PTR_FS_ESP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X24)
#define _MOV_ESI_FROM_PTR_GS_EAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X30)
#define _MOV_ESI_FROM_PTR_GS_EBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X33)
#define _MOV_ESI_FROM_PTR_GS_ECX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X31)
#define _MOV_ESI_FROM_PTR_GS_EDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X32)
#define _MOV_ESI_FROM_PTR_GS_EDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X37)
#define _MOV_ESI_FROM_PTR_GS_ESI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X36)
#define _MOV_ESI_FROM_PTR_GS_EBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X75)\
	__ASM__OP__(0X00)
#define _MOV_ESI_FROM_PTR_GS_ESP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X24)

#define _MOV_EBP_FROM_PTR_FS_EAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X28)
#define _MOV_EBP_FROM_PTR_FS_EBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2B)
#define _MOV_EBP_FROM_PTR_FS_ECX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X29)
#define _MOV_EBP_FROM_PTR_FS_EDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2A)
#define _MOV_EBP_FROM_PTR_FS_EDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2F)
#define _MOV_EBP_FROM_PTR_FS_ESI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2E)
#define _MOV_EBP_FROM_PTR_FS_EBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X6D)\
	__ASM__OP__(0X00)
#define _MOV_EBP_FROM_PTR_FS_ESP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X24)
#define _MOV_EBP_FROM_PTR_GS_EAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X28)
#define _MOV_EBP_FROM_PTR_GS_EBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2B)
#define _MOV_EBP_FROM_PTR_GS_ECX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X29)
#define _MOV_EBP_FROM_PTR_GS_EDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2A)
#define _MOV_EBP_FROM_PTR_GS_EDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2F)
#define _MOV_EBP_FROM_PTR_GS_ESI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2E)
#define _MOV_EBP_FROM_PTR_GS_EBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X6D)\
	__ASM__OP__(0X00)
#define _MOV_EBP_FROM_PTR_GS_ESP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X24)

#define _MOV_ESP_FROM_PTR_FS_EAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X20)
#define _MOV_ESP_FROM_PTR_FS_EBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X23)
#define _MOV_ESP_FROM_PTR_FS_ECX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X21)
#define _MOV_ESP_FROM_PTR_FS_EDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X22)
#define _MOV_ESP_FROM_PTR_FS_EDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X27)
#define _MOV_ESP_FROM_PTR_FS_ESI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X26)
#define _MOV_ESP_FROM_PTR_FS_EBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X65)\
	__ASM__OP__(0X00)
#define _MOV_ESP_FROM_PTR_FS_ESP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X24)
#define _MOV_ESP_FROM_PTR_GS_EAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X20)
#define _MOV_ESP_FROM_PTR_GS_EBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X23)
#define _MOV_ESP_FROM_PTR_GS_ECX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X21)
#define _MOV_ESP_FROM_PTR_GS_EDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X22)
#define _MOV_ESP_FROM_PTR_GS_EDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X27)
#define _MOV_ESP_FROM_PTR_GS_ESI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X26)
#define _MOV_ESP_FROM_PTR_GS_EBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X65)\
	__ASM__OP__(0X00)
#define _MOV_ESP_FROM_PTR_GS_ESP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X24)

#define _MOV_EAX_TO_PTR_FS_EAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X00)
#define _MOV_EAX_TO_PTR_FS_EBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X03)
#define _MOV_EAX_TO_PTR_FS_ECX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X01)
#define _MOV_EAX_TO_PTR_FS_EDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X02)
#define _MOV_EAX_TO_PTR_FS_EDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X07)
#define _MOV_EAX_TO_PTR_FS_ESI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X06)
#define _MOV_EAX_TO_PTR_FS_EBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X00)
#define _MOV_EAX_TO_PTR_FS_ESP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X24)
#define _MOV_EAX_TO_PTR_GS_EAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X00)
#define _MOV_EAX_TO_PTR_GS_EBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X03)
#define _MOV_EAX_TO_PTR_GS_ECX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X01)
#define _MOV_EAX_TO_PTR_GS_EDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X02)
#define _MOV_EAX_TO_PTR_GS_EDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X07)
#define _MOV_EAX_TO_PTR_GS_ESI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X06)
#define _MOV_EAX_TO_PTR_GS_EBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X00)
#define _MOV_EAX_TO_PTR_GS_ESP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X24)

#define _MOV_EBX_TO_PTR_FS_EAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X18)
#define _MOV_EBX_TO_PTR_FS_EBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1B)
#define _MOV_EBX_TO_PTR_FS_ECX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X19)
#define _MOV_EBX_TO_PTR_FS_EDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1A)
#define _MOV_EBX_TO_PTR_FS_EDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1F)
#define _MOV_EBX_TO_PTR_FS_ESI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1E)
#define _MOV_EBX_TO_PTR_FS_EBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X5D)\
	__ASM__OP__(0X00)
#define _MOV_EBX_TO_PTR_FS_ESP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X24)
#define _MOV_EBX_TO_PTR_GS_EAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X18)
#define _MOV_EBX_TO_PTR_GS_EBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1B)
#define _MOV_EBX_TO_PTR_GS_ECX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X19)
#define _MOV_EBX_TO_PTR_GS_EDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1A)
#define _MOV_EBX_TO_PTR_GS_EDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1F)
#define _MOV_EBX_TO_PTR_GS_ESI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1E)
#define _MOV_EBX_TO_PTR_GS_EBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X5D)\
	__ASM__OP__(0X00)
#define _MOV_EBX_TO_PTR_GS_ESP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X24)

#define _MOV_ECX_TO_PTR_FS_EAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X08)
#define _MOV_ECX_TO_PTR_FS_EBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0B)
#define _MOV_ECX_TO_PTR_FS_ECX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X09)
#define _MOV_ECX_TO_PTR_FS_EDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0A)
#define _MOV_ECX_TO_PTR_FS_EDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0F)
#define _MOV_ECX_TO_PTR_FS_ESI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0E)
#define _MOV_ECX_TO_PTR_FS_EBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X00)
#define _MOV_ECX_TO_PTR_FS_ESP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X24)
#define _MOV_ECX_TO_PTR_GS_EAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X08)
#define _MOV_ECX_TO_PTR_GS_EBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0B)
#define _MOV_ECX_TO_PTR_GS_ECX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X09)
#define _MOV_ECX_TO_PTR_GS_EDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0A)
#define _MOV_ECX_TO_PTR_GS_EDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0F)
#define _MOV_ECX_TO_PTR_GS_ESI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0E)
#define _MOV_ECX_TO_PTR_GS_EBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X00)
#define _MOV_ECX_TO_PTR_GS_ESP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X24)

#define _MOV_EDX_TO_PTR_FS_EAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X10)
#define _MOV_EDX_TO_PTR_FS_EBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X13)
#define _MOV_EDX_TO_PTR_FS_ECX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X11)
#define _MOV_EDX_TO_PTR_FS_EDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X12)
#define _MOV_EDX_TO_PTR_FS_EDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X17)
#define _MOV_EDX_TO_PTR_FS_ESI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X16)
#define _MOV_EDX_TO_PTR_FS_EBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X55)\
	__ASM__OP__(0X00)
#define _MOV_EDX_TO_PTR_FS_ESP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X24)
#define _MOV_EDX_TO_PTR_GS_EAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X10)
#define _MOV_EDX_TO_PTR_GS_EBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X13)
#define _MOV_EDX_TO_PTR_GS_ECX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X11)
#define _MOV_EDX_TO_PTR_GS_EDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X12)
#define _MOV_EDX_TO_PTR_GS_EDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X17)
#define _MOV_EDX_TO_PTR_GS_ESI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X16)
#define _MOV_EDX_TO_PTR_GS_EBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X55)\
	__ASM__OP__(0X00)
#define _MOV_EDX_TO_PTR_GS_ESP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X24)

#define _MOV_EDI_TO_PTR_FS_EAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X38)
#define _MOV_EDI_TO_PTR_FS_EBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3B)
#define _MOV_EDI_TO_PTR_FS_ECX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X39)
#define _MOV_EDI_TO_PTR_FS_EDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3A)
#define _MOV_EDI_TO_PTR_FS_EDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3F)
#define _MOV_EDI_TO_PTR_FS_ESI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3E)
#define _MOV_EDI_TO_PTR_FS_EBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X7D)\
	__ASM__OP__(0X00)
#define _MOV_EDI_TO_PTR_FS_ESP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X24)
#define _MOV_EDI_TO_PTR_GS_EAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X38)
#define _MOV_EDI_TO_PTR_GS_EBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3B)
#define _MOV_EDI_TO_PTR_GS_ECX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X39)
#define _MOV_EDI_TO_PTR_GS_EDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3A)
#define _MOV_EDI_TO_PTR_GS_EDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3F)
#define _MOV_EDI_TO_PTR_GS_ESI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3E)
#define _MOV_EDI_TO_PTR_GS_EBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X7D)\
	__ASM__OP__(0X00)
#define _MOV_EDI_TO_PTR_GS_ESP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X24)

#define _MOV_ESI_TO_PTR_FS_EAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X30)
#define _MOV_ESI_TO_PTR_FS_EBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X33)
#define _MOV_ESI_TO_PTR_FS_ECX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X31)
#define _MOV_ESI_TO_PTR_FS_EDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X32)
#define _MOV_ESI_TO_PTR_FS_EDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X37)
#define _MOV_ESI_TO_PTR_FS_ESI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X36)
#define _MOV_ESI_TO_PTR_FS_EBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X75)\
	__ASM__OP__(0X00)
#define _MOV_ESI_TO_PTR_FS_ESP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X24)
#define _MOV_ESI_TO_PTR_GS_EAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X30)
#define _MOV_ESI_TO_PTR_GS_EBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X33)
#define _MOV_ESI_TO_PTR_GS_ECX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X31)
#define _MOV_ESI_TO_PTR_GS_EDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X32)
#define _MOV_ESI_TO_PTR_GS_EDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X37)
#define _MOV_ESI_TO_PTR_GS_ESI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X36)
#define _MOV_ESI_TO_PTR_GS_EBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X75)\
	__ASM__OP__(0X00)
#define _MOV_ESI_TO_PTR_GS_ESP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X24)

#define _MOV_EBP_TO_PTR_FS_EAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X28)
#define _MOV_EBP_TO_PTR_FS_EBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2B)
#define _MOV_EBP_TO_PTR_FS_ECX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X29)
#define _MOV_EBP_TO_PTR_FS_EDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2A)
#define _MOV_EBP_TO_PTR_FS_EDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2F)
#define _MOV_EBP_TO_PTR_FS_ESI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2E)
#define _MOV_EBP_TO_PTR_FS_EBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X6D)\
	__ASM__OP__(0X00)
#define _MOV_EBP_TO_PTR_FS_ESP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X24)
#define _MOV_EBP_TO_PTR_GS_EAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X28)
#define _MOV_EBP_TO_PTR_GS_EBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2B)
#define _MOV_EBP_TO_PTR_GS_ECX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X29)
#define _MOV_EBP_TO_PTR_GS_EDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2A)
#define _MOV_EBP_TO_PTR_GS_EDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2F)
#define _MOV_EBP_TO_PTR_GS_ESI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2E)
#define _MOV_EBP_TO_PTR_GS_EBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X6D)\
	__ASM__OP__(0X00)
#define _MOV_EBP_TO_PTR_GS_ESP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X24)

#define _MOV_ESP_TO_PTR_FS_EAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X20)
#define _MOV_ESP_TO_PTR_FS_EBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X23)
#define _MOV_ESP_TO_PTR_FS_ECX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X21)
#define _MOV_ESP_TO_PTR_FS_EDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X22)
#define _MOV_ESP_TO_PTR_FS_EDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X27)
#define _MOV_ESP_TO_PTR_FS_ESI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X26)
#define _MOV_ESP_TO_PTR_FS_EBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X65)\
	__ASM__OP__(0X00)
#define _MOV_ESP_TO_PTR_FS_ESP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X24)
#define _MOV_ESP_TO_PTR_GS_EAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X20)
#define _MOV_ESP_TO_PTR_GS_EBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X23)
#define _MOV_ESP_TO_PTR_GS_ECX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X21)
#define _MOV_ESP_TO_PTR_GS_EDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X22)
#define _MOV_ESP_TO_PTR_GS_EDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X27)
#define _MOV_ESP_TO_PTR_GS_ESI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X26)
#define _MOV_ESP_TO_PTR_GS_EBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X65)\
	__ASM__OP__(0X00)
#define _MOV_ESP_TO_PTR_GS_ESP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X24)
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define _MOV_EAX_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EAX_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_EBX_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBX_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_ECX_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_ECX_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_EDX_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDX_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_EDI_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDI_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_ESI_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESI_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_EBP_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBP_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_ESP_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESP_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_R8D_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8D_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_R9D_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9D_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_R10D_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10D_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_R11D_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11D_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_R12D_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12D_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_R13D_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13D_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_R14D_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14D_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_R15D_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15D_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_EAX_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EAX_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_EBX_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBX_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_ECX_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_ECX_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_EDX_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDX_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_EDI_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDI_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_ESI_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESI_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_EBP_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBP_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_ESP_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESP_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_R8D_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8D_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_R9D_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9D_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_R10D_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10D_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_R11D_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11D_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_R12D_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12D_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_R13D_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13D_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_R14D_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14D_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_R15D_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15D_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_EAX_FROM_PTR_FS_RAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X00)
#define _MOV_EAX_FROM_PTR_FS_RBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X03)
#define _MOV_EAX_FROM_PTR_FS_RCX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X01)
#define _MOV_EAX_FROM_PTR_FS_RDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X02)
#define _MOV_EAX_FROM_PTR_FS_RDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X07)
#define _MOV_EAX_FROM_PTR_FS_RSI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X06)
#define _MOV_EAX_FROM_PTR_FS_RBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X00)
#define _MOV_EAX_FROM_PTR_FS_RSP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X24)
#define _MOV_EAX_FROM_PTR_FS_R8 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X00)
#define _MOV_EAX_FROM_PTR_FS_R9 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X01)
#define _MOV_EAX_FROM_PTR_FS_R10 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X02)
#define _MOV_EAX_FROM_PTR_FS_R11 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X03)
#define _MOV_EAX_FROM_PTR_FS_R12 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X24)
#define _MOV_EAX_FROM_PTR_FS_R13 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X00)
#define _MOV_EAX_FROM_PTR_FS_R14 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X06)
#define _MOV_EAX_FROM_PTR_FS_R15 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X07)
#define _MOV_EAX_FROM_PTR_GS_RAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X00)
#define _MOV_EAX_FROM_PTR_GS_RBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X03)
#define _MOV_EAX_FROM_PTR_GS_RCX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X01)
#define _MOV_EAX_FROM_PTR_GS_RDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X02)
#define _MOV_EAX_FROM_PTR_GS_RDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X07)
#define _MOV_EAX_FROM_PTR_GS_RSI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X06)
#define _MOV_EAX_FROM_PTR_GS_RBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X00)
#define _MOV_EAX_FROM_PTR_GS_RSP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X24)
#define _MOV_EAX_FROM_PTR_GS_R8 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X00)
#define _MOV_EAX_FROM_PTR_GS_R9 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X01)
#define _MOV_EAX_FROM_PTR_GS_R10 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X02)
#define _MOV_EAX_FROM_PTR_GS_R11 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X03)
#define _MOV_EAX_FROM_PTR_GS_R12 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X24)
#define _MOV_EAX_FROM_PTR_GS_R13 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X00)
#define _MOV_EAX_FROM_PTR_GS_R14 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X06)
#define _MOV_EAX_FROM_PTR_GS_R15 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X07)

#define _MOV_EBX_FROM_PTR_FS_RAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X18)
#define _MOV_EBX_FROM_PTR_FS_RBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1B)
#define _MOV_EBX_FROM_PTR_FS_RCX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X19)
#define _MOV_EBX_FROM_PTR_FS_RDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1A)
#define _MOV_EBX_FROM_PTR_FS_RDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1F)
#define _MOV_EBX_FROM_PTR_FS_RSI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1E)
#define _MOV_EBX_FROM_PTR_FS_RBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X5D)\
	__ASM__OP__(0X00)
#define _MOV_EBX_FROM_PTR_FS_RSP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X24)
#define _MOV_EBX_FROM_PTR_FS_R8 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X18)
#define _MOV_EBX_FROM_PTR_FS_R9 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X19)
#define _MOV_EBX_FROM_PTR_FS_R10 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1A)
#define _MOV_EBX_FROM_PTR_FS_R11 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1B)
#define _MOV_EBX_FROM_PTR_FS_R12 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X24)
#define _MOV_EBX_FROM_PTR_FS_R13 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X5D)\
	__ASM__OP__(0X00)
#define _MOV_EBX_FROM_PTR_FS_R14 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1E)
#define _MOV_EBX_FROM_PTR_FS_R15 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1F)
#define _MOV_EBX_FROM_PTR_GS_RAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X18)
#define _MOV_EBX_FROM_PTR_GS_RBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1B)
#define _MOV_EBX_FROM_PTR_GS_RCX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X19)
#define _MOV_EBX_FROM_PTR_GS_RDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1A)
#define _MOV_EBX_FROM_PTR_GS_RDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1F)
#define _MOV_EBX_FROM_PTR_GS_RSI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1E)
#define _MOV_EBX_FROM_PTR_GS_RBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X5D)\
	__ASM__OP__(0X00)
#define _MOV_EBX_FROM_PTR_GS_RSP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X24)
#define _MOV_EBX_FROM_PTR_GS_R8 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X18)
#define _MOV_EBX_FROM_PTR_GS_R9 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X19)
#define _MOV_EBX_FROM_PTR_GS_R10 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1A)
#define _MOV_EBX_FROM_PTR_GS_R11 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1B)
#define _MOV_EBX_FROM_PTR_GS_R12 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X24)
#define _MOV_EBX_FROM_PTR_GS_R13 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X5D)\
	__ASM__OP__(0X00)
#define _MOV_EBX_FROM_PTR_GS_R14 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1E)
#define _MOV_EBX_FROM_PTR_GS_R15 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1F)

#define _MOV_ECX_FROM_PTR_FS_RAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X08)
#define _MOV_ECX_FROM_PTR_FS_RBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0B)
#define _MOV_ECX_FROM_PTR_FS_RCX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X09)
#define _MOV_ECX_FROM_PTR_FS_RDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0A)
#define _MOV_ECX_FROM_PTR_FS_RDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0F)
#define _MOV_ECX_FROM_PTR_FS_RSI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0E)
#define _MOV_ECX_FROM_PTR_FS_RBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X00)
#define _MOV_ECX_FROM_PTR_FS_RSP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X24)
#define _MOV_ECX_FROM_PTR_FS_R8 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X08)
#define _MOV_ECX_FROM_PTR_FS_R9 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X09)
#define _MOV_ECX_FROM_PTR_FS_R10 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0A)
#define _MOV_ECX_FROM_PTR_FS_R11 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0B)
#define _MOV_ECX_FROM_PTR_FS_R12 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X24)
#define _MOV_ECX_FROM_PTR_FS_R13 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X00)
#define _MOV_ECX_FROM_PTR_FS_R14 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0E)
#define _MOV_ECX_FROM_PTR_FS_R15 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0F)
#define _MOV_ECX_FROM_PTR_GS_RAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X08)
#define _MOV_ECX_FROM_PTR_GS_RBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0B)
#define _MOV_ECX_FROM_PTR_GS_RCX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X09)
#define _MOV_ECX_FROM_PTR_GS_RDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0A)
#define _MOV_ECX_FROM_PTR_GS_RDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0F)
#define _MOV_ECX_FROM_PTR_GS_RSI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0E)
#define _MOV_ECX_FROM_PTR_GS_RBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X00)
#define _MOV_ECX_FROM_PTR_GS_RSP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X24)
#define _MOV_ECX_FROM_PTR_GS_R8 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X08)
#define _MOV_ECX_FROM_PTR_GS_R9 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X09)
#define _MOV_ECX_FROM_PTR_GS_R10 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0A)
#define _MOV_ECX_FROM_PTR_GS_R11 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0B)
#define _MOV_ECX_FROM_PTR_GS_R12 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X24)
#define _MOV_ECX_FROM_PTR_GS_R13 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X00)
#define _MOV_ECX_FROM_PTR_GS_R14 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0E)
#define _MOV_ECX_FROM_PTR_GS_R15 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0F)

#define _MOV_EDX_FROM_PTR_FS_RAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X10)
#define _MOV_EDX_FROM_PTR_FS_RBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X13)
#define _MOV_EDX_FROM_PTR_FS_RCX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X11)
#define _MOV_EDX_FROM_PTR_FS_RDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X12)
#define _MOV_EDX_FROM_PTR_FS_RDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X17)
#define _MOV_EDX_FROM_PTR_FS_RSI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X16)
#define _MOV_EDX_FROM_PTR_FS_RBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X55)\
	__ASM__OP__(0X00)
#define _MOV_EDX_FROM_PTR_FS_RSP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X24)
#define _MOV_EDX_FROM_PTR_FS_R8 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X10)
#define _MOV_EDX_FROM_PTR_FS_R9 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X11)
#define _MOV_EDX_FROM_PTR_FS_R10 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X12)
#define _MOV_EDX_FROM_PTR_FS_R11 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X13)
#define _MOV_EDX_FROM_PTR_FS_R12 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X24)
#define _MOV_EDX_FROM_PTR_FS_R13 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X55)\
	__ASM__OP__(0X00)
#define _MOV_EDX_FROM_PTR_FS_R14 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X16)
#define _MOV_EDX_FROM_PTR_FS_R15 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X17)
#define _MOV_EDX_FROM_PTR_GS_RAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X10)
#define _MOV_EDX_FROM_PTR_GS_RBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X13)
#define _MOV_EDX_FROM_PTR_GS_RCX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X11)
#define _MOV_EDX_FROM_PTR_GS_RDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X12)
#define _MOV_EDX_FROM_PTR_GS_RDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X17)
#define _MOV_EDX_FROM_PTR_GS_RSI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X16)
#define _MOV_EDX_FROM_PTR_GS_RBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X55)\
	__ASM__OP__(0X00)
#define _MOV_EDX_FROM_PTR_GS_RSP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X24)
#define _MOV_EDX_FROM_PTR_GS_R8 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X10)
#define _MOV_EDX_FROM_PTR_GS_R9 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X11)
#define _MOV_EDX_FROM_PTR_GS_R10 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X12)
#define _MOV_EDX_FROM_PTR_GS_R11 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X13)
#define _MOV_EDX_FROM_PTR_GS_R12 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X24)
#define _MOV_EDX_FROM_PTR_GS_R13 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X55)\
	__ASM__OP__(0X00)
#define _MOV_EDX_FROM_PTR_GS_R14 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X16)
#define _MOV_EDX_FROM_PTR_GS_R15 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X17)

#define _MOV_EDI_FROM_PTR_FS_RAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X38)
#define _MOV_EDI_FROM_PTR_FS_RBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3B)
#define _MOV_EDI_FROM_PTR_FS_RCX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X39)
#define _MOV_EDI_FROM_PTR_FS_RDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3A)
#define _MOV_EDI_FROM_PTR_FS_RDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3F)
#define _MOV_EDI_FROM_PTR_FS_RSI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3E)
#define _MOV_EDI_FROM_PTR_FS_RBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X7D)\
	__ASM__OP__(0X00)
#define _MOV_EDI_FROM_PTR_FS_RSP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X24)
#define _MOV_EDI_FROM_PTR_FS_R8 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X38)
#define _MOV_EDI_FROM_PTR_FS_R9 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X39)
#define _MOV_EDI_FROM_PTR_FS_R10 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3A)
#define _MOV_EDI_FROM_PTR_FS_R11 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3B)
#define _MOV_EDI_FROM_PTR_FS_R12 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X24)
#define _MOV_EDI_FROM_PTR_FS_R13 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X7D)\
	__ASM__OP__(0X00)
#define _MOV_EDI_FROM_PTR_FS_R14 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3E)
#define _MOV_EDI_FROM_PTR_FS_R15 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3F)
#define _MOV_EDI_FROM_PTR_GS_RAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X38)
#define _MOV_EDI_FROM_PTR_GS_RBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3B)
#define _MOV_EDI_FROM_PTR_GS_RCX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X39)
#define _MOV_EDI_FROM_PTR_GS_RDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3A)
#define _MOV_EDI_FROM_PTR_GS_RDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3F)
#define _MOV_EDI_FROM_PTR_GS_RSI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3E)
#define _MOV_EDI_FROM_PTR_GS_RBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X7D)\
	__ASM__OP__(0X00)
#define _MOV_EDI_FROM_PTR_GS_RSP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X24)
#define _MOV_EDI_FROM_PTR_GS_R8 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X38)
#define _MOV_EDI_FROM_PTR_GS_R9 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X39)
#define _MOV_EDI_FROM_PTR_GS_R10 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3A)
#define _MOV_EDI_FROM_PTR_GS_R11 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3B)
#define _MOV_EDI_FROM_PTR_GS_R12 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X24)
#define _MOV_EDI_FROM_PTR_GS_R13 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X7D)\
	__ASM__OP__(0X00)
#define _MOV_EDI_FROM_PTR_GS_R14 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3E)
#define _MOV_EDI_FROM_PTR_GS_R15 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3F)

#define _MOV_ESI_FROM_PTR_FS_RAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X30)
#define _MOV_ESI_FROM_PTR_FS_RBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X33)
#define _MOV_ESI_FROM_PTR_FS_RCX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X31)
#define _MOV_ESI_FROM_PTR_FS_RDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X32)
#define _MOV_ESI_FROM_PTR_FS_RDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X37)
#define _MOV_ESI_FROM_PTR_FS_RSI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X36)
#define _MOV_ESI_FROM_PTR_FS_RBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X75)\
	__ASM__OP__(0X00)
#define _MOV_ESI_FROM_PTR_FS_RSP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X24)
#define _MOV_ESI_FROM_PTR_FS_R8 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X30)
#define _MOV_ESI_FROM_PTR_FS_R9 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X31)
#define _MOV_ESI_FROM_PTR_FS_R10 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X32)
#define _MOV_ESI_FROM_PTR_FS_R11 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X33)
#define _MOV_ESI_FROM_PTR_FS_R12 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X24)
#define _MOV_ESI_FROM_PTR_FS_R13 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X75)\
	__ASM__OP__(0X00)
#define _MOV_ESI_FROM_PTR_FS_R14 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X36)
#define _MOV_ESI_FROM_PTR_FS_R15 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X37)
#define _MOV_ESI_FROM_PTR_GS_RAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X30)
#define _MOV_ESI_FROM_PTR_GS_RBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X33)
#define _MOV_ESI_FROM_PTR_GS_RCX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X31)
#define _MOV_ESI_FROM_PTR_GS_RDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X32)
#define _MOV_ESI_FROM_PTR_GS_RDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X37)
#define _MOV_ESI_FROM_PTR_GS_RSI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X36)
#define _MOV_ESI_FROM_PTR_GS_RBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X75)\
	__ASM__OP__(0X00)
#define _MOV_ESI_FROM_PTR_GS_RSP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X24)
#define _MOV_ESI_FROM_PTR_GS_R8 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X30)
#define _MOV_ESI_FROM_PTR_GS_R9 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X31)
#define _MOV_ESI_FROM_PTR_GS_R10 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X32)
#define _MOV_ESI_FROM_PTR_GS_R11 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X33)
#define _MOV_ESI_FROM_PTR_GS_R12 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X24)
#define _MOV_ESI_FROM_PTR_GS_R13 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X75)\
	__ASM__OP__(0X00)
#define _MOV_ESI_FROM_PTR_GS_R14 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X36)
#define _MOV_ESI_FROM_PTR_GS_R15 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X37)

#define _MOV_EBP_FROM_PTR_FS_RAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X28)
#define _MOV_EBP_FROM_PTR_FS_RBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2B)
#define _MOV_EBP_FROM_PTR_FS_RCX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X29)
#define _MOV_EBP_FROM_PTR_FS_RDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2A)
#define _MOV_EBP_FROM_PTR_FS_RDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2F)
#define _MOV_EBP_FROM_PTR_FS_RSI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2E)
#define _MOV_EBP_FROM_PTR_FS_RBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X6D)\
	__ASM__OP__(0X00)
#define _MOV_EBP_FROM_PTR_FS_RSP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X24)
#define _MOV_EBP_FROM_PTR_FS_R8 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X28)
#define _MOV_EBP_FROM_PTR_FS_R9 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X29)
#define _MOV_EBP_FROM_PTR_FS_R10 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2A)
#define _MOV_EBP_FROM_PTR_FS_R11 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2B)
#define _MOV_EBP_FROM_PTR_FS_R12 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X24)
#define _MOV_EBP_FROM_PTR_FS_R13 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X6D)\
	__ASM__OP__(0X00)
#define _MOV_EBP_FROM_PTR_FS_R14 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2E)
#define _MOV_EBP_FROM_PTR_FS_R15 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2F)
#define _MOV_EBP_FROM_PTR_GS_RAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X28)
#define _MOV_EBP_FROM_PTR_GS_RBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2B)
#define _MOV_EBP_FROM_PTR_GS_RCX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X29)
#define _MOV_EBP_FROM_PTR_GS_RDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2A)
#define _MOV_EBP_FROM_PTR_GS_RDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2F)
#define _MOV_EBP_FROM_PTR_GS_RSI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2E)
#define _MOV_EBP_FROM_PTR_GS_RBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X6D)\
	__ASM__OP__(0X00)
#define _MOV_EBP_FROM_PTR_GS_RSP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X24)
#define _MOV_EBP_FROM_PTR_GS_R8 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X28)
#define _MOV_EBP_FROM_PTR_GS_R9 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X29)
#define _MOV_EBP_FROM_PTR_GS_R10 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2A)
#define _MOV_EBP_FROM_PTR_GS_R11 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2B)
#define _MOV_EBP_FROM_PTR_GS_R12 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X24)
#define _MOV_EBP_FROM_PTR_GS_R13 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X6D)\
	__ASM__OP__(0X00)
#define _MOV_EBP_FROM_PTR_GS_R14 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2E)
#define _MOV_EBP_FROM_PTR_GS_R15 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2F)

#define _MOV_ESP_FROM_PTR_FS_RAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X20)
#define _MOV_ESP_FROM_PTR_FS_RBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X23)
#define _MOV_ESP_FROM_PTR_FS_RCX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X21)
#define _MOV_ESP_FROM_PTR_FS_RDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X22)
#define _MOV_ESP_FROM_PTR_FS_RDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X27)
#define _MOV_ESP_FROM_PTR_FS_RSI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X26)
#define _MOV_ESP_FROM_PTR_FS_RBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X65)\
	__ASM__OP__(0X00)
#define _MOV_ESP_FROM_PTR_FS_RSP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X24)
#define _MOV_ESP_FROM_PTR_FS_R8 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X20)
#define _MOV_ESP_FROM_PTR_FS_R9 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X21)
#define _MOV_ESP_FROM_PTR_FS_R10 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X22)
#define _MOV_ESP_FROM_PTR_FS_R11 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X23)
#define _MOV_ESP_FROM_PTR_FS_R12 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X24)
#define _MOV_ESP_FROM_PTR_FS_R13 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X65)\
	__ASM__OP__(0X00)
#define _MOV_ESP_FROM_PTR_FS_R14 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X26)
#define _MOV_ESP_FROM_PTR_FS_R15 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X27)
#define _MOV_ESP_FROM_PTR_GS_RAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X20)
#define _MOV_ESP_FROM_PTR_GS_RBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X23)
#define _MOV_ESP_FROM_PTR_GS_RCX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X21)
#define _MOV_ESP_FROM_PTR_GS_RDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X22)
#define _MOV_ESP_FROM_PTR_GS_RDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X27)
#define _MOV_ESP_FROM_PTR_GS_RSI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X26)
#define _MOV_ESP_FROM_PTR_GS_RBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X65)\
	__ASM__OP__(0X00)
#define _MOV_ESP_FROM_PTR_GS_RSP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X24)
#define _MOV_ESP_FROM_PTR_GS_R8 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X20)
#define _MOV_ESP_FROM_PTR_GS_R9 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X21)
#define _MOV_ESP_FROM_PTR_GS_R10 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X22)
#define _MOV_ESP_FROM_PTR_GS_R11 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X23)
#define _MOV_ESP_FROM_PTR_GS_R12 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X24)
#define _MOV_ESP_FROM_PTR_GS_R13 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X65)\
	__ASM__OP__(0X00)
#define _MOV_ESP_FROM_PTR_GS_R14 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X26)
#define _MOV_ESP_FROM_PTR_GS_R15 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X27)

#define _MOV_R8D_FROM_PTR_FS_RAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X00)
#define _MOV_R8D_FROM_PTR_FS_RBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X03)
#define _MOV_R8D_FROM_PTR_FS_RCX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X01)
#define _MOV_R8D_FROM_PTR_FS_RDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X02)
#define _MOV_R8D_FROM_PTR_FS_RDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X07)
#define _MOV_R8D_FROM_PTR_FS_RSI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X06)
#define _MOV_R8D_FROM_PTR_FS_RBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X00)
#define _MOV_R8D_FROM_PTR_FS_RSP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X24)
#define _MOV_R8D_FROM_PTR_FS_R8 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X00)
#define _MOV_R8D_FROM_PTR_FS_R9 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X01)
#define _MOV_R8D_FROM_PTR_FS_R10 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X02)
#define _MOV_R8D_FROM_PTR_FS_R11 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X03)
#define _MOV_R8D_FROM_PTR_FS_R12 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X24)
#define _MOV_R8D_FROM_PTR_FS_R13 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X00)
#define _MOV_R8D_FROM_PTR_FS_R14 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X06)
#define _MOV_R8D_FROM_PTR_FS_R15 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X07)
#define _MOV_R8D_FROM_PTR_GS_RAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X00)
#define _MOV_R8D_FROM_PTR_GS_RBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X03)
#define _MOV_R8D_FROM_PTR_GS_RCX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X01)
#define _MOV_R8D_FROM_PTR_GS_RDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X02)
#define _MOV_R8D_FROM_PTR_GS_RDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X07)
#define _MOV_R8D_FROM_PTR_GS_RSI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X06)
#define _MOV_R8D_FROM_PTR_GS_RBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X00)
#define _MOV_R8D_FROM_PTR_GS_RSP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X24)
#define _MOV_R8D_FROM_PTR_GS_R8 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X00)
#define _MOV_R8D_FROM_PTR_GS_R9 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X01)
#define _MOV_R8D_FROM_PTR_GS_R10 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X02)
#define _MOV_R8D_FROM_PTR_GS_R11 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X03)
#define _MOV_R8D_FROM_PTR_GS_R12 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X24)
#define _MOV_R8D_FROM_PTR_GS_R13 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X00)
#define _MOV_R8D_FROM_PTR_GS_R14 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X06)
#define _MOV_R8D_FROM_PTR_GS_R15 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X07)

#define _MOV_R9D_FROM_PTR_FS_RAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X08)
#define _MOV_R9D_FROM_PTR_FS_RBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0B)
#define _MOV_R9D_FROM_PTR_FS_RCX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X09)
#define _MOV_R9D_FROM_PTR_FS_RDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0A)
#define _MOV_R9D_FROM_PTR_FS_RDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0F)
#define _MOV_R9D_FROM_PTR_FS_RSI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0E)
#define _MOV_R9D_FROM_PTR_FS_RBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X00)
#define _MOV_R9D_FROM_PTR_FS_RSP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X24)
#define _MOV_R9D_FROM_PTR_FS_R8 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X08)
#define _MOV_R9D_FROM_PTR_FS_R9 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X09)
#define _MOV_R9D_FROM_PTR_FS_R10 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0A)
#define _MOV_R9D_FROM_PTR_FS_R11 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0B)
#define _MOV_R9D_FROM_PTR_FS_R12 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X24)
#define _MOV_R9D_FROM_PTR_FS_R13 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X00)
#define _MOV_R9D_FROM_PTR_FS_R14 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0E)
#define _MOV_R9D_FROM_PTR_FS_R15 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0F)
#define _MOV_R9D_FROM_PTR_GS_RAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X08)
#define _MOV_R9D_FROM_PTR_GS_RBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0B)
#define _MOV_R9D_FROM_PTR_GS_RCX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X09)
#define _MOV_R9D_FROM_PTR_GS_RDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0A)
#define _MOV_R9D_FROM_PTR_GS_RDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0F)
#define _MOV_R9D_FROM_PTR_GS_RSI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0E)
#define _MOV_R9D_FROM_PTR_GS_RBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X00)
#define _MOV_R9D_FROM_PTR_GS_RSP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X24)
#define _MOV_R9D_FROM_PTR_GS_R8 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X08)
#define _MOV_R9D_FROM_PTR_GS_R9 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X09)
#define _MOV_R9D_FROM_PTR_GS_R10 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0A)
#define _MOV_R9D_FROM_PTR_GS_R11 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0B)
#define _MOV_R9D_FROM_PTR_GS_R12 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X24)
#define _MOV_R9D_FROM_PTR_GS_R13 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X00)
#define _MOV_R9D_FROM_PTR_GS_R14 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0E)
#define _MOV_R9D_FROM_PTR_GS_R15 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0F)

#define _MOV_R10D_FROM_PTR_FS_RAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X10)
#define _MOV_R10D_FROM_PTR_FS_RBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X13)
#define _MOV_R10D_FROM_PTR_FS_RCX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X11)
#define _MOV_R10D_FROM_PTR_FS_RDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X12)
#define _MOV_R10D_FROM_PTR_FS_RDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X17)
#define _MOV_R10D_FROM_PTR_FS_RSI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X16)
#define _MOV_R10D_FROM_PTR_FS_RBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X55)\
	__ASM__OP__(0X00)
#define _MOV_R10D_FROM_PTR_FS_RSP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X24)
#define _MOV_R10D_FROM_PTR_FS_R8 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X10)
#define _MOV_R10D_FROM_PTR_FS_R9 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X11)
#define _MOV_R10D_FROM_PTR_FS_R10 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X12)
#define _MOV_R10D_FROM_PTR_FS_R11 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X13)
#define _MOV_R10D_FROM_PTR_FS_R12 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X24)
#define _MOV_R10D_FROM_PTR_FS_R13 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X55)\
	__ASM__OP__(0X00)
#define _MOV_R10D_FROM_PTR_FS_R14 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X16)
#define _MOV_R10D_FROM_PTR_FS_R15 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X17)
#define _MOV_R10D_FROM_PTR_GS_RAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X10)
#define _MOV_R10D_FROM_PTR_GS_RBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X13)
#define _MOV_R10D_FROM_PTR_GS_RCX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X11)
#define _MOV_R10D_FROM_PTR_GS_RDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X12)
#define _MOV_R10D_FROM_PTR_GS_RDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X17)
#define _MOV_R10D_FROM_PTR_GS_RSI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X16)
#define _MOV_R10D_FROM_PTR_GS_RBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X55)\
	__ASM__OP__(0X00)
#define _MOV_R10D_FROM_PTR_GS_RSP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X24)
#define _MOV_R10D_FROM_PTR_GS_R8 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X10)
#define _MOV_R10D_FROM_PTR_GS_R9 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X11)
#define _MOV_R10D_FROM_PTR_GS_R10 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X12)
#define _MOV_R10D_FROM_PTR_GS_R11 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X13)
#define _MOV_R10D_FROM_PTR_GS_R12 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X24)
#define _MOV_R10D_FROM_PTR_GS_R13 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X55)\
	__ASM__OP__(0X00)
#define _MOV_R10D_FROM_PTR_GS_R14 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X16)
#define _MOV_R10D_FROM_PTR_GS_R15 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X17)

#define _MOV_R11D_FROM_PTR_FS_RAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X18)
#define _MOV_R11D_FROM_PTR_FS_RBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1B)
#define _MOV_R11D_FROM_PTR_FS_RCX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X19)
#define _MOV_R11D_FROM_PTR_FS_RDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1A)
#define _MOV_R11D_FROM_PTR_FS_RDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1F)
#define _MOV_R11D_FROM_PTR_FS_RSI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1E)
#define _MOV_R11D_FROM_PTR_FS_RBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X5D)\
	__ASM__OP__(0X00)
#define _MOV_R11D_FROM_PTR_FS_RSP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X24)
#define _MOV_R11D_FROM_PTR_FS_R8 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X18)
#define _MOV_R11D_FROM_PTR_FS_R9 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X19)
#define _MOV_R11D_FROM_PTR_FS_R10 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1A)
#define _MOV_R11D_FROM_PTR_FS_R11 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1B)
#define _MOV_R11D_FROM_PTR_FS_R12 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X24)
#define _MOV_R11D_FROM_PTR_FS_R13 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X5D)\
	__ASM__OP__(0X00)
#define _MOV_R11D_FROM_PTR_FS_R14 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1E)
#define _MOV_R11D_FROM_PTR_FS_R15 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1F)
#define _MOV_R11D_FROM_PTR_GS_RAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X18)
#define _MOV_R11D_FROM_PTR_GS_RBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1B)
#define _MOV_R11D_FROM_PTR_GS_RCX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X19)
#define _MOV_R11D_FROM_PTR_GS_RDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1A)
#define _MOV_R11D_FROM_PTR_GS_RDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1F)
#define _MOV_R11D_FROM_PTR_GS_RSI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1E)
#define _MOV_R11D_FROM_PTR_GS_RBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X5D)\
	__ASM__OP__(0X00)
#define _MOV_R11D_FROM_PTR_GS_RSP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X24)
#define _MOV_R11D_FROM_PTR_GS_R8 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X18)
#define _MOV_R11D_FROM_PTR_GS_R9 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X19)
#define _MOV_R11D_FROM_PTR_GS_R10 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1A)
#define _MOV_R11D_FROM_PTR_GS_R11 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1B)
#define _MOV_R11D_FROM_PTR_GS_R12 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X24)
#define _MOV_R11D_FROM_PTR_GS_R13 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X5D)\
	__ASM__OP__(0X00)
#define _MOV_R11D_FROM_PTR_GS_R14 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1E)
#define _MOV_R11D_FROM_PTR_GS_R15 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1F)

#define _MOV_R12D_FROM_PTR_FS_RAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X20)
#define _MOV_R12D_FROM_PTR_FS_RBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X23)
#define _MOV_R12D_FROM_PTR_FS_RCX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X21)
#define _MOV_R12D_FROM_PTR_FS_RDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X22)
#define _MOV_R12D_FROM_PTR_FS_RDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X27)
#define _MOV_R12D_FROM_PTR_FS_RSI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X26)
#define _MOV_R12D_FROM_PTR_FS_RBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X65)\
	__ASM__OP__(0X00)
#define _MOV_R12D_FROM_PTR_FS_RSP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X24)
#define _MOV_R12D_FROM_PTR_FS_R8 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X20)
#define _MOV_R12D_FROM_PTR_FS_R9 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X21)
#define _MOV_R12D_FROM_PTR_FS_R10 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X22)
#define _MOV_R12D_FROM_PTR_FS_R11 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X23)
#define _MOV_R12D_FROM_PTR_FS_R12 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X24)
#define _MOV_R12D_FROM_PTR_FS_R13 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X65)\
	__ASM__OP__(0X00)
#define _MOV_R12D_FROM_PTR_FS_R14 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X26)
#define _MOV_R12D_FROM_PTR_FS_R15 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X27)
#define _MOV_R12D_FROM_PTR_GS_RAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X20)
#define _MOV_R12D_FROM_PTR_GS_RBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X23)
#define _MOV_R12D_FROM_PTR_GS_RCX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X21)
#define _MOV_R12D_FROM_PTR_GS_RDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X22)
#define _MOV_R12D_FROM_PTR_GS_RDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X27)
#define _MOV_R12D_FROM_PTR_GS_RSI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X26)
#define _MOV_R12D_FROM_PTR_GS_RBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X65)\
	__ASM__OP__(0X00)
#define _MOV_R12D_FROM_PTR_GS_RSP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X24)
#define _MOV_R12D_FROM_PTR_GS_R8 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X20)
#define _MOV_R12D_FROM_PTR_GS_R9 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X21)
#define _MOV_R12D_FROM_PTR_GS_R10 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X22)
#define _MOV_R12D_FROM_PTR_GS_R11 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X23)
#define _MOV_R12D_FROM_PTR_GS_R12 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X24)
#define _MOV_R12D_FROM_PTR_GS_R13 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X65)\
	__ASM__OP__(0X00)
#define _MOV_R12D_FROM_PTR_GS_R14 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X26)
#define _MOV_R12D_FROM_PTR_GS_R15 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X27)

#define _MOV_R13D_FROM_PTR_FS_RAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X28)
#define _MOV_R13D_FROM_PTR_FS_RBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2B)
#define _MOV_R13D_FROM_PTR_FS_RCX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X29)
#define _MOV_R13D_FROM_PTR_FS_RDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2A)
#define _MOV_R13D_FROM_PTR_FS_RDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2F)
#define _MOV_R13D_FROM_PTR_FS_RSI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2E)
#define _MOV_R13D_FROM_PTR_FS_RBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X6D)\
	__ASM__OP__(0X00)
#define _MOV_R13D_FROM_PTR_FS_RSP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X24)
#define _MOV_R13D_FROM_PTR_FS_R8 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X28)
#define _MOV_R13D_FROM_PTR_FS_R9 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X29)
#define _MOV_R13D_FROM_PTR_FS_R10 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2A)
#define _MOV_R13D_FROM_PTR_FS_R11 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2B)
#define _MOV_R13D_FROM_PTR_FS_R12 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X24)
#define _MOV_R13D_FROM_PTR_FS_R13 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X6D)\
	__ASM__OP__(0X00)
#define _MOV_R13D_FROM_PTR_FS_R14 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2E)
#define _MOV_R13D_FROM_PTR_FS_R15 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2F)
#define _MOV_R13D_FROM_PTR_GS_RAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X28)
#define _MOV_R13D_FROM_PTR_GS_RBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2B)
#define _MOV_R13D_FROM_PTR_GS_RCX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X29)
#define _MOV_R13D_FROM_PTR_GS_RDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2A)
#define _MOV_R13D_FROM_PTR_GS_RDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2F)
#define _MOV_R13D_FROM_PTR_GS_RSI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2E)
#define _MOV_R13D_FROM_PTR_GS_RBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X6D)\
	__ASM__OP__(0X00)
#define _MOV_R13D_FROM_PTR_GS_RSP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X24)
#define _MOV_R13D_FROM_PTR_GS_R8 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X28)
#define _MOV_R13D_FROM_PTR_GS_R9 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X29)
#define _MOV_R13D_FROM_PTR_GS_R10 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2A)
#define _MOV_R13D_FROM_PTR_GS_R11 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2B)
#define _MOV_R13D_FROM_PTR_GS_R12 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X24)
#define _MOV_R13D_FROM_PTR_GS_R13 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X6D)\
	__ASM__OP__(0X00)
#define _MOV_R13D_FROM_PTR_GS_R14 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2E)
#define _MOV_R13D_FROM_PTR_GS_R15 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2F)

#define _MOV_R14D_FROM_PTR_FS_RAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X30)
#define _MOV_R14D_FROM_PTR_FS_RBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X33)
#define _MOV_R14D_FROM_PTR_FS_RCX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X31)
#define _MOV_R14D_FROM_PTR_FS_RDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X32)
#define _MOV_R14D_FROM_PTR_FS_RDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X37)
#define _MOV_R14D_FROM_PTR_FS_RSI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X36)
#define _MOV_R14D_FROM_PTR_FS_RBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X75)\
	__ASM__OP__(0X00)
#define _MOV_R14D_FROM_PTR_FS_RSP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X24)
#define _MOV_R14D_FROM_PTR_FS_R8 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X30)
#define _MOV_R14D_FROM_PTR_FS_R9 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X31)
#define _MOV_R14D_FROM_PTR_FS_R10 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X32)
#define _MOV_R14D_FROM_PTR_FS_R11 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X33)
#define _MOV_R14D_FROM_PTR_FS_R12 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X24)
#define _MOV_R14D_FROM_PTR_FS_R13 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X75)\
	__ASM__OP__(0X00)
#define _MOV_R14D_FROM_PTR_FS_R14 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X36)
#define _MOV_R14D_FROM_PTR_FS_R15 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X37)
#define _MOV_R14D_FROM_PTR_GS_RAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X30)
#define _MOV_R14D_FROM_PTR_GS_RBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X33)
#define _MOV_R14D_FROM_PTR_GS_RCX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X31)
#define _MOV_R14D_FROM_PTR_GS_RDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X32)
#define _MOV_R14D_FROM_PTR_GS_RDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X37)
#define _MOV_R14D_FROM_PTR_GS_RSI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X36)
#define _MOV_R14D_FROM_PTR_GS_RBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X75)\
	__ASM__OP__(0X00)
#define _MOV_R14D_FROM_PTR_GS_RSP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X24)
#define _MOV_R14D_FROM_PTR_GS_R8 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X30)
#define _MOV_R14D_FROM_PTR_GS_R9 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X31)
#define _MOV_R14D_FROM_PTR_GS_R10 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X32)
#define _MOV_R14D_FROM_PTR_GS_R11 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X33)
#define _MOV_R14D_FROM_PTR_GS_R12 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X24)
#define _MOV_R14D_FROM_PTR_GS_R13 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X75)\
	__ASM__OP__(0X00)
#define _MOV_R14D_FROM_PTR_GS_R14 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X36)
#define _MOV_R14D_FROM_PTR_GS_R15 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X37)

#define _MOV_R15D_FROM_PTR_FS_RAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X38)
#define _MOV_R15D_FROM_PTR_FS_RBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3B)
#define _MOV_R15D_FROM_PTR_FS_RCX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X39)
#define _MOV_R15D_FROM_PTR_FS_RDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3A)
#define _MOV_R15D_FROM_PTR_FS_RDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3F)
#define _MOV_R15D_FROM_PTR_FS_RSI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3E)
#define _MOV_R15D_FROM_PTR_FS_RBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X7D)\
	__ASM__OP__(0X00)
#define _MOV_R15D_FROM_PTR_FS_RSP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X24)
#define _MOV_R15D_FROM_PTR_FS_R8 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X38)
#define _MOV_R15D_FROM_PTR_FS_R9 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X39)
#define _MOV_R15D_FROM_PTR_FS_R10 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3A)
#define _MOV_R15D_FROM_PTR_FS_R11 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3B)
#define _MOV_R15D_FROM_PTR_FS_R12 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X24)
#define _MOV_R15D_FROM_PTR_FS_R13 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X7D)\
	__ASM__OP__(0X00)
#define _MOV_R15D_FROM_PTR_FS_R14 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3E)
#define _MOV_R15D_FROM_PTR_FS_R15 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3F)
#define _MOV_R15D_FROM_PTR_GS_RAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X38)
#define _MOV_R15D_FROM_PTR_GS_RBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3B)
#define _MOV_R15D_FROM_PTR_GS_RCX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X39)
#define _MOV_R15D_FROM_PTR_GS_RDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3A)
#define _MOV_R15D_FROM_PTR_GS_RDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3F)
#define _MOV_R15D_FROM_PTR_GS_RSI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3E)
#define _MOV_R15D_FROM_PTR_GS_RBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X7D)\
	__ASM__OP__(0X00)
#define _MOV_R15D_FROM_PTR_GS_RSP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X24)
#define _MOV_R15D_FROM_PTR_GS_R8 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X38)
#define _MOV_R15D_FROM_PTR_GS_R9 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X39)
#define _MOV_R15D_FROM_PTR_GS_R10 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3A)
#define _MOV_R15D_FROM_PTR_GS_R11 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3B)
#define _MOV_R15D_FROM_PTR_GS_R12 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X24)
#define _MOV_R15D_FROM_PTR_GS_R13 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X7D)\
	__ASM__OP__(0X00)
#define _MOV_R15D_FROM_PTR_GS_R14 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3E)
#define _MOV_R15D_FROM_PTR_GS_R15 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3F)

#define _MOV_EAX_TO_PTR_FS_RAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X00)
#define _MOV_EAX_TO_PTR_FS_RBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X03)
#define _MOV_EAX_TO_PTR_FS_RCX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X01)
#define _MOV_EAX_TO_PTR_FS_RDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X02)
#define _MOV_EAX_TO_PTR_FS_RDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X07)
#define _MOV_EAX_TO_PTR_FS_RSI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X06)
#define _MOV_EAX_TO_PTR_FS_RBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X00)
#define _MOV_EAX_TO_PTR_FS_RSP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X24)
#define _MOV_EAX_TO_PTR_FS_R8 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X00)
#define _MOV_EAX_TO_PTR_FS_R9 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X01)
#define _MOV_EAX_TO_PTR_FS_R10 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X02)
#define _MOV_EAX_TO_PTR_FS_R11 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X03)
#define _MOV_EAX_TO_PTR_FS_R12 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X24)
#define _MOV_EAX_TO_PTR_FS_R13 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X00)
#define _MOV_EAX_TO_PTR_FS_R14 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X06)
#define _MOV_EAX_TO_PTR_FS_R15 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X07)
#define _MOV_EAX_TO_PTR_GS_RAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X00)
#define _MOV_EAX_TO_PTR_GS_RBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X03)
#define _MOV_EAX_TO_PTR_GS_RCX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X01)
#define _MOV_EAX_TO_PTR_GS_RDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X02)
#define _MOV_EAX_TO_PTR_GS_RDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X07)
#define _MOV_EAX_TO_PTR_GS_RSI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X06)
#define _MOV_EAX_TO_PTR_GS_RBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X00)
#define _MOV_EAX_TO_PTR_GS_RSP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X24)
#define _MOV_EAX_TO_PTR_GS_R8 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X00)
#define _MOV_EAX_TO_PTR_GS_R9 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X01)
#define _MOV_EAX_TO_PTR_GS_R10 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X02)
#define _MOV_EAX_TO_PTR_GS_R11 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X03)
#define _MOV_EAX_TO_PTR_GS_R12 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X24)
#define _MOV_EAX_TO_PTR_GS_R13 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X00)
#define _MOV_EAX_TO_PTR_GS_R14 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X06)
#define _MOV_EAX_TO_PTR_GS_R15 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X07)

#define _MOV_EBX_TO_PTR_FS_RAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X18)
#define _MOV_EBX_TO_PTR_FS_RBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1B)
#define _MOV_EBX_TO_PTR_FS_RCX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X19)
#define _MOV_EBX_TO_PTR_FS_RDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1A)
#define _MOV_EBX_TO_PTR_FS_RDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1F)
#define _MOV_EBX_TO_PTR_FS_RSI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1E)
#define _MOV_EBX_TO_PTR_FS_RBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X5D)\
	__ASM__OP__(0X00)
#define _MOV_EBX_TO_PTR_FS_RSP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X24)
#define _MOV_EBX_TO_PTR_FS_R8 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X18)
#define _MOV_EBX_TO_PTR_FS_R9 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X19)
#define _MOV_EBX_TO_PTR_FS_R10 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1A)
#define _MOV_EBX_TO_PTR_FS_R11 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1B)
#define _MOV_EBX_TO_PTR_FS_R12 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X24)
#define _MOV_EBX_TO_PTR_FS_R13 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X5D)\
	__ASM__OP__(0X00)
#define _MOV_EBX_TO_PTR_FS_R14 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1E)
#define _MOV_EBX_TO_PTR_FS_R15 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1F)
#define _MOV_EBX_TO_PTR_GS_RAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X18)
#define _MOV_EBX_TO_PTR_GS_RBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1B)
#define _MOV_EBX_TO_PTR_GS_RCX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X19)
#define _MOV_EBX_TO_PTR_GS_RDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1A)
#define _MOV_EBX_TO_PTR_GS_RDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1F)
#define _MOV_EBX_TO_PTR_GS_RSI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1E)
#define _MOV_EBX_TO_PTR_GS_RBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X5D)\
	__ASM__OP__(0X00)
#define _MOV_EBX_TO_PTR_GS_RSP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X24)
#define _MOV_EBX_TO_PTR_GS_R8 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X18)
#define _MOV_EBX_TO_PTR_GS_R9 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X19)
#define _MOV_EBX_TO_PTR_GS_R10 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1A)
#define _MOV_EBX_TO_PTR_GS_R11 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1B)
#define _MOV_EBX_TO_PTR_GS_R12 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X24)
#define _MOV_EBX_TO_PTR_GS_R13 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X5D)\
	__ASM__OP__(0X00)
#define _MOV_EBX_TO_PTR_GS_R14 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1E)
#define _MOV_EBX_TO_PTR_GS_R15 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1F)

#define _MOV_ECX_TO_PTR_FS_RAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X08)
#define _MOV_ECX_TO_PTR_FS_RBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0B)
#define _MOV_ECX_TO_PTR_FS_RCX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X09)
#define _MOV_ECX_TO_PTR_FS_RDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0A)
#define _MOV_ECX_TO_PTR_FS_RDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0F)
#define _MOV_ECX_TO_PTR_FS_RSI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0E)
#define _MOV_ECX_TO_PTR_FS_RBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X00)
#define _MOV_ECX_TO_PTR_FS_RSP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X24)
#define _MOV_ECX_TO_PTR_FS_R8 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X08)
#define _MOV_ECX_TO_PTR_FS_R9 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X09)
#define _MOV_ECX_TO_PTR_FS_R10 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0A)
#define _MOV_ECX_TO_PTR_FS_R11 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0B)
#define _MOV_ECX_TO_PTR_FS_R12 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X24)
#define _MOV_ECX_TO_PTR_FS_R13 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X00)
#define _MOV_ECX_TO_PTR_FS_R14 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0E)
#define _MOV_ECX_TO_PTR_FS_R15 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0F)
#define _MOV_ECX_TO_PTR_GS_RAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X08)
#define _MOV_ECX_TO_PTR_GS_RBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0B)
#define _MOV_ECX_TO_PTR_GS_RCX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X09)
#define _MOV_ECX_TO_PTR_GS_RDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0A)
#define _MOV_ECX_TO_PTR_GS_RDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0F)
#define _MOV_ECX_TO_PTR_GS_RSI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0E)
#define _MOV_ECX_TO_PTR_GS_RBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X00)
#define _MOV_ECX_TO_PTR_GS_RSP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X24)
#define _MOV_ECX_TO_PTR_GS_R8 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X08)
#define _MOV_ECX_TO_PTR_GS_R9 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X09)
#define _MOV_ECX_TO_PTR_GS_R10 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0A)
#define _MOV_ECX_TO_PTR_GS_R11 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0B)
#define _MOV_ECX_TO_PTR_GS_R12 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X24)
#define _MOV_ECX_TO_PTR_GS_R13 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X00)
#define _MOV_ECX_TO_PTR_GS_R14 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0E)
#define _MOV_ECX_TO_PTR_GS_R15 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0F)

#define _MOV_EDX_TO_PTR_FS_RAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X10)
#define _MOV_EDX_TO_PTR_FS_RBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X13)
#define _MOV_EDX_TO_PTR_FS_RCX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X11)
#define _MOV_EDX_TO_PTR_FS_RDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X12)
#define _MOV_EDX_TO_PTR_FS_RDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X17)
#define _MOV_EDX_TO_PTR_FS_RSI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X16)
#define _MOV_EDX_TO_PTR_FS_RBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X55)\
	__ASM__OP__(0X00)
#define _MOV_EDX_TO_PTR_FS_RSP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X24)
#define _MOV_EDX_TO_PTR_FS_R8 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X10)
#define _MOV_EDX_TO_PTR_FS_R9 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X11)
#define _MOV_EDX_TO_PTR_FS_R10 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X12)
#define _MOV_EDX_TO_PTR_FS_R11 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X13)
#define _MOV_EDX_TO_PTR_FS_R12 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X24)
#define _MOV_EDX_TO_PTR_FS_R13 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X55)\
	__ASM__OP__(0X00)
#define _MOV_EDX_TO_PTR_FS_R14 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X16)
#define _MOV_EDX_TO_PTR_FS_R15 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X17)
#define _MOV_EDX_TO_PTR_GS_RAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X10)
#define _MOV_EDX_TO_PTR_GS_RBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X13)
#define _MOV_EDX_TO_PTR_GS_RCX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X11)
#define _MOV_EDX_TO_PTR_GS_RDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X12)
#define _MOV_EDX_TO_PTR_GS_RDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X17)
#define _MOV_EDX_TO_PTR_GS_RSI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X16)
#define _MOV_EDX_TO_PTR_GS_RBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X55)\
	__ASM__OP__(0X00)
#define _MOV_EDX_TO_PTR_GS_RSP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X24)
#define _MOV_EDX_TO_PTR_GS_R8 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X10)
#define _MOV_EDX_TO_PTR_GS_R9 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X11)
#define _MOV_EDX_TO_PTR_GS_R10 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X12)
#define _MOV_EDX_TO_PTR_GS_R11 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X13)
#define _MOV_EDX_TO_PTR_GS_R12 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X24)
#define _MOV_EDX_TO_PTR_GS_R13 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X55)\
	__ASM__OP__(0X00)
#define _MOV_EDX_TO_PTR_GS_R14 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X16)
#define _MOV_EDX_TO_PTR_GS_R15 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X17)

#define _MOV_EDI_TO_PTR_FS_RAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X38)
#define _MOV_EDI_TO_PTR_FS_RBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3B)
#define _MOV_EDI_TO_PTR_FS_RCX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X39)
#define _MOV_EDI_TO_PTR_FS_RDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3A)
#define _MOV_EDI_TO_PTR_FS_RDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3F)
#define _MOV_EDI_TO_PTR_FS_RSI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3E)
#define _MOV_EDI_TO_PTR_FS_RBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X7D)\
	__ASM__OP__(0X00)
#define _MOV_EDI_TO_PTR_FS_RSP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X24)
#define _MOV_EDI_TO_PTR_FS_R8 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X38)
#define _MOV_EDI_TO_PTR_FS_R9 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X39)
#define _MOV_EDI_TO_PTR_FS_R10 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3A)
#define _MOV_EDI_TO_PTR_FS_R11 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3B)
#define _MOV_EDI_TO_PTR_FS_R12 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X24)
#define _MOV_EDI_TO_PTR_FS_R13 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X7D)\
	__ASM__OP__(0X00)
#define _MOV_EDI_TO_PTR_FS_R14 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3E)
#define _MOV_EDI_TO_PTR_FS_R15 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3F)
#define _MOV_EDI_TO_PTR_GS_RAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X38)
#define _MOV_EDI_TO_PTR_GS_RBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3B)
#define _MOV_EDI_TO_PTR_GS_RCX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X39)
#define _MOV_EDI_TO_PTR_GS_RDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3A)
#define _MOV_EDI_TO_PTR_GS_RDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3F)
#define _MOV_EDI_TO_PTR_GS_RSI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3E)
#define _MOV_EDI_TO_PTR_GS_RBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X7D)\
	__ASM__OP__(0X00)
#define _MOV_EDI_TO_PTR_GS_RSP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X24)
#define _MOV_EDI_TO_PTR_GS_R8 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X38)
#define _MOV_EDI_TO_PTR_GS_R9 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X39)
#define _MOV_EDI_TO_PTR_GS_R10 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3A)
#define _MOV_EDI_TO_PTR_GS_R11 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3B)
#define _MOV_EDI_TO_PTR_GS_R12 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X24)
#define _MOV_EDI_TO_PTR_GS_R13 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X7D)\
	__ASM__OP__(0X00)
#define _MOV_EDI_TO_PTR_GS_R14 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3E)
#define _MOV_EDI_TO_PTR_GS_R15 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3F)

#define _MOV_ESI_TO_PTR_FS_RAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X30)
#define _MOV_ESI_TO_PTR_FS_RBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X33)
#define _MOV_ESI_TO_PTR_FS_RCX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X31)
#define _MOV_ESI_TO_PTR_FS_RDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X32)
#define _MOV_ESI_TO_PTR_FS_RDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X37)
#define _MOV_ESI_TO_PTR_FS_RSI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X36)
#define _MOV_ESI_TO_PTR_FS_RBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X75)\
	__ASM__OP__(0X00)
#define _MOV_ESI_TO_PTR_FS_RSP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X24)
#define _MOV_ESI_TO_PTR_FS_R8 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X30)
#define _MOV_ESI_TO_PTR_FS_R9 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X31)
#define _MOV_ESI_TO_PTR_FS_R10 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X32)
#define _MOV_ESI_TO_PTR_FS_R11 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X33)
#define _MOV_ESI_TO_PTR_FS_R12 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X24)
#define _MOV_ESI_TO_PTR_FS_R13 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X75)\
	__ASM__OP__(0X00)
#define _MOV_ESI_TO_PTR_FS_R14 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X36)
#define _MOV_ESI_TO_PTR_FS_R15 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X37)
#define _MOV_ESI_TO_PTR_GS_RAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X30)
#define _MOV_ESI_TO_PTR_GS_RBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X33)
#define _MOV_ESI_TO_PTR_GS_RCX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X31)
#define _MOV_ESI_TO_PTR_GS_RDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X32)
#define _MOV_ESI_TO_PTR_GS_RDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X37)
#define _MOV_ESI_TO_PTR_GS_RSI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X36)
#define _MOV_ESI_TO_PTR_GS_RBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X75)\
	__ASM__OP__(0X00)
#define _MOV_ESI_TO_PTR_GS_RSP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X24)
#define _MOV_ESI_TO_PTR_GS_R8 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X30)
#define _MOV_ESI_TO_PTR_GS_R9 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X31)
#define _MOV_ESI_TO_PTR_GS_R10 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X32)
#define _MOV_ESI_TO_PTR_GS_R11 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X33)
#define _MOV_ESI_TO_PTR_GS_R12 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X24)
#define _MOV_ESI_TO_PTR_GS_R13 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X75)\
	__ASM__OP__(0X00)
#define _MOV_ESI_TO_PTR_GS_R14 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X36)
#define _MOV_ESI_TO_PTR_GS_R15 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X37)

#define _MOV_EBP_TO_PTR_FS_RAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X28)
#define _MOV_EBP_TO_PTR_FS_RBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2B)
#define _MOV_EBP_TO_PTR_FS_RCX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X29)
#define _MOV_EBP_TO_PTR_FS_RDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2A)
#define _MOV_EBP_TO_PTR_FS_RDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2F)
#define _MOV_EBP_TO_PTR_FS_RSI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2E)
#define _MOV_EBP_TO_PTR_FS_RBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X6D)\
	__ASM__OP__(0X00)
#define _MOV_EBP_TO_PTR_FS_RSP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X24)
#define _MOV_EBP_TO_PTR_FS_R8 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X28)
#define _MOV_EBP_TO_PTR_FS_R9 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X29)
#define _MOV_EBP_TO_PTR_FS_R10 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2A)
#define _MOV_EBP_TO_PTR_FS_R11 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2B)
#define _MOV_EBP_TO_PTR_FS_R12 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X24)
#define _MOV_EBP_TO_PTR_FS_R13 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X6D)\
	__ASM__OP__(0X00)
#define _MOV_EBP_TO_PTR_FS_R14 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2E)
#define _MOV_EBP_TO_PTR_FS_R15 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2F)
#define _MOV_EBP_TO_PTR_GS_RAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X28)
#define _MOV_EBP_TO_PTR_GS_RBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2B)
#define _MOV_EBP_TO_PTR_GS_RCX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X29)
#define _MOV_EBP_TO_PTR_GS_RDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2A)
#define _MOV_EBP_TO_PTR_GS_RDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2F)
#define _MOV_EBP_TO_PTR_GS_RSI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2E)
#define _MOV_EBP_TO_PTR_GS_RBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X6D)\
	__ASM__OP__(0X00)
#define _MOV_EBP_TO_PTR_GS_RSP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X24)
#define _MOV_EBP_TO_PTR_GS_R8 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X28)
#define _MOV_EBP_TO_PTR_GS_R9 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X29)
#define _MOV_EBP_TO_PTR_GS_R10 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2A)
#define _MOV_EBP_TO_PTR_GS_R11 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2B)
#define _MOV_EBP_TO_PTR_GS_R12 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X24)
#define _MOV_EBP_TO_PTR_GS_R13 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X6D)\
	__ASM__OP__(0X00)
#define _MOV_EBP_TO_PTR_GS_R14 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2E)
#define _MOV_EBP_TO_PTR_GS_R15 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2F)

#define _MOV_ESP_TO_PTR_FS_RAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X20)
#define _MOV_ESP_TO_PTR_FS_RBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X23)
#define _MOV_ESP_TO_PTR_FS_RCX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X21)
#define _MOV_ESP_TO_PTR_FS_RDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X22)
#define _MOV_ESP_TO_PTR_FS_RDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X27)
#define _MOV_ESP_TO_PTR_FS_RSI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X26)
#define _MOV_ESP_TO_PTR_FS_RBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X65)\
	__ASM__OP__(0X00)
#define _MOV_ESP_TO_PTR_FS_RSP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X24)
#define _MOV_ESP_TO_PTR_FS_R8 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X20)
#define _MOV_ESP_TO_PTR_FS_R9 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X21)
#define _MOV_ESP_TO_PTR_FS_R10 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X22)
#define _MOV_ESP_TO_PTR_FS_R11 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X23)
#define _MOV_ESP_TO_PTR_FS_R12 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X24)
#define _MOV_ESP_TO_PTR_FS_R13 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X65)\
	__ASM__OP__(0X00)
#define _MOV_ESP_TO_PTR_FS_R14 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X26)
#define _MOV_ESP_TO_PTR_FS_R15 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X27)
#define _MOV_ESP_TO_PTR_GS_RAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X20)
#define _MOV_ESP_TO_PTR_GS_RBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X23)
#define _MOV_ESP_TO_PTR_GS_RCX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X21)
#define _MOV_ESP_TO_PTR_GS_RDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X22)
#define _MOV_ESP_TO_PTR_GS_RDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X27)
#define _MOV_ESP_TO_PTR_GS_RSI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X26)
#define _MOV_ESP_TO_PTR_GS_RBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X65)\
	__ASM__OP__(0X00)
#define _MOV_ESP_TO_PTR_GS_RSP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X24)
#define _MOV_ESP_TO_PTR_GS_R8 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X20)
#define _MOV_ESP_TO_PTR_GS_R9 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X21)
#define _MOV_ESP_TO_PTR_GS_R10 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X22)
#define _MOV_ESP_TO_PTR_GS_R11 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X23)
#define _MOV_ESP_TO_PTR_GS_R12 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X24)
#define _MOV_ESP_TO_PTR_GS_R13 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X65)\
	__ASM__OP__(0X00)
#define _MOV_ESP_TO_PTR_GS_R14 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X26)
#define _MOV_ESP_TO_PTR_GS_R15 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X27)

#define _MOV_R8D_TO_PTR_FS_RAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X00)
#define _MOV_R8D_TO_PTR_FS_RBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X03)
#define _MOV_R8D_TO_PTR_FS_RCX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X01)
#define _MOV_R8D_TO_PTR_FS_RDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X02)
#define _MOV_R8D_TO_PTR_FS_RDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X07)
#define _MOV_R8D_TO_PTR_FS_RSI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X06)
#define _MOV_R8D_TO_PTR_FS_RBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X00)
#define _MOV_R8D_TO_PTR_FS_RSP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X24)
#define _MOV_R8D_TO_PTR_FS_R8 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X00)
#define _MOV_R8D_TO_PTR_FS_R9 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X01)
#define _MOV_R8D_TO_PTR_FS_R10 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X02)
#define _MOV_R8D_TO_PTR_FS_R11 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X03)
#define _MOV_R8D_TO_PTR_FS_R12 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X24)
#define _MOV_R8D_TO_PTR_FS_R13 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X00)
#define _MOV_R8D_TO_PTR_FS_R14 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X06)
#define _MOV_R8D_TO_PTR_FS_R15 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X07)
#define _MOV_R8D_TO_PTR_GS_RAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X00)
#define _MOV_R8D_TO_PTR_GS_RBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X03)
#define _MOV_R8D_TO_PTR_GS_RCX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X01)
#define _MOV_R8D_TO_PTR_GS_RDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X02)
#define _MOV_R8D_TO_PTR_GS_RDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X07)
#define _MOV_R8D_TO_PTR_GS_RSI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X06)
#define _MOV_R8D_TO_PTR_GS_RBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X00)
#define _MOV_R8D_TO_PTR_GS_RSP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X24)
#define _MOV_R8D_TO_PTR_GS_R8 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X00)
#define _MOV_R8D_TO_PTR_GS_R9 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X01)
#define _MOV_R8D_TO_PTR_GS_R10 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X02)
#define _MOV_R8D_TO_PTR_GS_R11 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X03)
#define _MOV_R8D_TO_PTR_GS_R12 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X24)
#define _MOV_R8D_TO_PTR_GS_R13 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X00)
#define _MOV_R8D_TO_PTR_GS_R14 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X06)
#define _MOV_R8D_TO_PTR_GS_R15 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X07)

#define _MOV_R9D_TO_PTR_FS_RAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X08)
#define _MOV_R9D_TO_PTR_FS_RBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0B)
#define _MOV_R9D_TO_PTR_FS_RCX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X09)
#define _MOV_R9D_TO_PTR_FS_RDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0A)
#define _MOV_R9D_TO_PTR_FS_RDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0F)
#define _MOV_R9D_TO_PTR_FS_RSI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0E)
#define _MOV_R9D_TO_PTR_FS_RBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X00)
#define _MOV_R9D_TO_PTR_FS_RSP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X24)
#define _MOV_R9D_TO_PTR_FS_R8 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X08)
#define _MOV_R9D_TO_PTR_FS_R9 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X09)
#define _MOV_R9D_TO_PTR_FS_R10 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0A)
#define _MOV_R9D_TO_PTR_FS_R11 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0B)
#define _MOV_R9D_TO_PTR_FS_R12 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X24)
#define _MOV_R9D_TO_PTR_FS_R13 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X00)
#define _MOV_R9D_TO_PTR_FS_R14 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0E)
#define _MOV_R9D_TO_PTR_FS_R15 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0F)
#define _MOV_R9D_TO_PTR_GS_RAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X08)
#define _MOV_R9D_TO_PTR_GS_RBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0B)
#define _MOV_R9D_TO_PTR_GS_RCX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X09)
#define _MOV_R9D_TO_PTR_GS_RDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0A)
#define _MOV_R9D_TO_PTR_GS_RDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0F)
#define _MOV_R9D_TO_PTR_GS_RSI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0E)
#define _MOV_R9D_TO_PTR_GS_RBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X00)
#define _MOV_R9D_TO_PTR_GS_RSP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X24)
#define _MOV_R9D_TO_PTR_GS_R8 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X08)
#define _MOV_R9D_TO_PTR_GS_R9 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X09)
#define _MOV_R9D_TO_PTR_GS_R10 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0A)
#define _MOV_R9D_TO_PTR_GS_R11 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0B)
#define _MOV_R9D_TO_PTR_GS_R12 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X24)
#define _MOV_R9D_TO_PTR_GS_R13 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X4D)\
	__ASM__OP__(0X00)
#define _MOV_R9D_TO_PTR_GS_R14 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0E)
#define _MOV_R9D_TO_PTR_GS_R15 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0F)

#define _MOV_R10D_TO_PTR_FS_RAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X10)
#define _MOV_R10D_TO_PTR_FS_RBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X13)
#define _MOV_R10D_TO_PTR_FS_RCX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X11)
#define _MOV_R10D_TO_PTR_FS_RDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X12)
#define _MOV_R10D_TO_PTR_FS_RDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X17)
#define _MOV_R10D_TO_PTR_FS_RSI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X16)
#define _MOV_R10D_TO_PTR_FS_RBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X55)\
	__ASM__OP__(0X00)
#define _MOV_R10D_TO_PTR_FS_RSP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X24)
#define _MOV_R10D_TO_PTR_FS_R8 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X10)
#define _MOV_R10D_TO_PTR_FS_R9 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X11)
#define _MOV_R10D_TO_PTR_FS_R10 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X12)
#define _MOV_R10D_TO_PTR_FS_R11 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X13)
#define _MOV_R10D_TO_PTR_FS_R12 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X24)
#define _MOV_R10D_TO_PTR_FS_R13 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X55)\
	__ASM__OP__(0X00)
#define _MOV_R10D_TO_PTR_FS_R14 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X16)
#define _MOV_R10D_TO_PTR_FS_R15 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X17)
#define _MOV_R10D_TO_PTR_GS_RAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X10)
#define _MOV_R10D_TO_PTR_GS_RBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X13)
#define _MOV_R10D_TO_PTR_GS_RCX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X11)
#define _MOV_R10D_TO_PTR_GS_RDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X12)
#define _MOV_R10D_TO_PTR_GS_RDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X17)
#define _MOV_R10D_TO_PTR_GS_RSI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X16)
#define _MOV_R10D_TO_PTR_GS_RBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X55)\
	__ASM__OP__(0X00)
#define _MOV_R10D_TO_PTR_GS_RSP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X24)
#define _MOV_R10D_TO_PTR_GS_R8 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X10)
#define _MOV_R10D_TO_PTR_GS_R9 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X11)
#define _MOV_R10D_TO_PTR_GS_R10 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X12)
#define _MOV_R10D_TO_PTR_GS_R11 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X13)
#define _MOV_R10D_TO_PTR_GS_R12 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X24)
#define _MOV_R10D_TO_PTR_GS_R13 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X55)\
	__ASM__OP__(0X00)
#define _MOV_R10D_TO_PTR_GS_R14 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X16)
#define _MOV_R10D_TO_PTR_GS_R15 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X17)

#define _MOV_R11D_TO_PTR_FS_RAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X18)
#define _MOV_R11D_TO_PTR_FS_RBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1B)
#define _MOV_R11D_TO_PTR_FS_RCX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X19)
#define _MOV_R11D_TO_PTR_FS_RDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1A)
#define _MOV_R11D_TO_PTR_FS_RDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1F)
#define _MOV_R11D_TO_PTR_FS_RSI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1E)
#define _MOV_R11D_TO_PTR_FS_RBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X5D)\
	__ASM__OP__(0X00)
#define _MOV_R11D_TO_PTR_FS_RSP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X24)
#define _MOV_R11D_TO_PTR_FS_R8 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X18)
#define _MOV_R11D_TO_PTR_FS_R9 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X19)
#define _MOV_R11D_TO_PTR_FS_R10 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1A)
#define _MOV_R11D_TO_PTR_FS_R11 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1B)
#define _MOV_R11D_TO_PTR_FS_R12 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X24)
#define _MOV_R11D_TO_PTR_FS_R13 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X5D)\
	__ASM__OP__(0X00)
#define _MOV_R11D_TO_PTR_FS_R14 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1E)
#define _MOV_R11D_TO_PTR_FS_R15 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1F)
#define _MOV_R11D_TO_PTR_GS_RAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X18)
#define _MOV_R11D_TO_PTR_GS_RBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1B)
#define _MOV_R11D_TO_PTR_GS_RCX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X19)
#define _MOV_R11D_TO_PTR_GS_RDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1A)
#define _MOV_R11D_TO_PTR_GS_RDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1F)
#define _MOV_R11D_TO_PTR_GS_RSI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1E)
#define _MOV_R11D_TO_PTR_GS_RBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X5D)\
	__ASM__OP__(0X00)
#define _MOV_R11D_TO_PTR_GS_RSP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X24)
#define _MOV_R11D_TO_PTR_GS_R8 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X18)
#define _MOV_R11D_TO_PTR_GS_R9 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X19)
#define _MOV_R11D_TO_PTR_GS_R10 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1A)
#define _MOV_R11D_TO_PTR_GS_R11 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1B)
#define _MOV_R11D_TO_PTR_GS_R12 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X24)
#define _MOV_R11D_TO_PTR_GS_R13 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X5D)\
	__ASM__OP__(0X00)
#define _MOV_R11D_TO_PTR_GS_R14 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1E)
#define _MOV_R11D_TO_PTR_GS_R15 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1F)

#define _MOV_R12D_TO_PTR_FS_RAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X20)
#define _MOV_R12D_TO_PTR_FS_RBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X23)
#define _MOV_R12D_TO_PTR_FS_RCX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X21)
#define _MOV_R12D_TO_PTR_FS_RDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X22)
#define _MOV_R12D_TO_PTR_FS_RDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X27)
#define _MOV_R12D_TO_PTR_FS_RSI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X26)
#define _MOV_R12D_TO_PTR_FS_RBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X65)\
	__ASM__OP__(0X00)
#define _MOV_R12D_TO_PTR_FS_RSP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X24)
#define _MOV_R12D_TO_PTR_FS_R8 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X20)
#define _MOV_R12D_TO_PTR_FS_R9 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X21)
#define _MOV_R12D_TO_PTR_FS_R10 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X22)
#define _MOV_R12D_TO_PTR_FS_R11 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X23)
#define _MOV_R12D_TO_PTR_FS_R12 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X24)
#define _MOV_R12D_TO_PTR_FS_R13 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X65)\
	__ASM__OP__(0X00)
#define _MOV_R12D_TO_PTR_FS_R14 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X26)
#define _MOV_R12D_TO_PTR_FS_R15 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X27)
#define _MOV_R12D_TO_PTR_GS_RAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X20)
#define _MOV_R12D_TO_PTR_GS_RBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X23)
#define _MOV_R12D_TO_PTR_GS_RCX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X21)
#define _MOV_R12D_TO_PTR_GS_RDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X22)
#define _MOV_R12D_TO_PTR_GS_RDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X27)
#define _MOV_R12D_TO_PTR_GS_RSI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X26)
#define _MOV_R12D_TO_PTR_GS_RBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X65)\
	__ASM__OP__(0X00)
#define _MOV_R12D_TO_PTR_GS_RSP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X24)
#define _MOV_R12D_TO_PTR_GS_R8 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X20)
#define _MOV_R12D_TO_PTR_GS_R9 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X21)
#define _MOV_R12D_TO_PTR_GS_R10 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X22)
#define _MOV_R12D_TO_PTR_GS_R11 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X23)
#define _MOV_R12D_TO_PTR_GS_R12 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X24)
#define _MOV_R12D_TO_PTR_GS_R13 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X65)\
	__ASM__OP__(0X00)
#define _MOV_R12D_TO_PTR_GS_R14 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X26)
#define _MOV_R12D_TO_PTR_GS_R15 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X27)

#define _MOV_R13D_TO_PTR_FS_RAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X28)
#define _MOV_R13D_TO_PTR_FS_RBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2B)
#define _MOV_R13D_TO_PTR_FS_RCX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X29)
#define _MOV_R13D_TO_PTR_FS_RDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2A)
#define _MOV_R13D_TO_PTR_FS_RDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2F)
#define _MOV_R13D_TO_PTR_FS_RSI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2E)
#define _MOV_R13D_TO_PTR_FS_RBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X6D)\
	__ASM__OP__(0X00)
#define _MOV_R13D_TO_PTR_FS_RSP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X24)
#define _MOV_R13D_TO_PTR_FS_R8 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X28)
#define _MOV_R13D_TO_PTR_FS_R9 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X29)
#define _MOV_R13D_TO_PTR_FS_R10 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2A)
#define _MOV_R13D_TO_PTR_FS_R11 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2B)
#define _MOV_R13D_TO_PTR_FS_R12 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X24)
#define _MOV_R13D_TO_PTR_FS_R13 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X6D)\
	__ASM__OP__(0X00)
#define _MOV_R13D_TO_PTR_FS_R14 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2E)
#define _MOV_R13D_TO_PTR_FS_R15 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2F)
#define _MOV_R13D_TO_PTR_GS_RAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X28)
#define _MOV_R13D_TO_PTR_GS_RBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2B)
#define _MOV_R13D_TO_PTR_GS_RCX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X29)
#define _MOV_R13D_TO_PTR_GS_RDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2A)
#define _MOV_R13D_TO_PTR_GS_RDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2F)
#define _MOV_R13D_TO_PTR_GS_RSI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2E)
#define _MOV_R13D_TO_PTR_GS_RBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X6D)\
	__ASM__OP__(0X00)
#define _MOV_R13D_TO_PTR_GS_RSP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X24)
#define _MOV_R13D_TO_PTR_GS_R8 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X28)
#define _MOV_R13D_TO_PTR_GS_R9 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X29)
#define _MOV_R13D_TO_PTR_GS_R10 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2A)
#define _MOV_R13D_TO_PTR_GS_R11 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2B)
#define _MOV_R13D_TO_PTR_GS_R12 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X24)
#define _MOV_R13D_TO_PTR_GS_R13 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X6D)\
	__ASM__OP__(0X00)
#define _MOV_R13D_TO_PTR_GS_R14 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2E)
#define _MOV_R13D_TO_PTR_GS_R15 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2F)

#define _MOV_R14D_TO_PTR_FS_RAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X30)
#define _MOV_R14D_TO_PTR_FS_RBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X33)
#define _MOV_R14D_TO_PTR_FS_RCX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X31)
#define _MOV_R14D_TO_PTR_FS_RDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X32)
#define _MOV_R14D_TO_PTR_FS_RDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X37)
#define _MOV_R14D_TO_PTR_FS_RSI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X36)
#define _MOV_R14D_TO_PTR_FS_RBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X75)\
	__ASM__OP__(0X00)
#define _MOV_R14D_TO_PTR_FS_RSP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X24)
#define _MOV_R14D_TO_PTR_FS_R8 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X30)
#define _MOV_R14D_TO_PTR_FS_R9 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X31)
#define _MOV_R14D_TO_PTR_FS_R10 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X32)
#define _MOV_R14D_TO_PTR_FS_R11 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X33)
#define _MOV_R14D_TO_PTR_FS_R12 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X24)
#define _MOV_R14D_TO_PTR_FS_R13 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X75)\
	__ASM__OP__(0X00)
#define _MOV_R14D_TO_PTR_FS_R14 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X36)
#define _MOV_R14D_TO_PTR_FS_R15 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X37)
#define _MOV_R14D_TO_PTR_GS_RAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X30)
#define _MOV_R14D_TO_PTR_GS_RBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X33)
#define _MOV_R14D_TO_PTR_GS_RCX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X31)
#define _MOV_R14D_TO_PTR_GS_RDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X32)
#define _MOV_R14D_TO_PTR_GS_RDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X37)
#define _MOV_R14D_TO_PTR_GS_RSI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X36)
#define _MOV_R14D_TO_PTR_GS_RBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X75)\
	__ASM__OP__(0X00)
#define _MOV_R14D_TO_PTR_GS_RSP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X24)
#define _MOV_R14D_TO_PTR_GS_R8 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X30)
#define _MOV_R14D_TO_PTR_GS_R9 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X31)
#define _MOV_R14D_TO_PTR_GS_R10 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X32)
#define _MOV_R14D_TO_PTR_GS_R11 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X33)
#define _MOV_R14D_TO_PTR_GS_R12 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X24)
#define _MOV_R14D_TO_PTR_GS_R13 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X75)\
	__ASM__OP__(0X00)
#define _MOV_R14D_TO_PTR_GS_R14 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X36)
#define _MOV_R14D_TO_PTR_GS_R15 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X37)

#define _MOV_R15D_TO_PTR_FS_RAX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X38)
#define _MOV_R15D_TO_PTR_FS_RBX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3B)
#define _MOV_R15D_TO_PTR_FS_RCX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X39)
#define _MOV_R15D_TO_PTR_FS_RDX \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3A)
#define _MOV_R15D_TO_PTR_FS_RDI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3F)
#define _MOV_R15D_TO_PTR_FS_RSI \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3E)
#define _MOV_R15D_TO_PTR_FS_RBP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X7D)\
	__ASM__OP__(0X00)
#define _MOV_R15D_TO_PTR_FS_RSP \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X24)
#define _MOV_R15D_TO_PTR_FS_R8 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X38)
#define _MOV_R15D_TO_PTR_FS_R9 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X39)
#define _MOV_R15D_TO_PTR_FS_R10 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3A)
#define _MOV_R15D_TO_PTR_FS_R11 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3B)
#define _MOV_R15D_TO_PTR_FS_R12 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X24)
#define _MOV_R15D_TO_PTR_FS_R13 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X7D)\
	__ASM__OP__(0X00)
#define _MOV_R15D_TO_PTR_FS_R14 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3E)
#define _MOV_R15D_TO_PTR_FS_R15 \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3F)
#define _MOV_R15D_TO_PTR_GS_RAX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X38)
#define _MOV_R15D_TO_PTR_GS_RBX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3B)
#define _MOV_R15D_TO_PTR_GS_RCX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X39)
#define _MOV_R15D_TO_PTR_GS_RDX \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3A)
#define _MOV_R15D_TO_PTR_GS_RDI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3F)
#define _MOV_R15D_TO_PTR_GS_RSI \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3E)
#define _MOV_R15D_TO_PTR_GS_RBP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X7D)\
	__ASM__OP__(0X00)
#define _MOV_R15D_TO_PTR_GS_RSP \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X24)
#define _MOV_R15D_TO_PTR_GS_R8 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X38)
#define _MOV_R15D_TO_PTR_GS_R9 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X39)
#define _MOV_R15D_TO_PTR_GS_R10 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3A)
#define _MOV_R15D_TO_PTR_GS_R11 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3B)
#define _MOV_R15D_TO_PTR_GS_R12 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X24)
#define _MOV_R15D_TO_PTR_GS_R13 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X7D)\
	__ASM__OP__(0X00)
#define _MOV_R15D_TO_PTR_GS_R14 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3E)
#define _MOV_R15D_TO_PTR_GS_R15 \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3F)
#endif /* __SYSTEM_64_BIT__ */
/* ************************ [^] 32-BIT SEGMENTS [^] ************************* */

#include "16.INL"

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
