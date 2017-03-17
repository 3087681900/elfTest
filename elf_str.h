
#define ELFMAG "\177ELF"

char str_e_ident_class[3][13] = {
  "ELFCLASSNONE",
  "ELFCLASS32",
  "ELFCLASS64"
};

char str_e_ident_data[3][12] = {
  "ELFDATANONE",
  "ELFDATA2LSB",
  "ELFDATA2MSB"
};

#define EV_CURRENT "1"

char str_e_type[7][10] = {
  "ET_NONE",
  "ET_REL",
  "ET_EXEC",
  "ET_DYN",
  "ET_CORE",
  "ET_LOPROC",
  "ET_HIPROC"
};

char str_e_machine[11][15] = {
  "EM_NONE",
  "EM_M32",
  "EM_SPARC",
  "EM_386",
  "EM_68K",
  "EM_88K",
  "EM_486",
  "EM_860",
  "EM_MIPS",
  "EM_MIPS_RS4_BE",
  "RESERVED"
};

char str_e_version[2][11] = {
  "EV_NONE",
  "EV_CURRENT"
};

char str_p_type[16][13] = {
  "NULL",
  "LOAD",
  "DYNAMIC",
  "INTERP",
  "NOTE",
  "SHLIB",
  "PHDR",
  "TLS",
  "LOOS",
  "HIOS",
  "LOPROC",
  "HIPROC",
  "GNU_EH_FRAME",
  "GNU_STACK",
  "EXIDX",
  "GNU_RELRO"
};

char str_p_flags[5][2] = {
  "",
  "E",
  "W",
  "",
  "R"
};

char str_sh_type[40][24] = {
//char str_sh_type[40][23] = {
  "NULL",
  "PROGBITS",
  "SYMTAB",
  "STRTAB",
  "RELA",
  "HASH",
  "DYNAMIC",
  "NOTE",
  "NOBITS",
  "REL",
  "SHLIB",
  "DYNSYM",
  "",
  "",
  "INIT_ARRAY",
  "FINI_ARRAY",
  "PREINIT_ARRAY",
  "GROUP",
  "SYMTAB_SHNDX",
  //19~22
  "GNU_INCREMENTAL_INPUTS",  //0x6fff4700,
  "GNU_INCREMENTAL_SYMTAB",  //0x6fff4701,
  "GNU_INCREMENTAL_RELOCS",  //0x6fff4702,
  "GNU_INCREMENTAL_GOT_PLT", //0x6fff4703,
  //23~32
  "GNU_ATTRIBUTES", //0x6ffffff5,
  "GNU_HASH",       //0x6ffffff6,
  "GNU_LIBLIST",    //0x6ffffff7,
    //26~29
  "HIPROC", //0x7fffffff,
  "HIUSER", //0xffffffff,
  "LOOS",   //0x60000000,
  "LOUSER", //0x80000000,

  "VERDEF",         //0x6ffffffd,
  "VERNEED",        //0x6ffffffe,
  "VERSYM",         //0x6fffffff,
  //33~39
  "SPARC_GOTDATA",      //0x70000000,
  "ARM_EXIDX",          //0x70000001,
  "ARM_PREEMPTMAP",     //0x70000002,
  "ARM_ATTRIBUTES",     //0x70000003,
  "ARM_DEBUGOVERLAY",   //0x70000004,
  "ARM_OVERLAYSECTION", //0x70000005,
  "MIPS_REGINFO",       //0x70000006,
};


char str_sh_flag[17] = "WAXMSILOGTmmoEm";

char sh_flag_tips[230] = "\nkey to flags:\nW(WRITE), A(ALLOC), X(EXECINSTR), M(MERGE), S(STRINGS),\
I(INFO_LINK), L(LINK_ORDER), O(OS_NONCONFORMING), G(GROUP), T(TLS), M(MASKOS),\
m(MASKPROC), o(ORDERED), E(EXCLUDE), m1(MIPS_GPREL), X(X86_64_LARGE)\n\n";

char str_section_header_index[3][4] = {
  "UND",
  "ABS",
  "COM"
};

char str_symbol_table_type[7][8] = {
  "NOTYPE",
  "OBJECT",
  "FUNC",
  "SECTION",
  "FILE",
  "COMMON",
  "TLS"
};

char str_symbol_table_bind[3][7] = {
  "LOCAL",
  "GLOBAL",
  "WEAK"
};

char str_relocation_type[131][25] = {
  "R_ARM_NONE", //0,		// Static	Misc
  "R_ARM_PC24", //1,		// Deprecated	ARM	((S + A) | T) - P
  "R_ARM_ABS32", //2,		// Static	Data	(S + A) | T
  "R_ARM_REL32", //3,		// Static	Data	((S + A) | T) - P
  "R_ARM_LDR_PC_G0", //4,		// Static	ARM	S + A - P
  "R_ARM_ABS16", //5,		// Static	Data	S + A
  "R_ARM_ABS12", //6,		// Static	ARM	S + A
  "R_ARM_THM_ABS5", //7,		// Static	Thumb16	S + A
  "R_ARM_ABS8", //8,		// Static	Data	S + A
  "R_ARM_SBREL32", //9,		// Static	Data	((S + A) | T) - B(S)
  "R_ARM_THM_CALL", //10,		// Static	Thumb32	((S + A) | T) - P
  "R_ARM_THM_PC8", //11,		// Static	Thumb16
  "R_ARM_BREL_ADJ", //12,		// Dynamic	Data	DeltaB(S) + A
  "R_ARM_TLS_DESC", //13,		// Dynamic	Data
  "R_ARM_THM_SWI8", //14,		// Obsolete
  "R_ARM_XPC25", //15,		// Obsolete
  "R_ARM_THM_XPC22", //16,		// Obsolete
  "R_ARM_TLS_DTPMOD32", //17,	// Dynamic	Data	Module(S)
  "R_ARM_TLS_DTPOFF32", //18,	// Dynamic	Data	S + A - TLS
  "R_ARM_TLS_TPOFF32", //19,	// Dynamic	Data	S + A - tp
  "R_ARM_COPY", //20,		// Dynamic	Misc
  "R_ARM_GLOB_DAT", //21,		// Dynamic	Data	(S + A) | T
  "R_ARM_JUMP_SLOT", //22,		// Dynamic	Data	(S + A) | T
  "R_ARM_RELATIVE", //23,		// Dynamic	Data	B(S) + A
  "R_ARM_GOTOFF32", //24,		// Static	Data	(((S + A) | T) - GOT_ORG
  "R_ARM_BASE_PREL", //25,		// Static	Data	B(S) + A - P
  "R_ARM_GOT_BREL", //26,		// Static	Data	GOT(S) + A - GOT_ORG
  "R_ARM_PLT32", //27,		// Deprecated	ARM	((S + A) | T) - P
  "R_ARM_CALL", //28,		// Static	ARM	((S + A) | T) - P
  "R_ARM_JUMP24", //29,		// Static	ARM	((S + A) | T) - P
  "R_ARM_THM_JUMP24", //30,	// Static	Thumb32	((S + A) | T) - P
  "R_ARM_BASE_ABS", //31,		// Static	Data	B(S) + A
  "R_ARM_ALU_PCREL_7_0", //32,	// Obsolete
  "R_ARM_ALU_PCREL_15_8", //33,	// Obsolete
  "R_ARM_ALU_PCREL_23_15", //34,	// Obsolete
  "R_ARM_LDR_SBREL_11_0_NC", //35,	// Deprecated	ARM	S + A - B(S)
  "R_ARM_ALU_SBREL_19_12_NC", //36,// Deprecated	ARM	S + A - B(S)
  "R_ARM_ALU_SBREL_27_20_CK", //37,// Deprecated	ARM	S + A - B(S)
  "R_ARM_TARGET1", //38,		// Data		Misc	(S + A) | T or	//			((S + A) | T) - P
  "R_ARM_SBREL31", //39,		// Deprecated	Data	((S + A) | T) - B(S)
  "R_ARM_V4BX", //40,		// Static	Misc
  "R_ARM_TARGET2", //41,		// Static	Misc
  "R_ARM_PREL31", //42,		// Static	Data	((S + A) | T) - P
  "R_ARM_MOVW_ABS_NC", //43,	// Static	ARM	(S + A) | T
  "R_ARM_MOVT_ABS", //44,		// Static	ARM	S + A
  "R_ARM_MOVW_PREL_NC", //45,	// Static	ARM	((S + A) | T) - P
  "R_ARM_MOVT_PREL", //46,		// Static	ARM	S + A - P
  "R_ARM_THM_MOVW_ABS_NC", //47,	// Static	Thumb32	(S + A) | T
  "R_ARM_THM_MOVT_ABS", //48,	// Static	Thumb32	S + A - P
  "R_ARM_THM_MOVW_PREL_NC", // 49,	// Static	Thumb32	((S + A) | T) - P
  "R_ARM_THM_MOVT_PREL", //50,	// Static	Thumb32	S + A - P
  "R_ARM_THM_JUMP19", //51,	// Static	Thumb32	((S + A) | T) - P
  "R_ARM_THM_JUMP6", //52,		// Static	Thumb16	S + A - P
  "R_ARM_THM_ALU_PREL_11_0", //53,	// Static	Thumb32	((S + A) | T) - Pa
  "R_ARM_THM_PC12", //54,		// Static	Thumb32	S + A - Pa
  "R_ARM_ABS32_NOI", //55,		// Static	Data	S + A
  "R_ARM_REL32_NOI", //56,		// Static	Data	S + A - P
  "R_ARM_ALU_PC_G0_NC", //57,	// Static	ARM	((S + A) | T) - P
  "R_ARM_ALU_PC_G0", //58,		// Static	ARM	((S + A) | T) - P
  "R_ARM_ALU_PC_G1_NC", //59,	// Static	ARM	((S + A) | T) - P
  "R_ARM_ALU_PC_G1", //60,		// Static	ARM	((S + A) | T) - P
  "R_ARM_ALU_PC_G2", //61,		// Static	ARM	((S + A) | T) - P
  "R_ARM_LDR_PC_G1", //62,		// Static	ARM	S + A - P
  "R_ARM_LDR_PC_G2", //63,		// Static	ARM	S + A - P
  "R_ARM_LDRS_PC_G0", //64,	// Static	ARM	S + A - P
  "R_ARM_LDRS_PC_G1", //65,	// Static	ARM	S + A - P
  "R_ARM_LDRS_PC_G2", //66,	// Static	ARM	S + A - P
  "R_ARM_LDC_PC_G0", //67,		// Static	ARM	S + A - P
  "R_ARM_LDC_PC_G1", //68,		// Static	ARM	S + A - P
  "R_ARM_LDC_PC_G2", //69,		// Static	ARM	S + A - P
  "R_ARM_ALU_SB_G0_NC", //70,	// Static	ARM	((S + A) | T) - B(S)
  "R_ARM_ALU_SB_G0", //71,		// Static	ARM	((S + A) | T) - B(S)
  "R_ARM_ALU_SB_G1_NC", //72,	// Static	ARM	((S + A) | T) - B(S)
  "R_ARM_ALU_SB_G1", //73,		// Static	ARM	((S + A) | T) - B(S)
  "R_ARM_ALU_SB_G2", //74,		// Static	ARM	((S + A) | T) - B(S)
  "R_ARM_LDR_SB_G0", //75,		// Static	ARM	S + A - B(S)
  "R_ARM_LDR_SB_G1", //76,		// Static	ARM	S + A - B(S)
  "R_ARM_LDR_SB_G2", //77,		// Static	ARM	S + A - B(S)
  "R_ARM_LDRS_SB_G0", //78,	// Static	ARM	S + A - B(S)
  "R_ARM_LDRS_SB_G1", //79,	// Static	ARM	S + A - B(S)
  "R_ARM_LDRS_SB_G2", //80,	// Static	ARM	S + A - B(S)
  "R_ARM_LDC_SB_G0", //81,		// Static	ARM	S + A - B(S)
  "R_ARM_LDC_SB_G1", //82,		// Static	ARM	S + A - B(S)
  "R_ARM_LDC_SB_G2", //83,		// Static	ARM	S + A - B(S)
  "R_ARM_MOVW_BREL_NC", //84,	// Static	ARM	((S + A) | T) - B(S)
  "R_ARM_MOVT_BREL", //85,		// Static	ARM	S + A - B(S)
  "R_ARM_MOVW_BREL", //86,		// Static	ARM	((S + A) | T) - B(S)
  "R_ARM_THM_MOVW_BREL_NC", //87,	// Static	Thumb32	((S + A) | T) - B(S)
  "R_ARM_THM_MOVT_BREL", //88,	// Static	Thumb32	S + A - B(S)
  "R_ARM_THM_MOVW_BREL", //89,	// Static	Thumb32	((S + A) | T) - B(S)
  "R_ARM_TLS_GOTDESC", //90,	// Static	Data
  "R_ARM_TLS_CALL", //91,		// Static	ARM
  "R_ARM_TLS_DESCSEQ", //92,	// Static	ARM	TLS relaxation
  "R_ARM_THM_TLS_CALL", //93,	// Static	Thumb32
  "R_ARM_PLT32_ABS", // 94,	// Static	Data	PLT(S) + A
  "R_ARM_GOT_ABS", // 95,		// Static	Data	GOT(S) + A
  "R_ARM_GOT_PREL", //96,		// Static	Data	GOT(S) + A - P
  "R_ARM_GOT_BREL12", // 97,	// Static	ARM	GOT(S) + A - GOT_ORG
  "R_ARM_GOTOFF12", // 98,		// Static	ARM	S + A - GOT_ROG
  "R_ARM_GOTRELAX", // 99,		// Static	Misc
  "R_ARM_GNU_VTENTRY", //100,	// Deprecated	Data
  "R_ARM_GNU_VTINHERIT", //101,	// Deprecated	Data
  "R_ARM_THM_JUMP11", //102,	// Static	Thumb16	S + A - P
  "R_ARM_THM_JUMP8", //103,	// Static	Thumb16	S + A - P
  "R_ARM_TLS_GD32", //104,		// Static	Data	GOT(S) + A - P
  "R_ARM_TLS_LDM32", //105,	// Static	Data	GOT(S) + A - P
  "R_ARM_TLS_LDO32", //106,	// Static	Data	S + A - TLS
  "R_ARM_TLS_IE32", //107,		// Static	Data	GOT(S) + A - P
  "R_ARM_TLS_LE32", //108,		// Static	Data	S + A - tp
  "R_ARM_TLS_LDO12", //109,	// Static	ARM	S + A - TLS
  "R_ARM_TLS_LE12", //110,		// Static	ARM	S + A - tp
  "R_ARM_TLS_IE12GP", //111,	// Static	ARM	GOT(S) + A - GOT_ORG
  "R_ARM_PRIVATE_0", //112,	// Private (n", //0, 1, ... 15)
  "R_ARM_PRIVATE_1", //113,
  "R_ARM_PRIVATE_2", //114,
  "R_ARM_PRIVATE_3", //115,
  "R_ARM_PRIVATE_4", //116,
  "R_ARM_PRIVATE_5", //117,
  "R_ARM_PRIVATE_6", //118,
  "R_ARM_PRIVATE_7", //119,
  "R_ARM_PRIVATE_8", //120,
  "R_ARM_PRIVATE_9", //121,
  "R_ARM_PRIVATE_10", //122,
  "R_ARM_PRIVATE_11", //123,
  "R_ARM_PRIVATE_12", //124,
  "R_ARM_PRIVATE_13", //125,
  "R_ARM_PRIVATE_14", //126,
  "R_ARM_PRIVATE_15", //127,
  "R_ARM_ME_TOO", //128,		// Obsolete
  "R_ARM_THM_TLS_DESCSEQ16", //129,// Static	Thumb16
  "R_ARM_THM_TLS_DESCSEQ32", //130,// Static	Thumb32
};

// 0 : val    1 : ptr
char str_dynamic_type[83][2][17] = {
  { "NULL",  1},
  { "NEEDED",  0},
  { "PLTRELS",  0},
  { "PLTGOT",  1},
  { "HASH",  1},
  { "STRTAB",  1},
  { "SYMTAB",  1},
  { "RELA",  1},
  { "RELAS",  0},
  { "RELAEN",  0},
  { "STRSZ",  0},
  { "SYMENT",  0},
  { "INIT",  1},
  { "FINI",  1},
  { "SONAME",  0},
  { "RPATH",  0},
  { "SYMBOLIC",  0},
  { "REL",  1},
  { "RELSZ",  0},
  { "RELENT",  0},
  { "PLTREL",  0},
  { "DEBUG",  1},
  { "TEXTREL",  0},
  { "JMPREL",   1},
  { "BIND_NOW",   0},
  { "INIT_ARRAY",   1},
  { "FINI_ARRAY",   1},
  { "INIT_ARRAYSZ",  0},
  { "FINI_ARRAYSZ",  0},
  { "RUNPATH",  0},
  { "FLAGS",  0}, //30
  {"",0}, //
  { "PREINIT_ARRAY",  1},// 32
  { "PREINIT_ARRAYSZ",  0}, //33
  { "MAXPOSTAGS",  0}, //34
  //35
  { "LOOS",  0},       //0x6000000d
  { "SUNW_FILTER",  1},       //0x6000000e
  //37
  { "SUNW_CAP",  1},          //0x60000010
  { "SUNW_SYMTAB",  1},       //0x600000011
  { "SUNW_SYMSZ",  0},          //0x60000012
  { "SUNW_ENCODING",  0},       //0x60000013
  { "SUNW_SYMSORT",  1},       //0x60000014
  { "SUNW_SYMSORTSZ",  0},       //0x60000015
  { "SUNW_TLSSORT",  1},       //0x60000016
  { "SUNW_TLSSORTSZ",  0},       //0x60000017
  { "SUNW_CAPINFO",  1},       //0x60000018
  { "SUNW_STRPAD",  0},       //0x60000019
  { "SUNW_CAPCHAIN",  1},       //0x6000001a
  { "SUNW_LDMACH",  0},       //0x6000001b
  { "",0},
  { "SUNW_CAPCHAINENT",  0},       //0x6000001d
  { "SUNW_CAPCHAINSZ",  0},       //0x6000001f
  //52
  { "HIOS",  0},  //0x6ffff000
  { "VALRNGLO",  0},  //0x6ffffd00
  //54
  { "CHECKSUM",  0},  //0x6ffffdf8
  { "PLTPADSZ",  0},  //0x6ffffdf9
  { "MOVEENT",  0},  //0x6ffffdfa
  { "MOVESZ",  0},  //0x6ffffdfb
  {"",0},
  { "POSFLAG_1",  0},  //0x6ffffdfd
  { "SYMINSZ",  0},  //0x6ffffdfe
  { "VALRNGHI",  0},   //0x6ffffdff
  //62
  { "ADDRRNGLO",  0},  //0x6ffffe00
  //63
  { "CONFIG",  1},//0x6ffffefa
  { "DEPAUDIT",  1},//0x6ffffefb
  { "AUDIT",  1},//0x6ffffefc
  { "PLTPAD",  1},//0x6ffffefd
  { "MOVETAB",  1},//0x6ffffefe
  { "ADDRRNGHI",  0},  //0x6ffffeff
  //69
  { "VERSYM",     1},  //0x6ffffff0
  //70
  { "RELACOUNT",  0},  //0x6ffffff9
  { "RELCOUNT",   0},  //0x6ffffffa
  { "FLAGS_1",    0},  //0x6ffffffb
  { "VERDEF",  1},     //0x6ffffffc
  { "VERDEFNUM",  0},  //0x6ffffffd
  { "VERNEED",   1},   //0x6ffffffe
  { "VERNEEDNUM",  0}, //0x6fffffff
  //77
  { "LOPROC",  0},//0x70000000
  { "SPARC_REGISTER",  0},//0x70000001
  { "AUXILIARY",  0},//0x7ffffffd
  { "USED",  0},//0x7ffffffe
  { "HIPROC",  0},//0x7fffffff

  { "GNU_HASH", 1}
};

char str_dynamic_type_flags[5][11] = {
  "ORIGIN",//0x1
  "SYMBOLIC",//0x2
  "TEXTREL",//0x4
  "BIND_NOW",//0x8
  "STATIC_TLS"//0x10
};

char str_dynamic_type_flags_1[14][10] = {
  "NOW", //0x1,
  "GLOBAL", //0x2,
  "GROUP", //0x4,
  "NODELETE", //0x8,
  "LOADFLTR", //0x10,
  "INITFIRST", //0x20,
  "NOOPEN", //0x40,
  "ORIGIN", //0x80,
  "DIRECT", //0x100,
  "TRANS", //0x200,
  "INTERPOSE", //0x400,
  "NODEFLIB", //0x800,
  "NODUMP", //0x1000,
  "CONLFAT" //0x2000
};

char str_note_type[5][17] = {
  "",
  "GNU_ABI_TAG",
  "GNU_HWCAP",
  "GNU_BUILD_ID",
  "GNU_GOLD_VERSION",
};

char str_note_type_os[6][13] = {
  "OS: LINUX",
  "OS: GNU",
  "OS: SOLARIS2",
  "OS: FREEBSD",
  "OS: NETBSD",
  "OS: SYLLABL"
};
