#include <u.h>
#include <libc.h>
#include <bio.h>
#include <link.h>

char*	anamesv[] = {
	"XXX",
	"ABSD",
	"ABSF",
	"ADD",
	"ADDD",
	"ADDF",
	"ADDU",
	"AND",
	"BEQ",
	"BFPF",
	"BFPT",
	"BGEZ",
	"BGEZAL",
	"BGTZ",
	"BLEZ",
	"BLTZ",
	"BLTZAL",
	"BNE",
	"BREAK",
	"CMPEQD",
	"CMPEQF",
	"CMPGED",
	"CMPGEF",
	"CMPGTD",
	"CMPGTF",
	"DIV",
	"DIVD",
	"DIVF",
	"DIVU",
	"JAL",
	"JMP",
	"MOVB",
	"MOVBU",
	"MOVD",
	"MOVDF",
	"MOVDW",
	"MOVF",
	"MOVFD",
	"MOVFW",
	"MOVH",
	"MOVHU",
	"MOVW",
	"MOVWD",
	"MOVWF",
	"MOVWL",
	"MOVWR",
	"MUL",
	"MULD",
	"MULF",
	"MULU",
	"NEGD",
	"NEGF",
	"NOR",
	"OR",
	"REM",
	"REMU",
	"RET",
	"SGT",
	"SGTU",
	"SLL",
	"SRA",
	"SRL",
	"SUB",
	"SUBD",
	"SUBF",
	"SUBU",
	"SYSCALL",
	"TLBP",
	"TLBR",
	"TLBWI",
	"TLBWR",
	"XOR",
	"ERET",
	"PREF",
	"LL",
	"SC",
	"MAD",
	"MADU",
	"MUL32",
	"MSUB",
	"MSUBU",
	"ROTR",
	"MOVZ",
	"MOVN",
	"CLZ",
	"CLO",
	"SEB",
	"SEH",
	"WSBH",
	"DATA",
	"GLOBL",
	"GOK",
	"HISTORY",
	"NAME",
	"NOP",
	"TEXT",
	"WORD",
	"END",
	"DYNT_",
	"INIT_",
	"SIGNAME",
	"UNDEF",
	"USEFIELD",
	"TYPE",
	"FUNCDATA",
	"PCDATA",
	"CHECKNIL",
	"VARDEF",
	"VARKILL",
	"DUFFCOPY",
	"DUFFZERO",
	"LAST",
};
char*	cnamesv[] = {
	"NONE",
	"REG",
	"FREG",
	"FCREG",
	"MREG",
	"HI",
	"LO",
	"ZCON",
	"SCON",
	"ADD0CON",
	"AND0CON",
	"ADDCON",
	"ANDCON",
	"UCON",
	"LCON",
	"SACON",
	"SECON",
	"LACON",
	"LECON",
	"SBRA",
	"LBRA",
	"SAUTO",
	"SEXT",
	"LAUTO",
	"LEXT",
	"ZOREG",
	"SOREG",
	"LOREG",
	"GOK",
	"NCLASS",
};
