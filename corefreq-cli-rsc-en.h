/*
 * CoreFreq
 * Copyright (C) 2015-2021 CYRIL INGENIERIE
 * Licenses: GPL2
 */

#define RSC_COPY0_CODE_EN "      by CyrIng                                     "
#define RSC_COPY1_CODE_EN "                                                    "
#define RSC_COPY2_CODE_EN "            (C)2015-2021 CYRIL INGENIERIE           "

#define RSC_LAYOUT_LCD_RESET_CODE	"::::"

#define RSC_LAYOUT_HEADER_PROC_CODE_EN					\
{									\
	' ','P','r','o','c','e','s','s','o','r',' ','[' 		\
}

#define RSC_LAYOUT_HEADER_CPU_CODE_EN					\
{									\
	']',' ',' ',' ',' ','/',' ',' ',' ',' ','C','P','U'		\
}

#define RSC_LAYOUT_HEADER_ARCH_CODE_EN					\
{									\
	' ','A','r','c','h','i','t','e','c','t','u','r','e',' ','['	\
}

#define RSC_LAYOUT_HEADER_CACHE_L1_CODE_EN				\
{									\
	']',' ','C','a','c','h','e','s',' ',				\
	'L','1',' ','I','n','s','t','=',' ',' ',' ',			\
	'D','a','t','a','=',' ',' ',' ','K','B' 			\
}

#define RSC_LAYOUT_HEADER_BCLK_CODE_EN					\
{									\
	' ','B','a','s','e',' ','C','l','o','c','k',' ',		\
	'~',' ','0','0','0',',','0','0','0',',','0','0','0',' ','H','z' \
}

#define RSC_LAYOUT_HEADER_CACHES_CODE_EN				\
{									\
	'L','2','=',' ',' ',' ',' ',' ',' ',' ',			\
	'L','3','=',' ',' ',' ',' ',' ',' ','K','B'			\
}

#define RSC_LAYOUT_RULER_LOAD_CODE_EN					\
{									\
	'-','-','-',' ', '!',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-' \
}

#define RSC_LAYOUT_RULER_REL_LOAD_CODE_EN				\
{									\
	'R','e','l','a','t','i','v','e',' ','f','r','e','q','u','e','n',\
	'c','y' 							\
}

#define RSC_LAYOUT_RULER_ABS_LOAD_CODE_EN				\
{									\
	'A','b','s','o','l','u','t','e',' ','f','r','e','q','u','e','n',\
	'c','y' 							\
}

#define RSC_LAYOUT_MONITOR_FREQUENCY_CODE_EN				\
{									\
	' ',' ',' ',' ',' ',0x0,' ',' ',' ',0x0,' ',' ',0x0,' ',' ',0x0,\
	' ',' ',' ',' ',0x0,' ',' ',0x0,' ',' ',' ',' ',0x0,' ',' ',0x0,\
	' ',' ',' ',' ',0x0,' ',' ',0x0,' ',' ',' ',' ',0x0,' ',' ',0x0,\
	' ',' ',' ',' ',0x0,' ',' ',0x0,' ',' ',' ',' ',0x0,' ',' ',0x0,\
	' ',' ',' ',' ',' ',0x0,' ',' ',' ',0x0,' ',' ',' '		\
}

#define RSC_LAYOUT_MONITOR_INST_CODE_EN					\
{									\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',0x0,' ',' ',' ',' ',\
	' ',' ',0x0,0x0,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',0x0,' ',\
	' ',' ',' ',' ',' ',0x0,0x0,' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',0x0,' ',' ',' ',' ',' ',' ',0x0,0x0,' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '		\
}

#define RSC_LAYOUT_MONITOR_COMMON_CODE_EN				\
{									\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '		\
}

#define RSC_LAYOUT_MONITOR_TASKS_CODE_EN				\
{									\
	' ',' ',' ',' ',' ',0x0,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ' \
}

#define RSC_LAYOUT_MONITOR_SLICE_CODE_EN				\
{									\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '	\
}

#define RSC_LAYOUT_CUSTOM_FIELD_CODE_EN 				\
{									\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '		\
}

#define RSC_LAYOUT_RULER_FREQUENCY_CODE_EN				\
{									\
	'-','-','-',' ','F','r','e','q','(','M','H','z',')',' ','R','a',\
	't','i','o',' ','-',' ','T','u','r','b','o',' ','-','-',' ','C',\
	'0',' ','-','-','-','-',' ','C','1',' ','-','-',' ','C','2',':',\
	'C','3',' ','-',' ','C','4',':','C','6',' ','-','-','-',' ','C',\
	'7',' ','-','-',' ','M','i','n',' ','T','M','P',' ','M','a','x',\
	' ','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-' \
}

#define RSC_LAYOUT_RULER_FREQUENCY_AVG_CODE_EN				\
{									\
	'-','-','-','-','-','-',' ','%',' ','A','v','e','r','a','g','e',\
	's',' ','[',' ',' ',' ',' ',0x0,' ',' ',0x0,' ',' ',' ',' ',0x0,\
	' ',' ',0x0,' ',' ',' ',' ',0x0,' ',' ',0x0,' ',' ',' ',' ',0x0,\
	' ',' ',0x0,' ',' ',' ',' ',0x0,' ',' ',0x0,' ',' ',' ',' ',0x0,\
	' ',' ',0x0,' ',']','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-' \
}

#define RSC_LAYOUT_RULER_FREQUENCY_PKG_CODE_EN				\
{									\
	'%',' ','P','k','g',' ','[',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',']',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-' \
}

#define RSC_LAYOUT_RULER_INST_CODE_EN					\
{									\
	'-','-','-','-','-','-','-','-','-','-','-','-',' ','I','P','S',\
	' ','-','-','-','-','-','-','-','-','-','-','-','-','-','-',' ',\
	'I','P','C',' ','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-',' ','C','P','I',' ','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-',' ','I','N','S','T',' ','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-' \
}

#define RSC_LAYOUT_RULER_CYCLES_CODE_EN 				\
{									\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-',' ','C',\
	'0',':','U','C','C',' ','-','-','-','-','-','-','-','-','-','-',\
	' ','C','0',':','U','R','C',' ','-','-','-','-','-','-','-','-',\
	'-','-','-','-',' ','C','1',' ','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-',' ','T','S','C',' ','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-' \
}

#define RSC_LAYOUT_RULER_CSTATES_CODE_EN				\
{									\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	' ','C','1',' ','-','-','-','-','-','-','-','-','-','-','-','-',\
	' ','C','2',':','C','3',' ','-','-','-','-','-','-','-','-','-',\
	'-','-',' ','C','4',':','C','6',' ','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-',' ','C','7',' ','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-' \
}

#define RSC_LAYOUT_RULER_INTERRUPTS_CODE_EN				\
{									\
	'-','-','-','-','-','-','-','-','-','-',' ','S','M','I',' ','-',\
	'-','-','-','-','-','-','-','-','-','-','-',' ','N','M','I','[',\
	' ','L','O','C','A','L',' ',' ',' ','U','N','K','N','O','W','N',\
	' ',' ','P','C','I','_','S','E','R','R','#',' ',' ','I','O','_',\
	'C','H','E','C','K',']',' ','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',\
	'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-' \
}

#define RSC_LAYOUT_RULER_PACKAGE_CODE_EN				\
	"------------ Cycles ---- State -------------------- TSC Rati"	\
	"o ----------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"--------------------"

#define RSC_LAYOUT_RULER_TASKS_CODE_EN					\
	"--- Freq(MHz) --- Tasks                    -----------------"	\
	"------------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"--------------------"

#define RSC_LAYOUT_PACKAGE_PC_CODE_EN					\
{									\
	' ',' ','0','0',':',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ' \
}

#define RSC_LAYOUT_PACKAGE_PC02_CODE_EN {'P', 'C', '0', '2'}
#define RSC_LAYOUT_PACKAGE_PC03_CODE_EN {'P', 'C', '0', '3'}
#define RSC_LAYOUT_PACKAGE_PC04_CODE_EN {'P', 'C', '0', '4'}
#define RSC_LAYOUT_PACKAGE_PC06_CODE_EN {'P', 'C', '0', '6'}
#define RSC_LAYOUT_PACKAGE_PC07_CODE_EN {'P', 'C', '0', '7'}
#define RSC_LAYOUT_PACKAGE_PC08_CODE_EN {'P', 'C', '0', '8'}
#define RSC_LAYOUT_PACKAGE_PC09_CODE_EN {'P', 'C', '0', '9'}
#define RSC_LAYOUT_PACKAGE_PC10_CODE_EN {'P', 'C', '1', '0'}
#define RSC_LAYOUT_PACKAGE_MC06_CODE_EN {'M', 'C', '0', '6'}

#define RSC_LAYOUT_PACKAGE_UNCORE_CODE_EN				\
{									\
	' ','T','S','C',':',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ','U','N','C','O','R','E',':',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',\
	' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ' \
}

#define RSC_LAYOUT_TASKS_STATE_SORTED_CODE_EN				\
{									\
	'(','s','o','r','t','e','d',' ', 'b','y',			\
	' ','S','t','a','t','e',')',' ', '-','-','-'			\
}

#define RSC_LAYOUT_TASKS_RUNTIME_SORTED_CODE_EN 			\
{									\
	'(','s','o','r','t','e','d',' ', 'b','y',			\
	' ','R','u','n','T','i','m','e', ')',' ','-'			\
}

#define RSC_LAYOUT_TASKS_USRTIME_SORTED_CODE_EN 			\
{									\
	'(','s','o','r','t','e','d',' ', 'b','y',			\
	' ','U','s','e','r','T','i','m', 'e',')',' '			\
}

#define RSC_LAYOUT_TASKS_SYSTIME_SORTED_CODE_EN 			\
{									\
	'(','s','o','r','t','e','d',' ', 'b','y',			\
	' ','S','y','s','T','i','m','e', ')',' ','-'			\
}

#define RSC_LAYOUT_TASKS_PROCESS_SORTED_CODE_EN 			\
{									\
	'(','s','o','r','t','e','d',' ', 'b','y',			\
	' ','P','I','D',')',' ','-','-', '-','-','-'			\
}

#define RSC_LAYOUT_TASKS_COMMAND_SORTED_CODE_EN 			\
{									\
	'(','s','o','r','t','e','d',' ', 'b','y',			\
	' ','C','o','m','m','a','n','d', ')',' ','-'			\
}

#define RSC_LAYOUT_TASKS_REVERSE_SORT_OFF_CODE_EN			\
{									\
	' ', 'I','n','v','e','r','s','e',' ','[','O','F','F',']',' '	\
}

#define RSC_LAYOUT_TASKS_REVERSE_SORT_ON_CODE_EN			\
{									\
	' ', 'I','n','v','e','r','s','e',' ','[',' ','O','N',']',' '	\
}

#define RSC_LAYOUT_TASKS_VALUE_SWITCH_CODE_EN				\
{									\
	' ', 'V','a','l','u','e',' ','[',' ',' ',' ',']',' '		\
}

#define RSC_LAYOUT_TASKS_VALUE_OFF_CODE_EN				\
{									\
	'O','F','F'							\
}

#define RSC_LAYOUT_TASKS_VALUE_ON_CODE_EN				\
{									\
	' ','O','N'							\
}

#define RSC_LAYOUT_TASKS_TRACKING_CODE_EN				\
{									\
	' ','T','r','a','c','k','i', 'n','g',' ','P','I','D',' ','[',' ',\
	' ','O','F','F',' ',' ',']',' ' 				\
}

#define RSC_LAYOUT_RULER_SENSORS_CODE_EN				\
	"--- Freq(MHz) --- Vcore --- TMP( ) --- Energy(J) --- Power(W"	\
	") ----------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"--------------------"

#define RSC_LAYOUT_RULER_PWR_UNCORE_CODE_EN				\
	"-RAM:   .    ( ) - Uncore:   .    ( ) - Package:   .    ( ) "	\
	"- Cores:   .    ( )-----------------------------------------"	\
	"------------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"--------------------"

#define RSC_LAYOUT_RULER_PWR_SOC_CODE_EN				\
	"-RAM:   .    ( ) --- SoC :   .    ( ) - Package:   .    ( ) "	\
	"- Cores:   .    ( )-----------------------------------------"	\
	"------------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"--------------------"

#define RSC_LAYOUT_RULER_PWR_PLATFORM_CODE_EN				\
	"-RAM:   .    ( ) Platform:   .    ( ) - Package:   .    ( ) "	\
	"- Cores:   .    ( )-----------------------------------------"	\
	"------------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"--------------------"

#define RSC_LAYOUT_RULER_VOLTAGE_CODE_EN				\
	"--- Freq(MHz) - VID --- Min(V) - Vcore -- Max(V) -----------"	\
	"------------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"--------------------"

#define RSC_LAYOUT_RULER_VPKG_SOC_CODE_EN				\
	"- Processor[                                    ] ----- SoC "	\
	"[       ] [      V]-----------------------------------------"	\
	"------------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"--------------------"

#define RSC_LAYOUT_RULER_ENERGY_CODE_EN 				\
	"--- Freq(MHz) -- Accumulator -------- Min ------ Energy(J) -"	\
	"- Max ------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"--------------------"

#define RSC_LAYOUT_RULER_POWER_CODE_EN					\
	"--- Freq(MHz) -- Accumulator -------- Min ------- Power(W) -"	\
	"- Max ------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"--------------------"

#define RSC_LAYOUT_RULER_SLICE_CODE_EN					\
	"--- Freq(MHz) ------ Cycles -- Instructions ------------ TSC"	\
	" ------------ PMC0 ----------- Error -----------------------"	\
	"------------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"--------------------"

#define RSC_LAYOUT_RULER_CUSTOM_CODE_EN 				\
	"----- Min - Relative - Max ---- Min - Absolute - Max - Min T"	\
	"MP Max - Min(V) - Vcore - Max(V) - Min( ) - Power -- Max( ) "	\
	"- Turbo -- C0 -- C1 -- C2:C3  C4:C6 -- C7 --- IPS ----- IPC "	\
	"----- CPI --------------------------------------------------"	\
	"------------------------------------------------------------"	\
	"--------------------"

#define RSC_LAYOUT_FOOTER_TECH_X86_CODE_EN				\
{									\
	'T','e','c','h',' ','[',' ',' ','T','S','C',' ',' ',',' 	\
}

#define RSC_LAYOUT_FOOTER_TECH_INTEL_CODE_EN				\
{									\
	'H','T','T',',','E','I','S','T',',','I','D','A',',',		\
	'T','U','R','B','O',',','C','1','E',',',			\
	' ','P','M',',','C','3','A',',','C','1','A',',',		\
	'C','3','U',',','C','1','U',',',				\
	'T','M',',','H','O','T',']',' ' 				\
}

#define RSC_LAYOUT_FOOTER_TECH_AMD_CODE_EN				\
{									\
	'S','M','T',',','C','n','Q',',','H','W','P',',',		\
	'B','O','O','S','T',',','C','1','E',',','C','C','6',		\
	',','P','C','6',',','C','C','x',',','D','T','S',',',		\
	'T','M',',','H','O','T',']',' ',' ',' ',' ',' ',' '		\
}

#define RSC_LAYOUT_FOOTER_VOLT_TEMP_CODE_EN				\
{									\
	'V','[',' ','.',' ',' ',']',' ','T','[',' ',' ',' ',' ',']'	\
}

#define RSC_LAYOUT_FOOTER_SYSTEM_CODE_EN				\
{									\
	'T','a','s','k','s',' ','[',' ',' ',' ',' ',' ',' ',']',	\
	' ','M','e','m',' ','[',' ',' ',' ',' ',' ',' ',' ',' ',	\
	' ','/',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','B',']' 	\
}

#define RSC_LAYOUT_FOOTER_TSC_NONE_CODE "  TSC  "
#define RSC_LAYOUT_FOOTER_TSC_VAR_CODE	"TSC-VAR"
#define RSC_LAYOUT_FOOTER_TSC_INV_CODE	"TSC-INV"

#define RSC_LAYOUT_CARD_CORE_ONLINE_COND0_CODE_EN			\
{									\
	'[',' ',' ',' ',' ',' ',' ',' ',' ','C',' ',']' 		\
}

#define RSC_LAYOUT_CARD_CORE_ONLINE_COND1_CODE_EN			\
{									\
	'[',' ',' ',' ',' ',' ',' ',' ',' ','F',' ',']' 		\
}

#define RSC_LAYOUT_CARD_CORE_OFFLINE_CODE_EN				\
{									\
	'[',' ',' ',' ',' ',' ',' ','O','F','F',' ',']' 		\
}

#define RSC_LAYOUT_CARD_CLK_CODE_EN					\
{									\
	'[',' ','0','0','0','.','0',' ','M','H','z',']' 		\
}

#define RSC_LAYOUT_CARD_UNCORE_CODE_EN					\
{									\
	'[','U','N','C','O','R','E',' ',' ',' ',' ',']' 		\
}

#define RSC_LAYOUT_CARD_BUS_CODE_EN					\
{									\
	'[','B','u','s',' ',' ',' ',' ',' ',' ',' ',']' 		\
}

#define RSC_LAYOUT_CARD_MC_CODE_EN					\
{									\
	'[',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',']' 		\
}

#define RSC_LAYOUT_CARD_LOAD_CODE_EN					\
{									\
	'[',' ',' ','%','L','O','A','D',' ',' ',' ',']' 		\
}

#define RSC_LAYOUT_CARD_IDLE_CODE_EN					\
{									\
	'[',' ',' ','%','I','D','L','E',' ',' ',' ',']' 		\
}

#define RSC_LAYOUT_CARD_RAM_CODE_EN					\
{									\
	'[',' ',' ',' ',' ',' ',' ','/',' ',' ',' ',']' 		\
}

#define RSC_LAYOUT_CARD_TASK_CODE_EN					\
{									\
	'[','T','a','s','k','s',' ',' ',' ',' ',' ',']' 		\
}

#define RSC_CREATE_HOTPLUG_CPU_TITLE_CODE	" CPU "
#define RSC_CREATE_HOTPLUG_CPU_ENABLE_CODE_EN	"<   ENABLE >"
#define RSC_CREATE_HOTPLUG_CPU_DISABLE_CODE_EN	"<  DISABLE >"
#define RSC_CREATE_HOTPLUG_CPU_ONLINE_CODE_EN	" %03u   On   "
#define RSC_CREATE_HOTPLUG_CPU_OFFLINE_CODE_EN	" %03u  Off   "

#define RSC_COREFREQ_TITLE_CODE 	" CoreFreq "
#define RSC_PROCESSOR_TITLE_CODE_EN	" Processor "
#define RSC_PROCESSOR_CODE_EN		"Processor"
#define RSC_ARCHITECTURE_CODE_EN	"Architecture"
#define RSC_VENDOR_ID_CODE_EN		"Vendor ID"
#define RSC_MICROCODE_CODE_EN		"Microcode"
#define RSC_SIGNATURE_CODE_EN		"Signature"
#define RSC_STEPPING_CODE_EN		"Stepping"
#define RSC_ONLINE_CPU_CODE_EN		"Online CPU"
#define RSC_BASE_CLOCK_CODE_EN		"Base Clock"
#define RSC_FREQUENCY_CODE_EN		"Frequency"
#define RSC_RATIO_CODE_EN		"Ratio"
#define RSC_FACTORY_CODE_EN		"Factory"
#define RSC_PERFORMANCE_CODE_EN 	"Performance"
#define RSC_TARGET_CODE_EN		"Target"
#define RSC_LEVEL_CODE_EN		"Level"
#define RSC_PROGRAMMABLE_CODE_EN	"Programmable"
#define RSC_CONFIGURATION_CODE_EN	"Configuration"
#define RSC_TURBO_ACTIVATION_CODE_EN	"Turbo Activation"
#define RSC_NOMINAL_CODE_EN		"Nominal"
#define RSC_UNLOCK_CODE_EN		"UNLOCK"
#define RSC_LOCK_CODE_EN		"  LOCK"
#define RSC_ENABLE_CODE_EN		" Enable"
#define RSC_DISABLE_CODE_EN		"Disable"
#define RSC_CAPABILITIES_CODE_EN	"Capabilities"
#define RSC_LOWEST_CODE_EN		"Lowest"
#define RSC_EFFICIENT_CODE_EN		"Efficient"
#define RSC_GUARANTEED_CODE_EN		"Guaranteed"
#define RSC_HIGHEST_CODE_EN		"Highest"
#define RSC_RECORDER_CODE_EN		"Recorder"
#define RSC_STRESS_CODE_EN		"Stress"
#define RSC_SYSGATE_CODE		"SysGate"

#define RSC_SCOPE_NONE_CODE_EN		"None"
#define RSC_SCOPE_THREAD_CODE_EN	" SMT"
#define RSC_SCOPE_CORE_CODE_EN		"Core"
#define RSC_SCOPE_PACKAGE_CODE_EN	" Pkg"

#define RSC_CPUID_TITLE_CODE_EN 	\
	" function           EAX          EBX          ECX          EDX "

#define RSC_LARGEST_STD_FUNC_CODE_EN	"Largest Standard Function"
#define RSC_LARGEST_EXT_FUNC_CODE_EN	"Largest Extended Function"

#define RSC_SYS_REGS_TITLE_CODE_EN	" System Registers "
#define RSC_SYS_REG_FLAGS_TF_CODE_EN	" Trap Flag "
#define RSC_SYS_REG_FLAGS_IF_CODE_EN	" Interrupt Flag "
#define RSC_SYS_REG_FLAGS_IOPL_CODE_EN	" I/O Privilege Level "
#define RSC_SYS_REG_FLAGS_NT_CODE_EN	" Nested Task "
#define RSC_SYS_REG_FLAGS_RF_CODE_EN	" Resume Flag "
#define RSC_SYS_REG_FLAGS_VM_CODE_EN	" Virtual-8086 Mode "
#define RSC_SYS_REG_FLAGS_AC_CODE_EN	" Alignment Check "
#define RSC_SYS_REG_FLAGS_VIF_CODE_EN	" Virtual Interrupt Flag "
#define RSC_SYS_REG_FLAGS_VIP_CODE_EN	" Virtual Interrupt Pending "
#define RSC_SYS_REG_FLAGS_ID_CODE_EN	" Identification "
#define RSC_SYS_REGS_CR0_CODE_EN	" Control Register 0 "
#define RSC_SYS_REG_CR0_PE_CODE_EN	" Protection Enable "
#define RSC_SYS_REG_CR0_MP_CODE_EN	" Monitor Coprocessor "
#define RSC_SYS_REG_CR0_EM_CODE_EN	" FPU Emulation "
#define RSC_SYS_REG_CR0_TS_CODE_EN	" Task Switched "
#define RSC_SYS_REG_CR0_ET_CODE_EN	" Extension Type "
#define RSC_SYS_REG_CR0_NE_CODE_EN	" Numeric Exception "
#define RSC_SYS_REG_CR0_WP_CODE_EN	" Write Protect "
#define RSC_SYS_REG_CR0_AM_CODE_EN	" Alignment Mask "
#define RSC_SYS_REG_CR0_NW_CODE_EN	" Not Write-through "
#define RSC_SYS_REG_CR0_CD_CODE_EN	" Cache Disable "
#define RSC_SYS_REG_CR0_PG_CODE_EN	" Paging enable "
#define RSC_SYS_REGS_CR3_CODE_EN	" Control Register 3 "
#define RSC_SYS_REG_CR3_PWT_CODE_EN	" Page-level Write-Through "
#define RSC_SYS_REG_CR3_PCD_CODE_EN	" Page-level Cache Disable "
#define RSC_SYS_REGS_CR4_CODE_EN	" Control Register 4 "
#define RSC_SYS_REG_CR4_VME_CODE_EN	" Virtual-8086 Mode Extensions "
#define RSC_SYS_REG_CR4_PVI_CODE_EN	" Protected-mode Virtual Interrupts "
#define RSC_SYS_REG_CR4_TSD_CODE_EN	" Time-Stamp Disable "
#define RSC_SYS_REG_CR4_DE_CODE_EN	" Debugging Extensions "
#define RSC_SYS_REG_CR4_PSE_CODE_EN	" Page Size Extension "
#define RSC_SYS_REG_CR4_PAE_CODE_EN	" Physical Address Extension "
#define RSC_SYS_REG_CR4_MCE_CODE_EN	" Machine-Check Enable "
#define RSC_SYS_REG_CR4_PGE_CODE_EN	" Page Global Enable "
#define RSC_SYS_REG_CR4_PCE_CODE_EN	" Performance Counter Enable "
#define RSC_SYS_REG_CR4_FX_CODE_EN	" OS Support for FXSAVE and FXRSTOR "
#define RSC_SYS_REG_CR4_XMM_CODE_EN   " OS Support for Unmasked SSE Exceptions "
#define RSC_SYS_REG_CR4_UMIP_CODE_EN	" User-Mode Instruction Prevention "
#define RSC_SYS_REG_CR4_5LP_CODE_EN " 57-bit Linear Addresses - 5-level paging "
#define RSC_SYS_REG_CR4_VMX_CODE_EN	" Virtual Machine eXtension Enable "
#define RSC_SYS_REG_CR4_SMX_CODE_EN	" Safer Mode eXtension Enable "
#define RSC_SYS_REG_CR4_FS_CODE_EN    " FS and GS base read/write instructions "
#define RSC_SYS_REG_CR4_PCID_CODE_EN	" Process-Context Identifiers Enable "
#define RSC_SYS_REG_CR4_SAV_CODE_EN	" XSAVE and Processor Extended States "
#define RSC_SYS_REG_CR4_KL_CODE_EN	" Key-Locker Enable "
#define RSC_SYS_REG_CR4_SME_CODE_EN	" Supervisor-Mode Execution Prevention "
#define RSC_SYS_REG_CR4_SMA_CODE_EN	" Supervisor-Mode Access Prevention "
#define RSC_SYS_REG_CR4_PKE_CODE_EN	" Protection Keys for user-mode pages "
#define RSC_SYS_REG_CR4_CET_CODE_EN	" Control-flow Enforcement Technology "

#define RSC_SYS_REG_CR4_PKS_CODE_EN	\
				" Protection Keys for Supervisor-mode pages "

#define RSC_SYS_REGS_CR8_CODE_EN	" Control Register 8 "
#define RSC_SYS_REG_CR8_TPL_CODE_EN	" Task Priority Level "
#define RSC_SYS_REGS_EFCR_CODE_EN	" Feature Control Bits Register "
#define RSC_SYS_REG_EFCR_LCK_CODE_EN	" Lock bit "
#define RSC_SYS_REG_EFCR_VMX_CODE_EN	" VMX Inside SMX Operation "
#define RSC_SYS_REG_EFCR_SGX_CODE_EN	" VMX Outside SMX Operation "
#define RSC_SYS_REG_EFCR_LSE_CODE_EN	" SENTER Local Functions "
#define RSC_SYS_REG_EFCR_GSE_CODE_EN	" SENTER Global Functions "
#define RSC_SYS_REG_EFCR_LSGX_CODE_EN	" SGX Launch Control "
#define RSC_SYS_REG_EFCR_GSGX_CODE_EN	" SGX Global Functions "
#define RSC_SYS_REG_EFCR_LMC_CODE_EN	" Local Machine Check "
#define RSC_SYS_REGS_EFER_CODE_EN	" Extended-Feature-Enable Register "
#define RSC_SYS_REG_EFER_SCE_CODE_EN	" System-Call Extension "
#define RSC_SYS_REG_EFER_LME_CODE_EN	" Long Mode Enable "
#define RSC_SYS_REG_EFER_LMA_CODE_EN	" Long Mode Active "
#define RSC_SYS_REG_EFER_NXE_CODE_EN	" Execute-Disable Bit Enable "
#define RSC_SYS_REG_EFER_SVM_CODE_EN	" Secure Virtual Machine Enable "
#define RSC_SYS_REG_EFER_LMS_CODE_EN	" Long Mode Segment Limit Enable "
#define RSC_SYS_REG_EFER_FFX_CODE_EN	" Fast FXSAVE/FRSTOR Enable "
#define RSC_SYS_REG_EFER_TCE_CODE_EN	" Translation Cache Extension Enable "
#define RSC_SYS_REG_EFER_MCM_CODE_EN	" MCOMMIT Memory Commit Instruction "
#define RSC_SYS_REG_EFER_WBI_CODE_EN	" Interruptible WBINVD, WBNOINVD "

#define RSC_ISA_TITLE_CODE_EN		" Instruction Set Extensions "

#define RSC_ISA_3DNOW_COMM_CODE_EN	\
			" AMD 3DNow! SIMD instructions / 3DNow! Extensions "

#define RSC_ISA_ADX_COMM_CODE_EN	" Multi-Precision Add-Carry "
#define RSC_ISA_AES_COMM_CODE_EN	" Advanced Encryption Standard "
#define RSC_ISA_AVX_COMM_CODE_EN	" Advanced Vector Extensions "
#define RSC_ISA_BMI_COMM_CODE_EN	" Bit Manipulation Instructions "
#define RSC_ISA_CLWB_COMM_CODE_EN	" Cache Line Write Back "
#define RSC_ISA_CLFLUSH_COMM_CODE_EN	" Flush Cache Line / CLFLUSH Optimized "

#define RSC_ISA_AC_FLAG_COMM_CODE_EN	\
				" Clear AC - Set AC Flag in EFLAGS Register "

#define RSC_ISA_CMOV_COMM_CODE_EN	" Conditional Move instructions "
#define RSC_ISA_XCHG8B_COMM_CODE_EN	" Compare and Exchange 8 Bytes "
#define RSC_ISA_XCHG16B_COMM_CODE_EN	" Compare and Exchange 16 Bytes "

#define RSC_ISA_F16C_COMM_CODE_EN	\
			" 16-bit floating-point conversion instructions "

#define RSC_ISA_FPU_COMM_CODE_EN	" Floating Point Unit On-Chip "
#define RSC_ISA_FXSR_COMM_CODE_EN	" FXSAVE and FXRSTOR instructions "

#define RSC_ISA_LSHF_COMM_CODE_EN	\
				" Load-Store Status Flags into AH register "

#define RSC_ISA_MMX_COMM_CODE_EN	" MultiMedia eXtensions / Extended MMX "
#define RSC_ISA_MWAITX_COMM_CODE_EN	" Monitor Wait / MWAIT eXtensions "
#define RSC_ISA_MOVBE_COMM_CODE_EN	" Move Data After Swapping Bytes "
#define RSC_ISA_PCLMULDQ_COMM_CODE_EN	" Carryless Multiplication Quadword "
#define RSC_ISA_POPCNT_COMM_CODE_EN	" Count of Number of Bits Set to 1 "
#define RSC_ISA_RDRAND_COMM_CODE_EN	" Read Random Number "
#define RSC_ISA_RDSEED_COMM_CODE_EN	" Read Random SEED "
#define RSC_ISA_RDTSCP_COMM_CODE_EN	\
				" Read Time-Stamp Counter and Processor ID "
#define RSC_ISA_SEP_COMM_CODE_EN	" SYSENTER and SYSEXIT instructions "
#define RSC_ISA_SHA_COMM_CODE_EN	" Secure Hash Algorithms extensions "
#define RSC_ISA_SSE_COMM_CODE_EN	" Streaming SIMD Extensions "
#define RSC_ISA_SSE2_COMM_CODE_EN	" Streaming SIMD Extensions 2 "
#define RSC_ISA_SSE3_COMM_CODE_EN	" Streaming SIMD Extensions 3 "

#define RSC_ISA_SSSE3_COMM_CODE_EN	\
				" Supplemental Streaming SIMD Extensions 3 "

#define RSC_ISA_SSE4_1_COMM_CODE_EN	\
				" Streaming SIMD Extensions 4.1 / AMD SSE 4A "

#define RSC_ISA_SSE4_2_COMM_CODE_EN	" Streaming SIMD Extensions 4.2 "
#define RSC_ISA_SERIALIZE_COMM_CODE_EN	" Serialize instruction "

#define RSC_ISA_SYSCALL_COMM_CODE_EN	\
			" Fast System Call and SYSRET - Return From SYSCALL "

#define RSC_ISA_RDPID_COMM_CODE_EN	" Read Processor ID "
#define RSC_ISA_UMIP_COMM_CODE_EN	" User Mode Instruction Prevention "
#define RSC_ISA_SGX_COMM_CODE_EN	" Intel Software Guard eXtensions "

#define RSC_FEATURES_TITLE_CODE_EN	" Features "
#define RSC_NOT_AVAILABLE_CODE_EN	"N/A"
#define RSC_AUTOMATIC_CODE_EN		"AUTO"
#define RSC_MISSING_CODE_EN		"Missing"
#define RSC_PRESENT_CODE_EN		"Capable"
#define RSC_VARIANT_CODE_EN		"Variant"
#define RSC_INVARIANT_CODE_EN		"Invariant"
#define RSC_FEATURES_1GB_PAGES_CODE_EN	"1 GB Pages Support"
#define RSC_FEATURES_100MHZ_CODE_EN	"100 MHz multiplier Control"
#define RSC_FEATURES_ACPI_CODE_EN   "Advanced Configuration & Power Interface"
#define RSC_FEATURES_APIC_CODE_EN   "Advanced Programmable Interrupt Controller"
#define RSC_FEATURES_ARAT_CODE_EN	"APIC Timer Invariance"
#define RSC_FEATURES_CORE_MP_CODE_EN	"Core Multi-Processing"
#define RSC_FEATURES_CNXT_ID_CODE_EN	"L1 Data Cache Context ID"
#define RSC_FEATURES_CPPC_CODE_EN	\
				"Collaborative Processor Performance Control"

#define RSC_FEATURES_DCA_CODE_EN	"Direct Cache Access"
#define RSC_FEATURES_DE_CODE_EN 	"Debugging Extension"

#define RSC_FEATURES_DS_PEBS_CODE_EN	\
				"Debug Store & Precise Event Based Sampling"

#define RSC_FEATURES_DS_CPL_CODE_EN	"CPL Qualified Debug Store"
#define RSC_FEATURES_DTES_64_CODE_EN	"64-Bit Debug Store"
#define RSC_FEATURES_FAST_STR_CODE_EN	"Fast-String Operation"
#define RSC_FEATURES_FMA_CODE_EN	"Fused Multiply Add"
#define RSC_FEATURES_HLE_CODE_EN	"Hardware Lock Elision"
#define RSC_FEATURES_IBS_CODE_EN	"Instruction Based Sampling"
#define RSC_FEATURES_INVLPGB_CODE_EN	"Instruction INVLPGB"
#define RSC_FEATURES_INVPCID_CODE_EN	"Instruction INVPCID"
#define RSC_FEATURES_LM_CODE_EN 	"Long Mode 64 bits"
#define RSC_FEATURES_LWP_CODE_EN	"LightWeight Profiling"
#define RSC_FEATURES_MBE_CODE_EN	"Memory Bandwidth Enforcement"
#define RSC_FEATURES_MCA_CODE_EN	"Machine-Check Architecture"
#define RSC_FEATURES_MCOMMIT_CODE_EN	"Instruction MCOMMIT"
#define RSC_FEATURES_MPX_CODE_EN	"Memory Protection Extensions"
#define RSC_FEATURES_MSR_CODE_EN	"Model Specific Registers"
#define RSC_FEATURES_MTRR_CODE_EN	"Memory Type Range Registers"
#define RSC_FEATURES_NX_CODE_EN 	"No-Execute Page Protection"
#define RSC_FEATURES_OSXSAVE_CODE_EN	"OS-Enabled Ext. State Management"
#define RSC_FEATURES_PAE_CODE_EN	"Physical Address Extension"
#define RSC_FEATURES_PAT_CODE_EN	"Page Attribute Table"
#define RSC_FEATURES_PBE_CODE_EN	"Pending Break Enable"
#define RSC_FEATURES_PCID_CODE_EN	"Process Context Identifiers"
#define RSC_FEATURES_PDCM_CODE_EN	"Perfmon and Debug Capability"
#define RSC_FEATURES_PGE_CODE_EN	"Page Global Enable"
#define RSC_FEATURES_PSE_CODE_EN	"Page Size Extension"
#define RSC_FEATURES_PSE36_CODE_EN	"36-bit Page Size Extension"
#define RSC_FEATURES_PSN_CODE_EN	"Processor Serial Number"
#define RSC_FEATURES_RDT_PQE_CODE_EN	"Resource Director Technology/PQE"
#define RSC_FEATURES_RDT_PQM_CODE_EN	"Resource Director Technology/PQM"
#define RSC_FEATURES_RDPRU_CODE_EN	"Read Processor Register at User level"
#define RSC_FEATURES_RTM_CODE_EN	"Restricted Transactional Memory"
#define RSC_FEATURES_SMX_CODE_EN	"Safer Mode Extensions"
#define RSC_FEATURES_SELF_SNOOP_CODE_EN "Self-Snoop"
#define RSC_FEATURES_SMAP_CODE_EN	"Supervisor-Mode Access Prevention"
#define RSC_FEATURES_SMEP_CODE_EN	"Supervisor-Mode Execution Prevention"
#define RSC_FEATURES_TSC_CODE_EN	"Time Stamp Counter"
#define RSC_FEATURES_TSC_DEADLN_CODE_EN "Time Stamp Counter Deadline"
#define RSC_FEATURES_TSXABORT_CODE_EN	"TSX Force Abort MSR Register"
#define RSC_FEATURES_TSXLDTRK_CODE_EN	"TSX Suspend Load Address Tracking"
#define RSC_FEATURES_UMIP_CODE_EN	"User-Mode Instruction Prevention"
#define RSC_FEATURES_VME_CODE_EN	"Virtual Mode Extension"
#define RSC_FEATURES_VMX_CODE_EN	"Virtual Machine Extensions"
#define RSC_FEATURES_X2APIC_CODE_EN	"Extended xAPIC Support"
#define RSC_FEATURES_XD_BIT_CODE_EN	"Execution Disable Bit Support"
#define RSC_FEATURES_XSAVE_CODE_EN	"XSAVE/XSTOR States"
#define RSC_FEATURES_XTPR_CODE_EN	"xTPR Update Control"
#define RSC_FEAT_SECTION_MECH_CODE_EN	"Mitigation mechanisms"

#define RSC_TECHNOLOGIES_TITLE_CODE_EN	" Technologies "
#define RSC_TECHNOLOGIES_DCU_CODE_EN	"Data Cache Unit"
#define RSC_TECH_L1_HW_PREFETCH_CODE_EN "L1 Prefetcher"
#define RSC_TECH_L1_HW_IP_PREFETCH_CODE_EN "L1 IP Prefetcher"
#define RSC_TECH_L2_HW_PREFETCH_CODE_EN "L2 Prefetcher"
#define RSC_TECH_L2_HW_CL_PREFETCH_CODE_EN "L2 Line Prefetcher"
#define RSC_TECHNOLOGIES_SMM_CODE_EN	"System Management Mode"
#define RSC_TECHNOLOGIES_HTT_CODE_EN	"Hyper-Threading"
#define RSC_TECHNOLOGIES_EIST_CODE_EN	"SpeedStep"
#define RSC_TECHNOLOGIES_IDA_CODE_EN	"Dynamic Acceleration"
#define RSC_TECHNOLOGIES_TURBO_CODE_EN	"Turbo Boost"
#define RSC_TECHNOLOGIES_TBMT3_CODE_EN	"Turbo Boost Max 3.0"
#define RSC_TECHNOLOGIES_VM_CODE_EN	"Virtualization"
#define RSC_TECHNOLOGIES_IOMMU_CODE_EN	"I/O MMU"
#define RSC_TECHNOLOGIES_SMT_CODE_EN	"Simultaneous Multithreading"
#define RSC_TECHNOLOGIES_CNQ_CODE_EN	"PowerNow!"
#define RSC_TECHNOLOGIES_CPB_CODE_EN	"Core Performance Boost"
#define RSC_TECHNOLOGIES_EEO_CODE_EN	"Energy Efficiency Optimization"
#define RSC_TECHNOLOGIES_R2H_CODE_EN	"Race To Halt Optimization"
#define RSC_TECHNOLOGIES_HYPERV_CODE_EN "Hypervisor"
#define RSC_TECHNOLOGIES_WDT_CODE_EN	"Watchdog Timer"

#define RSC_PERF_MON_TITLE_CODE_EN	" Performance Monitoring "
#define RSC_VERSION_CODE_EN		"Version"
#define RSC_COUNTERS_CODE_EN		"Counters"
#define RSC_GENERAL_CTRS_CODE_EN	"General"
#define RSC_FIXED_CTRS_CODE_EN		"Fixed"
#define RSC_PERF_MON_UNIT_BIT_CODE_EN	"bits"
#define RSC_PERF_MON_UNIT_HWP_CODE_EN	"(MHz)"
#define RSC_PERF_MON_C1E_CODE_EN	"Enhanced Halt State"
#define RSC_PERF_MON_C1A_CODE_EN	"C1 Auto Demotion"
#define RSC_PERF_MON_C3A_CODE_EN	"C3 Auto Demotion"
#define RSC_PERF_MON_C1U_CODE_EN	"C1 UnDemotion"
#define RSC_PERF_MON_C2U_CODE_EN	"C2 UnDemotion"
#define RSC_PERF_MON_C3U_CODE_EN	"C3 UnDemotion"
#define RSC_PERF_MON_C6D_CODE_EN	"C6 Core Demotion"
#define RSC_PERF_MON_MC6_CODE_EN	"C6 Module Demotion"
#define RSC_PERF_MON_CC6_CODE_EN	"Core C6 State"
#define RSC_PERF_MON_PC6_CODE_EN	"Package C6 State"
#define RSC_PERF_MON_FID_CODE_EN	"Legacy Frequency ID control"
#define RSC_PERF_MON_VID_CODE_EN	"Legacy Voltage ID control"
#define RSC_PERF_MON_HWCF_CODE_EN	"P-State Hardware Coordination Feedback"
#define RSC_PERF_MON_HWP_CODE_EN	"Hardware-Controlled Performance States"
#define RSC_PERF_MON_HDC_CODE_EN	"Hardware Duty Cycling"
#define RSC_PERF_MON_PKG_CSTATE_CODE_EN "Package C-States"
#define RSC_PERF_MON_CORE_CSTATE_CODE_EN "Core C-States"
#define RSC_PERF_MON_CFG_CTRL_CODE_EN	"Configuration Control"
#define RSC_PERF_MON_LOW_CSTATE_CODE_EN "Lowest C-State"
#define RSC_PERF_MON_IOMWAIT_CODE_EN	"I/O MWAIT Redirection"
#define RSC_PERF_MON_MAX_CSTATE_CODE_EN "Max C-State Inclusion"
#define RSC_PERF_MON_CSTATE_BAR_CODE_EN "C-States Base Address"

#define RSC_PERF_MON_MONITOR_MWAIT_CODE_EN	"MONITOR/MWAIT"
#define RSC_PERF_MON_MWAIT_IDX_CSTATE_CODE_EN	"State index"
#define RSC_PERF_MON_MWAIT_SUB_CSTATE_CODE_EN	"Sub C-State"

#define RSC_PERF_MON_CORE_CYCLE_CODE_EN "Core Cycles"
#define RSC_PERF_MON_INST_RET_CODE_EN	"Instructions Retired"
#define RSC_PERF_MON_REF_CYCLE_CODE_EN	"Reference Cycles"
#define RSC_PERF_MON_REF_LLC_CODE_EN	"Last Level Cache References"
#define RSC_PERF_MON_MISS_LLC_CODE_EN	"Last Level Cache Misses"
#define RSC_PERF_MON_BRANCH_RET_CODE_EN "Branch Instructions Retired"
#define RSC_PERF_MON_BRANCH_MIS_CODE_EN "Branch Mispredicts Retired"
#define RSC_PERF_MON_TOPDOWN_SLOTS_CODE_EN "Top-down slots Counter"
#define RSC_PERF_MON_TSC_CODE_EN	"Performance Time Stamp Counter"
#define RSC_PERF_MON_NB_DF_CODE_EN	"Data Fabric Performance Counter"
#define RSC_PERF_MON_CORE_CODE_EN	"Core Performance Counter"

#define RSC_POWER_THERMAL_TITLE_CODE_EN " Power, Current & Thermal "
#define RSC_POWER_THERMAL_ODCM_CODE_EN	"Clock Modulation"
#define RSC_POWER_THERMAL_DUTY_CODE_EN	"DutyCycle"
#define RSC_POWER_THERMAL_MGMT_CODE_EN	"Power Management"
#define RSC_POWER_THERMAL_BIAS_CODE_EN	"Energy Policy"
#define RSC_POWER_THERMAL_TJMAX_CODE_EN "Temperature Offset:Junction"
#define RSC_POWER_THERMAL_DTS_CODE_EN	"Digital Thermal Sensor"
#define RSC_POWER_THERMAL_PLN_CODE_EN	"Power Limit Notification"
#define RSC_POWER_THERMAL_PTM_CODE_EN	"Package Thermal Management"
#define RSC_POWER_THERMAL_TM1_CODE_EN	"Thermal Monitor 1"
#define RSC_POWER_THERMAL_TM2_CODE_EN	"Thermal Monitor 2"
#define RSC_POWER_THERMAL_UNITS_CODE_EN "Units"
#define RSC_POWER_THERMAL_POWER_CODE_EN "Power"
#define RSC_POWER_THERMAL_ENERGY_CODE_EN "Energy"
#define RSC_POWER_THERMAL_WINDOW_CODE_EN "Window"
#define RSC_POWER_THERMAL_WATT_CODE_EN	"watt"
#define RSC_POWER_THERMAL_JOULE_CODE_EN "joule"
#define RSC_POWER_THERMAL_SECOND_CODE_EN "second"
#define RSC_POWER_THERMAL_TDP_CODE_EN	"Thermal Design Power"
#define RSC_POWER_THERMAL_MIN_CODE_EN	"Minimum Power"
#define RSC_POWER_THERMAL_MAX_CODE_EN	"Maximum Power"
#define RSC_POWER_THERMAL_PPT_CODE_EN	"Package Power Tracking"
#define RSC_POWER_THERMAL_TPL_CODE_EN	"Power Limit"
#define RSC_POWER_THERMAL_EDC_CODE_EN	"Electrical Design Current"
#define RSC_POWER_THERMAL_TDC_CODE_EN	"Thermal Design Current"
#define RSC_POWER_THERMAL_POINT_CODE_EN "Thermal Point"
#define RSC_THERMAL_POINT_THRESHOLD_CODE_EN "Threshold"
#define RSC_THERMAL_POINT_LIMIT_CODE_EN "Limit"

#define RSC_KERNEL_TITLE_CODE_EN	" Kernel "
#define RSC_KERNEL_TOTAL_RAM_CODE_EN	"Total RAM"
#define RSC_KERNEL_SHARED_RAM_CODE_EN	"Shared RAM"
#define RSC_KERNEL_FREE_RAM_CODE_EN	"Free RAM"
#define RSC_KERNEL_BUFFER_RAM_CODE_EN	"Buffer RAM"
#define RSC_KERNEL_TOTAL_HIGH_CODE_EN	"Total High"
#define RSC_KERNEL_FREE_HIGH_CODE_EN	"Free High"
#define RSC_KERNEL_GOVERNOR_CODE_EN	"Governor"
#define RSC_KERNEL_FREQ_DRIVER_CODE_EN	"CPU-Freq driver"
#define RSC_KERNEL_IDLE_DRIVER_CODE_EN	"CPU-Idle driver"
#define RSC_KERNEL_RELEASE_CODE_EN	"Release"
#define RSC_KERNEL_VERSION_CODE_EN	"Version"
#define RSC_KERNEL_MACHINE_CODE_EN	"Machine"
#define RSC_KERNEL_MEMORY_CODE_EN	"Memory"
#define RSC_KERNEL_STATE_CODE_EN	"State"
#define RSC_KERNEL_POWER_CODE_EN	"Power"
#define RSC_KERNEL_LATENCY_CODE_EN	"Latency"
#define RSC_KERNEL_RESIDENCY_CODE_EN	"Residency"
#define RSC_KERNEL_LIMIT_CODE_EN	"Idle Limit"

#define RSC_TOPOLOGY_TITLE_CODE_EN	" Topology "

#define RSC_MEM_CTRL_TITLE_CODE_EN	" Memory Controller "
#define RSC_MEM_CTRL_SUBSECT1_0_CODE_EN 	"Contr"
#define RSC_MEM_CTRL_SUBSECT1_1_CODE_EN 	"oller"
#define RSC_MEM_CTRL_SUBSECT1_2_CODE_EN 	" #%-3u"
#define RSC_MEM_CTRL_SINGLE_CHA_0_CODE_EN	"Singl"
#define RSC_MEM_CTRL_SINGLE_CHA_1_CODE_EN	"e Cha"
#define RSC_MEM_CTRL_SINGLE_CHA_2_CODE_EN	"nnel "
#define RSC_MEM_CTRL_DUAL_CHA_0_CODE_EN 	" Dual"
#define RSC_MEM_CTRL_DUAL_CHA_1_CODE_EN 	" Chan"
#define RSC_MEM_CTRL_DUAL_CHA_2_CODE_EN 	"nel  "
#define RSC_MEM_CTRL_TRIPLE_CHA_0_CODE_EN	"Tripl"
#define RSC_MEM_CTRL_TRIPLE_CHA_1_CODE_EN	"e Cha"
#define RSC_MEM_CTRL_TRIPLE_CHA_2_CODE_EN	"nnel "
#define RSC_MEM_CTRL_QUAD_CHA_0_CODE_EN 	" Quad"
#define RSC_MEM_CTRL_QUAD_CHA_1_CODE_EN 	" Chan"
#define RSC_MEM_CTRL_QUAD_CHA_2_CODE_EN 	"nel  "
#define RSC_MEM_CTRL_SIX_CHA_0_CODE_EN		"  Six"
#define RSC_MEM_CTRL_SIX_CHA_1_CODE_EN		" Chan"
#define RSC_MEM_CTRL_SIX_CHA_2_CODE_EN		"nel  "
#define RSC_MEM_CTRL_EIGHT_CHA_0_CODE_EN	"Eight"
#define RSC_MEM_CTRL_EIGHT_CHA_1_CODE_EN	" Chan"
#define RSC_MEM_CTRL_EIGHT_CHA_2_CODE_EN	"nel  "
#define RSC_MEM_CTRL_DISABLED_0_CODE_EN 	"     "
#define RSC_MEM_CTRL_DISABLED_1_CODE_EN 	"Disab"
#define RSC_MEM_CTRL_DISABLED_2_CODE_EN 	"led  "
#define RSC_MEM_CTRL_BUS_RATE_0_CODE_EN 	" Bus "
#define RSC_MEM_CTRL_BUS_RATE_1_CODE_EN 	"Rate "
#define RSC_MEM_CTRL_BUS_SPEED_0_CODE_EN	" Bus "
#define RSC_MEM_CTRL_BUS_SPEED_1_CODE_EN	"Speed"
#define RSC_MEM_CTRL_DRAM_DDR2_0_CODE_EN	"DDR2 "
#define RSC_MEM_CTRL_DRAM_DDR3_0_CODE_EN	"DDR3 "
#define RSC_MEM_CTRL_DRAM_DDR4_0_CODE_EN	"DDR4 "
#define RSC_MEM_CTRL_DRAM_DDR5_0_CODE_EN	"DDR5 "
#define RSC_MEM_CTRL_DRAM_SPEED_0_CODE_EN	"DRAM "
#define RSC_MEM_CTRL_DRAM_SPEED_1_CODE_EN	"Speed"
#define RSC_MEM_CTRL_SUBSECT2_0_CODE_EN 	" DIMM"
#define RSC_MEM_CTRL_SUBSECT2_1_CODE_EN 	" Geom"
#define RSC_MEM_CTRL_SUBSECT2_2_CODE_EN 	"etry "
#define RSC_MEM_CTRL_SUBSECT2_3_CODE_EN 	"for c"
#define RSC_MEM_CTRL_SUBSECT2_4_CODE_EN 	"hanne"
#define RSC_MEM_CTRL_SUBSECT2_5_CODE_EN 	"l #%-2u"
#define RSC_MEM_CTRL_DIMM_SLOT_CODE_EN		" Slot"
#define RSC_MEM_CTRL_DIMM_BANK_CODE_EN		" Bank"
#define RSC_MEM_CTRL_DIMM_RANK_CODE_EN		" Rank"
#define RSC_MEM_CTRL_DIMM_ROW_CODE_EN		"Rows "
#define RSC_MEM_CTRL_DIMM_COLUMN0_CODE_EN	"  Col"
#define RSC_MEM_CTRL_DIMM_COLUMN1_CODE_EN	"umns "
#define RSC_MEM_CTRL_DIMM_SIZE_0_CODE_EN	"   Me"
#define RSC_MEM_CTRL_DIMM_SIZE_1_CODE_EN	"mory "
#define RSC_MEM_CTRL_DIMM_SIZE_2_CODE_EN	"Size "
#define RSC_MEM_CTRL_DIMM_SIZE_3_CODE_EN	"(MB) "

#define RSC_DDR3_CL_COMM_CODE_EN	" tCL ( CAS Latency ) "
#define RSC_DDR3_RCD_COMM_CODE_EN	" tRCD ( Activate to CAS ) "
#define RSC_DDR3_RP_COMM_CODE_EN	" tRP ( RAS Precharge to Activate ) "
#define RSC_DDR3_RAS_COMM_CODE_EN	" tRAS ( Activate to Precharge ) "
#define RSC_DDR3_RRD_COMM_CODE_EN   " tRRD ( Activate to Activate, Same Rank ) "
#define RSC_DDR3_RFC_COMM_CODE_EN	" tRFC ( Refresh to Refresh ) "
#define RSC_DDR3_WR_COMM_CODE_EN	" tWR ( Write Recovery ) "
#define RSC_DDR3_RTP_COMM_CODE_EN	" tRTPr ( Read CAS to Precharge ) "
#define RSC_DDR3_WTP_COMM_CODE_EN	" tWTPr ( Write CAS to Precharge ) "
#define RSC_DDR3_FAW_COMM_CODE_EN	" tFAW ( Four Activate Window ) "
#define RSC_DDR3_B2B_COMM_CODE_EN	" B2B ( CAS commands spacing ) "
#define RSC_DDR3_CWL_COMM_CODE_EN	" tCWL ( CAS Write Latency ) "
#define RSC_DDR3_CMD_COMM_CODE_EN	" CMD ( Command Rate ) "
#define RSC_DDR3_REFI_COMM_CODE_EN	" tREFI ( Refresh Interval ) "

#define RSC_DDR3_DDWRTRD_COMM_CODE_EN	\
				" tddWrTRd ( Write to Read, Different DIMM ) "

#define RSC_DDR3_DRWRTRD_COMM_CODE_EN	\
		" tdrWrTRd ( Write to Read, Different Rank, Same DIMM ) "

#define RSC_DDR3_SRWRTRD_COMM_CODE_EN  " tsrWrTRd ( Write to Read, Same Rank ) "

#define RSC_DDR3_DDRDTWR_COMM_CODE_EN	\
				" tddRdTWr ( Read to Write, Different DIMM ) "

#define RSC_DDR3_DRRDTWR_COMM_CODE_EN	\
		" tdrRdTWr ( Read to Write, Different Rank, Same DIMM ) "

#define RSC_DDR3_SRRDTWR_COMM_CODE_EN  " tsrRdTWr ( Read to Write, Same Rank ) "

#define RSC_DDR3_DDRDTRD_COMM_CODE_EN	\
				" tddRdTRd ( Read to Read, Different DIMM ) "

#define RSC_DDR3_DRRDTRD_COMM_CODE_EN	\
			" tdrRdTRd ( Read to Read, Different Rank, Same DIMM ) "

#define RSC_DDR3_SRRDTRD_COMM_CODE_EN	" tsrRdTRd ( Read to Read, Same Rank ) "

#define RSC_DDR3_DDWRTWR_COMM_CODE_EN	\
				" tddWrTWr ( Write to Write, Different DIMM ) "

#define RSC_DDR3_DRWRTWR_COMM_CODE_EN	\
		" tdrWrTWr ( Write to Write, Different Rank, Same DIMM ) "

#define RSC_DDR3_SRWRTWR_COMM_CODE_EN " tsrWrTWr ( Write to Write, Same Rank ) "
#define RSC_DDR3_CKE_COMM_CODE_EN	" tCKE ( ClocK Enable ) "
#define RSC_DDR3_ECC_COMM_CODE_EN	" ECC ( Error Correcting Code ) "
#define RSC_DDR4_RDRD_SCL_COMM_CODE_EN	" tRDRD ( Read to Read, Same Bank ) "
#define RSC_DDR4_RDRD_SC_COMM_CODE_EN " tRDRD ( Read to Read, Different Bank ) "
#define RSC_DDR4_RDRD_SD_COMM_CODE_EN " tRDRD ( Read to Read, Different Rank ) "
#define RSC_DDR4_RDRD_DD_COMM_CODE_EN " tRDRD ( Read to Read, Different DIMM ) "
#define RSC_DDR4_RDWR_SCL_COMM_CODE_EN	" tRDWR ( Read to Write, Same Bank ) "

#define RSC_DDR4_RDWR_SC_COMM_CODE_EN	\
				" tRDWR ( Read to Write, Different Bank ) "

#define RSC_DDR4_RDWR_SD_COMM_CODE_EN	\
				" tRDWR ( Read to Write, Different Rank ) "

#define RSC_DDR4_RDWR_DD_COMM_CODE_EN	\
				" tRDWR ( Read to Write, Different DIMM ) "

#define RSC_DDR4_WRRD_SCL_COMM_CODE_EN	" tWRRD ( Write to Read, Same Bank ) "

#define RSC_DDR4_WRRD_SC_COMM_CODE_EN	\
				" tWRRD ( Write to Read, Different Bank ) "

#define RSC_DDR4_WRRD_SD_COMM_CODE_EN	\
				" tWRRD ( Write to Read, Different Rank ) "

#define RSC_DDR4_WRRD_DD_COMM_CODE_EN	\
				" tWRRD ( Write to Read, Different DIMM ) "

#define RSC_DDR4_WRWR_SCL_COMM_CODE_EN	" tWRWR ( Write to Write, Same Bank ) "

#define RSC_DDR4_WRWR_SC_COMM_CODE_EN	\
				" tWRWR ( Write to Write, Different Bank ) "

#define RSC_DDR4_WRWR_SD_COMM_CODE_EN	\
				" tWRWR ( Write to Write, Different Rank ) "

#define RSC_DDR4_WRWR_DD_COMM_CODE_EN	\
				" tWRWR ( Write to Write, Different DIMM ) "

#define RSC_DDR4_ZEN_RCD_R_COMM_CODE_EN " tRCD_R ( Activate to Read CAS ) "
#define RSC_DDR4_ZEN_RCD_W_COMM_CODE_EN " tRCD_W ( Activate to Write CAS ) "
#define RSC_DDR4_ZEN_RC_COMM_CODE_EN	" tRC ( Activate to Activate ) "

#define RSC_DDR4_ZEN_RRD_S_COMM_CODE_EN \
		" tRRD_S ( Activate to Activate, Different Bank Group ) "

#define RSC_DDR4_ZEN_RRD_L_COMM_CODE_EN \
			" tRRD_L ( Activate to Activate, Same Bank Group ) "

#define RSC_DDR4_ZEN_WTR_S_COMM_CODE_EN \
			" tWTR_S ( Write to Read, Different Bank Group ) "

#define RSC_DDR4_ZEN_WTR_L_COMM_CODE_EN \
				" tWTR_L ( Write to Read, Same Bank Group ) "

#define RSC_DDR4_ZEN_RDRD_SCL_COMM_CODE_EN \
				" tRDRD[SCL] ( Read to Read, Same Bank Group ) "

#define RSC_DDR4_ZEN_WRWR_SCL_COMM_CODE_EN \
			" tWRWR[SCL] ( Write to Write, Same Bank Group ) "

#define RSC_DDR4_ZEN_RTP_COMM_CODE_EN	" tRTP ( Read To Precharge ) "
#define RSC_DDR4_ZEN_RDWR_COMM_CODE_EN	" tRDWR ( Read Write Command Spacing ) "
#define RSC_DDR4_ZEN_WRRD_COMM_CODE_EN	" tWRRD ( Write Read Command Spacing ) "

#define RSC_DDR4_ZEN_WRWR_SC_COMM_CODE_EN \
				" tWRWR[SC] ( tWRWR, Different Bank Group ) "

#define RSC_DDR4_ZEN_WRWR_SD_COMM_CODE_EN \
					" tWRWR[SD] ( tWRWR, Different Rank) "

#define RSC_DDR4_ZEN_WRWR_DD_COMM_CODE_EN \
					" tWRWR[DD] ( tWRWR, Different DIMM ) "

#define RSC_DDR4_ZEN_RDRD_SC_COMM_CODE_EN \
				" tRDRD[SC] ( tRDRD, Different Bank Group ) "

#define RSC_DDR4_ZEN_RDRD_SD_COMM_CODE_EN \
					" tRDRD[SD] ( tRDRD, Different Rank ) "

#define RSC_DDR4_ZEN_RDRD_DD_COMM_CODE_EN \
					" tRDRD[DD] ( tRDRD, Different DIMM ) "

#define RSC_DDR4_ZEN_RTR_DLR_COMM_CODE_EN \
				" tRTR[DLR] ( tRTR, Different Logical Rank ) "

#define RSC_DDR4_ZEN_WTW_DLR_COMM_CODE_EN \
				" tWTW[DLR] ( tWTW, Different Logical Rank ) "

#define RSC_DDR4_ZEN_WTR_DLR_COMM_CODE_EN \
				" tWTR[DLR] ( tWTR, Different Logical Rank ) "

#define RSC_DDR4_ZEN_RRD_DLR_COMM_CODE_EN \
				" tRRD[DLR] ( tRRD, Different Logical Rank ) "

#define RSC_DDR4_ZEN_RFC1_COMM_CODE_EN " tRFC1 ( Refresh to Refresh, 1X mode ) "
#define RSC_DDR4_ZEN_RFC2_COMM_CODE_EN " tRFC2 ( Refresh to Refresh, 2X mode ) "
#define RSC_DDR4_ZEN_RFC4_COMM_CODE_EN " tRFC4 ( Refresh to Refresh, 4X mode ) "
#define RSC_DDR4_ZEN_RCPB_COMM_CODE_EN	" tRCPB ( Row Cycle Time, Per-Bank ) "

#define RSC_DDR4_ZEN_RPPB_COMM_CODE_EN \
				" tRPPB ( Row Precharge Time, Per-Bank ) "

#define RSC_DDR4_ZEN_BGS_COMM_CODE_EN	" BGS ( BankGroupSwap ) "

#define RSC_DDR4_ZEN_BGS_ALT_COMM_CODE_EN \
					" BGS Alt ( BankGroupSwap Alternate ) "

#define RSC_DDR4_ZEN_BAN_COMM_CODE_EN	" tBAN ( Timing Ban, RTR | WTW ) "
#define RSC_DDR4_ZEN_RCPAGE_COMM_CODE_EN " tRCPage ( Row Cycle Page Time ) "
#define RSC_DDR4_ZEN_GDM_COMM_CODE_EN	" GDM ( Gear Down Mode ) "

#define RSC_DDR4_ZEN_MRD_COMM_CODE_EN	\
			" tMRD ( MRS to another MRS command, Same CS ) "

#define RSC_DDR4_ZEN_MOD_COMM_CODE_EN	\
			" tMOD ( MRS to another non-MRS command, Same CS ) "

#define RSC_DDR4_ZEN_MRD_PDA_COMM_CODE_EN \
			" tMRD_PDA ( MRS PDA to another MRS command, Same CS ) "

#define RSC_DDR4_ZEN_MOD_PDA_COMM_CODE_EN \
		" tMOD_PDA ( MRS PDA to another non-MRS command, Same CS ) "

#define RSC_DDR4_ZEN_STAG_COMM_CODE_EN	\
		" tSTAG ( Min timing between REF commands, Different CS ) "

#define RSC_DDR4_ZEN_PDM_COMM_CODE_EN	" PDM ( DRAM Power Down Mode ) " \
					" [ Aggressive:Full|Partial:Enable ] "

#define RSC_DDR4_ZEN_PHYWRD_COMM_CODE_EN \
			" tPHYWRD ( dfi_wrdata_en to dfi_wrdata delay ) "

#define RSC_DDR4_ZEN_PHYWRL_COMM_CODE_EN \
			" tPHYWRL ( Write command to dfi_wrdata_en delay ) "

#define RSC_DDR4_ZEN_PHYRDL_COMM_CODE_EN \
			" tPHYRDL ( dfi_rddata_en to dfi_rddata_vld delay ) "

#define RSC_DDR4_ZEN_RDDATA_COMM_CODE_EN \
			" tRDDATA ( Read command to dfi_rddata_en delay ) "

#define RSC_DDR4_ZEN_WRMPR_COMM_CODE_EN \
			" tWRMPR ( Number of clocks greater than tMOD ) "

#define RSC_TASKS_SORTBY_STATE_CODE_EN		" State    "
#define RSC_TASKS_SORTBY_RTIME_CODE_EN		" RunTime  "
#define RSC_TASKS_SORTBY_UTIME_CODE_EN		" UserTime "
#define RSC_TASKS_SORTBY_STIME_CODE_EN		" SysTime  "
#define RSC_TASKS_SORTBY_PID_CODE_EN		" PID      "
#define RSC_TASKS_SORTBY_COMM_CODE_EN		" Command  "

#define RSC_MENU_ITEM_MENU_CODE_EN		"     [F2] Menu          "
#define RSC_MENU_ITEM_VIEW_CODE_EN		"     [F3] View          "
#define RSC_MENU_ITEM_WINDOW_CODE_EN		"    [F4] Window         "
#define RSC_MENU_ITEM_SETTINGS_CODE_EN		" Settings           [s] "
#define RSC_MENU_ITEM_SMBIOS_CODE_EN		" SMBIOS data        [B] "
#define RSC_MENU_ITEM_KERNEL_CODE_EN		" Kernel data        [k] "
#define RSC_MENU_ITEM_HOTPLUG_CODE_EN		" HotPlug CPU        [#] "
#define RSC_MENU_ITEM_TOOLS_CODE_EN		" Tools              [O] "
#define RSC_MENU_ITEM_THEME_CODE_EN		" Theme              [E] "
#define RSC_MENU_ITEM_ABOUT_CODE_EN		" About              [a] "
#define RSC_MENU_ITEM_HELP_CODE_EN		" Help               [h] "
#define RSC_MENU_ITEM_KEYS_CODE_EN		" Shortcuts         [F1] "
#define RSC_MENU_ITEM_LANG_CODE_EN		" Languages          [L] "
#define RSC_MENU_ITEM_QUIT_CODE_EN		" Quit        [Ctrl]+[x] "
#define RSC_MENU_ITEM_DASHBOARD_CODE_EN 	" Dashboard          [d] "
#define RSC_MENU_ITEM_FREQUENCY_CODE_EN 	" Frequency          [f] "
#define RSC_MENU_ITEM_INST_CYCLES_CODE_EN	" Inst cycles        [i] "
#define RSC_MENU_ITEM_CORE_CYCLES_CODE_EN	" Core cycles        [c] "
#define RSC_MENU_ITEM_IDLE_STATES_CODE_EN	" Idle C-States      [l] "
#define RSC_MENU_ITEM_PKG_CYCLES_CODE_EN	" Package cycles     [g] "
#define RSC_MENU_ITEM_TASKS_MON_CODE_EN 	" Tasks Monitoring   [x] "
#define RSC_MENU_ITEM_SYS_INTER_CODE_EN 	" System Interrupts  [q] "
#define RSC_MENU_ITEM_SENSORS_CODE_EN		" Sensors            [C] "
#define RSC_MENU_ITEM_VOLTAGE_CODE_EN		"   Voltage          [V] "
#define RSC_MENU_ITEM_POWER_CODE_EN		"   Power            [W] "
#define RSC_MENU_ITEM_SLICE_CTRS_CODE_EN	" Slice counters     [T] "
#define RSC_MENU_ITEM_CUSTOM_CODE_EN		" Custom view        [y] "
#define RSC_MENU_ITEM_PROCESSOR_CODE_EN 	" Processor          [p] "
#define RSC_MENU_ITEM_TOPOLOGY_CODE_EN		" Topology           [m] "
#define RSC_MENU_ITEM_FEATURES_CODE_EN		" Features           [e] "
#define RSC_MENU_ITEM_ISA_EXT_CODE_EN		" ISA Extensions     [I] "
#define RSC_MENU_ITEM_TECH_CODE_EN		" Technologies       [t] "
#define RSC_MENU_ITEM_PERF_MON_CODE_EN		" Perf. Monitoring   [o] "
#define RSC_MENU_ITEM_POW_THERM_CODE_EN 	" Power & Thermal    [w] "
#define RSC_MENU_ITEM_CPUID_CODE_EN		" CPUID Hexa Dump    [u] "
#define RSC_MENU_ITEM_SYS_REGS_CODE_EN		" System Registers   [R] "
#define RSC_MENU_ITEM_MEM_CTRL_CODE_EN		" Memory Controller  [M] "

#define RSC_SETTINGS_TITLE_CODE_EN	    " Settings "
#define RSC_SETTINGS_DAEMON_CODE_EN	    " Daemon gate                    "
#define RSC_SETTINGS_INTERVAL_CODE_EN	    " Interval(ms)            <    > "
#define RSC_SETTINGS_SYS_TICK_CODE_EN	    " Sys. Tick(ms)                  "
#define RSC_SETTINGS_POLL_WAIT_CODE_EN	    " Poll Wait(ms)                  "
#define RSC_SETTINGS_RING_WAIT_CODE_EN	    " Ring Wait(ms)                  "
#define RSC_SETTINGS_CHILD_WAIT_CODE_EN     " Child Wait(ms)                 "
#define RSC_SETTINGS_SLICE_WAIT_CODE_EN     " Slice Wait(ms)                 "
#define RSC_SETTINGS_RECORDER_CODE_EN	    " Recorder(sec)           <    > "
#define RSC_SETTINGS_AUTO_CLOCK_CODE_EN     " Auto Clock               <   > "
#define RSC_SETTINGS_EXPERIMENTAL_CODE_EN   " Experimental             <   > "
#define RSC_SETTINGS_CPU_HOTPLUG_CODE_EN    " CPU Hot-Plug             [   ] "
#define RSC_SETTINGS_PCI_ENABLED_CODE_EN    " PCI enablement           [   ] "
#define RSC_SETTINGS_HSMP_ENABLED_CODE_EN   " HSMP enablement          [   ] "
#define RSC_SETTINGS_NMI_REGISTERED_CODE_EN " NMI registered           <   > "
#define RSC_SETTINGS_CPUIDLE_REGISTERED_CODE_EN \
					    " CPU-IDLE driver          <   > "

#define RSC_SETTINGS_CPUFREQ_REGISTERED_CODE_EN \
					    " CPU-FREQ driver          <   > "

#define RSC_SETTINGS_GOVERNOR_REGISTERED_CODE_EN \
					    " Governor driver          <   > "

#define RSC_SETTINGS_CS_REGISTERED_CODE_EN  " Clock Source             <   > "
#define RSC_SETTINGS_THERMAL_SCOPE_CODE_EN  " Thermal scope           <    > "
#define RSC_SETTINGS_VOLTAGE_SCOPE_CODE_EN  " Voltage scope           <    > "
#define RSC_SETTINGS_POWER_SCOPE_CODE_EN    " Power scope             <    > "
#define RSC_SETTINGS_IDLE_ROUTE_CODE_EN     " CPU-IDLE route                 "

#define RSC_HELP_TITLE_CODE_EN		" Help "
#define RSC_HELP_KEY_ESCAPE_CODE_EN	" [Escape]         "
#define RSC_HELP_KEY_SHIFT_TAB_CODE_EN	" [Shift]+[Tab]    "
#define RSC_HELP_KEY_TAB_CODE_EN	" [Tab]            "
#define RSC_HELP_KEY_UP_CODE_EN 	"       [Up]       "
#define RSC_HELP_KEY_LEFT_RIGHT_CODE_EN " [Left]    [Right]"
#define RSC_HELP_KEY_DOWN_CODE_EN	"      [Down]      "
#define RSC_HELP_KEY_END_CODE_EN	" [End]            "
#define RSC_HELP_KEY_HOME_CODE_EN	" [Home]           "
#define RSC_HELP_KEY_ENTER_CODE_EN	" [Enter]          "
#define RSC_HELP_KEY_PAGE_UP_CODE_EN	" [Page-Up]        "
#define RSC_HELP_KEY_PAGE_DOWN_CODE_EN	" [Page-Dw]        "
#define RSC_HELP_KEY_MINUS_CODE_EN	" [Minus]          "
#define RSC_HELP_KEY_PLUS_CODE_EN	" [Plus]           "
#define RSC_HELP_KEY_MENU_CODE_EN	" [F2]             "
#define RSC_HELP_MENU_CODE_EN		"             Menu "
#define RSC_HELP_CLOSE_WINDOW_CODE_EN	"     Close window "
#define RSC_HELP_PREV_WINDOW_CODE_EN	"  Previous window "
#define RSC_HELP_NEXT_WINDOW_CODE_EN	"      Next window "
#define RSC_HELP_KEY_SHIFT_GR1_CODE_EN	"       [a|z]      "
#define RSC_HELP_KEY_SHIFT_GR2_CODE_EN	" [w|q]  [s]  [d] +"
#define RSC_HELP_MOVE_WINDOW_CODE_EN	" [Shift] Move Win "
#define RSC_HELP_KEY_ALT_GR3_CODE_EN	"                 +"
#define RSC_HELP_SIZE_WINDOW_CODE_EN	"  [Alt]  Size Win "
#define RSC_HELP_MOVE_SELECT_CODE_EN	"   Move selection "
#define RSC_HELP_LAST_CELL_CODE_EN	"        Last cell "
#define RSC_HELP_FIRST_CELL_CODE_EN	"       First cell "
#define RSC_HELP_TRIGGER_SELECT_CODE_EN "Trigger selection "
#define RSC_HELP_PREV_PAGE_CODE_EN	"    Previous page "
#define RSC_HELP_NEXT_PAGE_CODE_EN	"        Next page "
#define RSC_HELP_SCROLL_DOWN_CODE_EN	"  Scroll CPU down "
#define RSC_HELP_SCROLL_UP_CODE_EN	"    Scroll CPU up "

#define RSC_ADV_HELP_TITLE_CODE_EN	" Shortcuts "
#define RSC_ADV_HELP_SECT_FREQ_CODE_EN	" Frequency view:                      "
#define RSC_ADV_HELP_ITEM_AVG_CODE_EN	" %         Averages | Package C-States"
#define RSC_ADV_HELP_SECT_TASK_CODE_EN	" Task Monitoring view:                "
#define RSC_ADV_HELP_ITEM_ORDER_CODE_EN " b                Sorting tasks order "
#define RSC_ADV_HELP_ITEM_SEL_CODE_EN	" n               Select task tracking "
#define RSC_ADV_HELP_ITEM_REV_CODE_EN	" r              Reverse tasks sorting "
#define RSC_ADV_HELP_ITEM_HIDE_CODE_EN	" v          Show | Hide Kernel values "
#define RSC_ADV_HELP_SECT_ANY_CODE_EN	" Any view:                            "
#define RSC_ADV_HELP_ITEM_POWER_CODE_EN " $            Energy in Joule or Watt "
#define RSC_ADV_HELP_ITEM_TOP_CODE_EN	" .             Top frequency or Usage "
#define RSC_ADV_HELP_ITEM_UPD_CODE_EN	" *           Refresh CoreFreq Machine "
#define RSC_ADV_HELP_ITEM_START_CODE_EN " {             Start CoreFreq Machine "
#define RSC_ADV_HELP_ITEM_STOP_CODE_EN	" }              Stop CoreFreq Machine "
#define RSC_ADV_HELP_ITEM_TOOLS_CODE_EN " F10            Stop tools processing "
#define RSC_ADV_HELP_ITEM_GO_UP_CODE_EN "  Up  PgUp                     Scroll "
#define RSC_ADV_HELP_ITEM_GO_DW_CODE_EN " Down PgDw                       CPU  "
#define RSC_ADV_HELP_ITEM_TERMINAL_CODE_EN \
					" Terminal:                            "

#define RSC_ADV_HELP_ITEM_PRT_SCR_CODE_EN \
					" [Ctrl]+[p]                      Copy "

#define RSC_ADV_HELP_ITEM_REC_SCR_CODE_EN \
					" [Alt]+[p]                     Record "

#define RSC_ADV_HELP_ITEM_FAHR_CELS_CODE_EN \
					" F              Fahrenheit or Celsius "

#define RSC_ADV_HELP_ITEM_SYSGATE_CODE_EN \
					" G               Toggle SysGate state "

#define RSC_ADV_HELP_ITEM_PROC_EVENT_CODE_EN \
					" H            Manage Processor Events "

#define RSC_ADV_HELP_ITEM_SECRET_CODE_EN \
					" Y            Show | Hide Secret Data "

#define RSC_TURBO_CLOCK_TITLE_CODE_EN	" Turbo Clock %1dC "
#define RSC_RATIO_CLOCK_TITLE_CODE_EN	" %s Clock Ratio "
#define RSC_UNCORE_CLOCK_TITLE_CODE_EN	" %s Clock Uncore "

#define RSC_SELECT_CPU_TITLE_CODE_EN	" CPU   Pkg  Core Thread Scheduled "
#define RSC_SELECT_FREQ_TITLE_CODE_EN	" CPU   Pkg  Core Thread "	\
					"  Frequency   Ratio "

#define RSC_BOX_DISABLE_COND0_CODE_EN	"               Disable              "
#define RSC_BOX_DISABLE_COND1_CODE_EN	"           <   Disable  >           "
#define RSC_BOX_ENABLE_COND0_CODE_EN	"               Enable               "
#define RSC_BOX_ENABLE_COND1_CODE_EN	"           <   Enable   >           "

#define RSC_BOX_INTERVAL_TITLE_CODE_EN	"Interval"
#define RSC_BOX_AUTO_CLOCK_TITLE_CODE_EN " Auto Clock "
#define RSC_BOX_MODE_TITLE_CODE_EN	" Experimental "

#define RSC_BOX_MODE_DESC_CODE_EN	"       CoreFreq Operation Mode       "
#define RSC_BOX_EIST_DESC_CODE_EN	"             SpeedStep              "
#define RSC_BOX_C1E_DESC_CODE_EN	"        Enhanced Halt State         "
#define RSC_BOX_TURBO_DESC_CODE_EN	" Turbo Boost/Core Performance Boost "
#define RSC_BOX_C1A_DESC_CODE_EN	"          C1 Auto Demotion          "
#define RSC_BOX_C3A_DESC_CODE_EN	"          C3 Auto Demotion          "
#define RSC_BOX_C1U_DESC_CODE_EN	"            C1 UnDemotion           "
#define RSC_BOX_C2U_DESC_CODE_EN	"            C2 UnDemotion           "
#define RSC_BOX_C3U_DESC_CODE_EN	"            C3 UnDemotion           "
#define RSC_BOX_C6D_DESC_CODE_EN	"          Core C6 Demotion          "
#define RSC_BOX_MC6_DESC_CODE_EN	"         Module C6 Demotion         "
#define RSC_BOX_CC6_DESC_CODE_EN	"           Core C6 State            "
#define RSC_BOX_PC6_DESC_CODE_EN	"          Package C6 State          "
#define RSC_BOX_HWP_DESC_CODE_EN	"   Hardware-Controlled Performance  "
#define RSC_BOX_HDC_DESC_CODE_EN	"        Hardware Duty Cycling       "
#define RSC_BOX_EEO_DESC_CODE_EN	"   Energy Efficiency Optimization   "
#define RSC_BOX_R2H_DESC_CODE_EN	"      Race To Halt Optimization     "
#define RSC_BOX_WDT_DESC_CODE_EN	"           Watchdog Timer           "

#define RSC_BOX_NOMINAL_MODE_COND0_CODE_EN \
					"       Nominal operating mode       "

#define RSC_BOX_NOMINAL_MODE_COND1_CODE_EN \
					"     < Nominal operating mode >     "

#define RSC_BOX_EXPERIMENT_MODE_COND0_CODE_EN \
					"     Experimental operating mode    "

#define RSC_BOX_EXPERIMENT_MODE_COND1_CODE_EN \
					"   < Experimental operating mode >  "

#define RSC_BOX_INTERRUPT_TITLE_CODE_EN 	" NMI Interrupts "
#define RSC_BOX_CPU_IDLE_TITLE_CODE_EN		" CPU-IDLE driver "
#define RSC_BOX_CPU_FREQ_TITLE_CODE_EN		" CPU-FREQ driver "
#define RSC_BOX_GOVERNOR_TITLE_CODE_EN		" Governor driver "
#define RSC_BOX_CLOCK_SOURCE_TITLE_CODE_EN	" Clock Source "

#define RSC_BOX_OPS_REGISTER_COND0_CODE_EN \
					"              Register              "

#define RSC_BOX_OPS_REGISTER_COND1_CODE_EN \
					"            < Register >            "

#define RSC_BOX_OPS_UNREGISTER_COND0_CODE_EN \
					"             Unregister             "

#define RSC_BOX_OPS_UNREGISTER_COND1_CODE_EN \
					"           < Unregister >           "

#define RSC_BOX_EVENT_TITLE_CODE_EN		" Clear Event "

#define RSC_BOX_EVENT_THERMAL_SENSOR_CODE_EN	"     Thermal Sensor     "
#define RSC_BOX_EVENT_PROCHOT_AGENT_CODE_EN	"     PROCHOT# Agent     "
#define RSC_BOX_EVENT_CRITICAL_TEMP_CODE_EN	"  Critical Temperature  "
#define RSC_BOX_EVENT_THERM_THRESHOLD_CODE_EN	"   Thermal Threshold    "
#define RSC_BOX_EVENT_POWER_LIMIT_CODE_EN	"    Power Limitation    "
#define RSC_BOX_EVENT_CURRENT_LIMIT_CODE_EN	"   Current Limitation   "
#define RSC_BOX_EVENT_CROSS_DOM_LIMIT_CODE_EN	"   Cross Domain Limit.  "

#define RSC_BOX_STATE_UNSPECIFIED_CODE_EN	"        UNSPECIFIED        "

#define RSC_BOX_PKG_STATE_LIMIT_TITLE_CODE_EN	" Package C-State Limit "

#define RSC_BOX_IO_MWAIT_TITLE_CODE_EN		" I/O MWAIT "
#define RSC_BOX_IO_MWAIT_DESC_CODE_EN	"        I/O MWAIT Redirection       "

#define RSC_BOX_MWAIT_MAX_STATE_TITLE_CODE_EN " I/O MWAIT Max C-State "

#define RSC_BOX_ODCM_TITLE_CODE_EN		" ODCM "
#define RSC_BOX_ODCM_DESC_CODE_EN	"          Clock Modulation          "

#define RSC_BOX_EXT_DUTY_CYCLE_TITLE_CODE_EN	" Extended Duty Cycle "
#define RSC_BOX_DUTY_CYCLE_TITLE_CODE_EN	" Duty Cycle "

#define RSC_BOX_DUTY_CYCLE_RESERVED_CODE_EN	"          Reserved         "

#define RSC_BOX_POWER_POLICY_TITLE_CODE_EN	" Energy Policy "

#define RSC_BOX_POWER_POLICY_LOW_CODE_EN	"            0       LOW "
#define RSC_BOX_POWER_POLICY_HIGH_CODE_EN	"           15      HIGH "

#define RSC_BOX_HWP_POLICY_MIN_CODE_EN		"         Minimum:0      "
#define RSC_BOX_HWP_POLICY_020_CODE_EN		"                32      "
#define RSC_BOX_HWP_POLICY_040_CODE_EN		"                64      "
#define RSC_BOX_HWP_POLICY_060_CODE_EN		"                96      "
#define RSC_BOX_HWP_POLICY_MED_CODE_EN		"        Medium:128      "
#define RSC_BOX_HWP_POLICY_0A0_CODE_EN		"               160      "
#define RSC_BOX_HWP_POLICY_PWR_CODE_EN		"         Power:192      "
#define RSC_BOX_HWP_POLICY_0E0_CODE_EN		"               224      "
#define RSC_BOX_HWP_POLICY_MAX_CODE_EN		"       Maximum:255      "

#define RSC_BOX_TOOLS_TITLE_CODE_EN		" Tools "
#define RSC_BOX_TOOLS_STOP_BURN_CODE_EN 	"            STOP           "
#define RSC_BOX_TOOLS_ATOMIC_BURN_CODE_EN	"        Atomic Burn        "
#define RSC_BOX_TOOLS_CRC32_BURN_CODE_EN	"       CRC32 Compute       "
#define RSC_BOX_TOOLS_CONIC_BURN_CODE_EN	"   <   Conic Compute   >   "
#define RSC_BOX_TOOLS_RANDOM_CPU_CODE_EN	"      Turbo Random CPU     "
#define RSC_BOX_TOOLS_ROUND_ROBIN_CPU_CODE_EN	"      Turbo Round Robin    "
#define RSC_BOX_TOOLS_USER_CPU_CODE_EN		"    Turbo < Select CPU >   "

#define RSC_BOX_CONIC_TITLE_CODE_EN		" Conic variations "
#define RSC_BOX_CONIC_ITEM_1_CODE_EN		"         Ellipsoid         "
#define RSC_BOX_CONIC_ITEM_2_CODE_EN		" Hyperboloid of one sheet  "
#define RSC_BOX_CONIC_ITEM_3_CODE_EN		" Hyperboloid of two sheets "
#define RSC_BOX_CONIC_ITEM_4_CODE_EN		"    Elliptical cylinder    "
#define RSC_BOX_CONIC_ITEM_5_CODE_EN		"    Hyperbolic cylinder    "
#define RSC_BOX_CONIC_ITEM_6_CODE_EN		"    Two parallel planes    "

#define RSC_BOX_LANG_TITLE_CODE_EN		" Languages "
#define RSC_BOX_LANG_ENGLISH_CODE_EN		"     English     "
#define RSC_BOX_LANG_FRENCH_CODE_EN		"     French      "
#define RSC_BOX_LANG_BLANK_CODE 		"                 "

#define RSC_BOX_THEME_TITLE_CODE_EN		" Themes "
#define RSC_BOX_THEME_BLANK_CODE			\
"                                                                        "

#define RSC_BOX_SCOPE_THERMAL_TITLE_CODE_EN	" Thermal scope "
#define RSC_BOX_SCOPE_VOLTAGE_TITLE_CODE_EN	" Voltage scope "
#define RSC_BOX_SCOPE_POWER_TITLE_CODE_EN	" Power scope "
#define RSC_BOX_SCOPE_NONE_CODE_EN		"       None       "
#define RSC_BOX_SCOPE_THREAD_CODE_EN		"      Thread      "
#define RSC_BOX_SCOPE_CORE_CODE_EN		"       Core       "
#define RSC_BOX_SCOPE_PACKAGE_CODE_EN		"      Package     "

#define RSC_BOX_CFG_TDP_TITLE_CODE_EN		" Config TDP "
#define RSC_BOX_CFG_TDP_DESC_CODE_EN		" System BIOS limit "
#define RSC_BOX_CFG_TDP_LVL0_CODE_EN		"      Level 0      "
#define RSC_BOX_CFG_TDP_LVL1_CODE_EN		"      Level 1      "
#define RSC_BOX_CFG_TDP_LVL2_CODE_EN		"      Level 2      "

#define RSC_BOX_TDP_PKG_TITLE_CODE_EN		" TDP Package "
#define RSC_BOX_TDP_CORES_TITLE_CODE_EN 	" TDP Core "
#define RSC_BOX_TDP_UNCORE_TITLE_CODE_EN	" TDP Uncore "
#define RSC_BOX_TDP_RAM_TITLE_CODE_EN		" TDP DRAM "
#define RSC_BOX_TDP_PLATFORM_TITLE_CODE_EN	" TDP Platform "
#define RSC_BOX_PL1_DESC_CODE_EN	"          PL1 Power Limit           "
#define RSC_BOX_PL2_DESC_CODE_EN	"          PL2 Power Limit           "

#define RSC_BOX_TDC_TITLE_CODE_EN		" TDC Current "
#define RSC_BOX_TDC_DESC_CODE_EN	"         TDC Current Limit          "

#define RSC_ERROR_CMD_SYNTAX_CODE_EN					\
		"CoreFreq."						\
		"  Copyright (C) 2015-2021 CYRIL INGENIERIE\n\n"	\
		"Usage:\t%s [-Option <argument>] [-Command <argument>]\n"\
		"\n    Interface options\n"				\
		"\t-Oa\tAbsolute frequency\n"				\
		"\t-Ok\tMemory unit in kilobyte\n"			\
		"\t-Om\tMemory unit in megabyte\n"			\
		"\t-Og\tMemory unit in gigabyte\n"			\
		"\t-OF\tTemperature in Fahrenheit\n"			\
		"\t-OJ #\tSMBIOS string index number\n" 		\
		"\t-OE #\tColor theme index number\n"			\
		"\t-OY\tShow Secret Data\n"				\
		"\n    Command options\n"				\
		"\t-t <v>\tShow Top (default) with optional <v>iew:\n"	\
		"\t\t{\tfrequency, instructions, core, idle, package, tasks,\n"\
		"\t\t\tinterrupts, sensors, voltage, power, slices, custom }\n"\
		"\t-d\tShow Dashboard\n"				\
		"\t-C <#>\tMonitor Sensors\n"				\
		"\t-V <#>\tMonitor Voltage\n"				\
		"\t-W <#>\tMonitor Power\n"				\
		"\t-g <#>\tMonitor Package\n"				\
		"\t-c <#>\tMonitor Counters\n"				\
		"\t-i <#>\tMonitor Instructions\n"			\
		"\t-s\tPrint System Information\n"			\
		"\t-j\tPrint System Information (json-encoded)\n"	\
		"\t-M\tPrint Memory Controller\n"			\
		"\t-R\tPrint System Registers\n"			\
		"\t-m\tPrint Topology\n"				\
		"\t-u\tPrint CPUID\n"					\
		"\t-B\tPrint SMBIOS\n"					\
		"\t-k\tPrint Kernel\n"					\
		"\t-n\tNew line\n"					\
		"\t-h\tPrint out this message\n"			\
		"\t-v\tPrint the version number\n"			\
		"\nExit status:\n"					\
		"\t%u\tSUCCESS\t\tSuccessful execution\n"		\
		"\t%u\tCMD_SYNTAX\tCommand syntax error\n"		\
		"\t%u\tSHM_FILE\tShared memory file error\n"		\
		"\t%u\tSHM_MMAP\tShared memory mapping error\n"		\
		"\t%u\tPERM_ERR\tExecution not permitted\n"		\
		"\t%u\tMEM_ERR\t\tMemory operation error\n"		\
		"\t%u\tEXEC_ERR\tGeneral execution error\n"		\
		"\t%u\tSYS_CALL\tSystem call error\n"			\
		"\nReport bugs to labs[at]cyring.fr\n"

#define RSC_ERROR_SHARED_MEM_CODE_EN					\
		"Daemon connection error code %d\n%s: '%s' @ line %d\n"

#define RSC_ERROR_SYS_CALL_CODE_EN	"System error code %d\n%s @ line %d\n"
#define RSC_ERROR_UNIMPLEMENTED_CODE_EN "Feature is not implemented"
#define RSC_ERROR_EXPERIMENTAL_CODE_EN	"Experimental mode is required"

#define RSC_ERROR_TURBO_PREREQ_CODE_EN	"Turbo Boost | Core Performance Boost"\
					" must be disabled"

#define RSC_ERROR_UNCORE_PREREQ_CODE_EN "Invalid Uncore prerequisites"

#define RSC_ERROR_PSTATE_NOT_FOUND_CODE_EN				\
					"This Frequency P-State was not found"

#define RSC_BOX_IDLE_LIMIT_TITLE_CODE_EN " CPU-Idle Limit "

#define RSC_BOX_RECORDER_TITLE_CODE_EN	" Duration "

#define RSC_SMBIOS_TITLE_CODE_EN	" SMBIOS "

#define RSC_MECH_IBRS_CODE_EN	"Indirect Branch Restricted Speculation"
#define RSC_MECH_IBPB_CODE_EN	"Indirect Branch Prediction Barrier"
#define RSC_MECH_STIBP_CODE_EN	"Single Thread Indirect Branch Predictor"
#define RSC_MECH_SSBD_CODE_EN	"Speculative Store Bypass Disable"
#define RSC_MECH_L1D_FLUSH_CODE_EN "Writeback & invalidate the L1 data cache"
#define RSC_MECH_MD_CLEAR_CODE_EN  "Architectural - Buffer Overwriting"
#define RSC_MECH_RDCL_NO_CODE_EN   "Architectural - Rogue Data Cache Load"
#define RSC_MECH_IBRS_ALL_CODE_EN  "Architectural - Enhanced IBRS"
#define RSC_MECH_RSBA_CODE_EN	"Architectural - Return Stack Buffer Alternate"

#define RSC_MECH_L1DFL_VMENTRY_NO_CODE_EN \
				"Hypervisor - No flush L1D on VM entry"

#define RSC_MECH_SSB_NO_CODE_EN "Architectural - Speculative Store Bypass"

#define RSC_MECH_MDS_NO_CODE_EN \
			"Architectural - Microarchitectural Data Sampling"

#define RSC_MECH_PSCHANGE_MC_NO_CODE_EN "Architectural - Page Size Change MCE"
#define RSC_MECH_TAA_NO_CODE_EN "Architectural - TSX Asynchronous Abort"
#define RSC_MECH_STLB_CODE_EN	"Architectural - STLB QoS"
#define RSC_MECH_FUSA_CODE_EN	"Architectural - Functional Safety Island"
#define RSC_MECH_RSM_CPL0_CODE_EN "Architectural - RSM in CPL0 only"
#define RSC_MECH_SPLA_CODE_EN	"Architectural - Split Locked Access Exception"
#define RSC_MECH_SNOOP_FILTER_CODE_EN "Architectural - Snoop Filter QoS Mask"
#define RSC_MECH_PSFD_CODE_EN	"Architectural - Predictive Store Forwarding"
#define RSC_MECH_IBRS_ALWAYS_ON_CODE_EN "IBRS Always-On preferred by processor"
#define RSC_MECH_IBRS_PREFERRED_CODE_EN "IBRS preferred over software solution"
#define RSC_MECH_IBRS_SAME_MODE_CODE_EN "IBRS provides same speculation limits"
#define RSC_MECH_SSBD_VIRTSPECCTRL_CODE_EN "SSBD use VIRT SPEC_CTRL register"
#define RSC_MECH_SSBD_NOT_REQUIRED_CODE_EN "SSBD not needed on this processor"

#define RSC_CREATE_SELECT_AUTO_TURBO_CODE_EN	"  %3s       Processor     " \
						"   %s     %c%4u %c "

#define RSC_CREATE_SELECT_FREQ_TURBO_CODE_EN	"  %3s       Processor     " \
						"%7.2f MHz %c%4u %c "

#define RSC_CREATE_SELECT_FREQ_TGT_CODE_EN	"  TGT       Processor     "
#define RSC_CREATE_SELECT_FREQ_HWP_TGT_CODE_EN	"  HWP-TGT   Processor     "
#define RSC_CREATE_SELECT_FREQ_HWP_MAX_CODE_EN	"  HWP-MAX   Processor     "
#define RSC_CREATE_SELECT_FREQ_HWP_MIN_CODE_EN	"  HWP-MIN   Processor     "
#define RSC_CREATE_SELECT_FREQ_MAX_CODE_EN	"  MAX       Processor     "
#define RSC_CREATE_SELECT_FREQ_MIN_CODE_EN	"  MIN       Processor     "

#define RSC_CREATE_SELECT_FREQ_OFFLINE_CODE_EN	"  %03u                    " \
						"               Off   "

#define RSC_POPUP_DRIVER_TITLE_CODE_EN		" Driver Message "

#define RSC_EXIT_TITLE_CODE_EN			" Exit "
#define RSC_EXIT_HEADER_CODE_EN  " The following services are still running "
#define RSC_EXIT_CONFIRM_CODE_EN "              < Force-Quit >              "
#define RSC_EXIT_FOOTER_CODE_EN  "                          [ESC] to cancel "

#define RSC_CREATE_SETTINGS_COND_CODE_EN	\
					"                                "

#define RSC_CREATE_SETTINGS_COND0_CODE_EN RSC_CREATE_SETTINGS_COND_CODE_EN
#define RSC_CREATE_SETTINGS_COND1_CODE_EN RSC_CREATE_SETTINGS_COND_CODE_EN

#define RSC_HELP_BLANK_CODE		"                  "

#define RSC_CREATE_ADV_HELP_BLANK_CODE_EN	\
					"                                      "

#define RSC_CREATE_ADV_HELP_COND0_CODE_EN RSC_CREATE_ADV_HELP_BLANK_CODE_EN
#define RSC_CREATE_ADV_HELP_COND1_CODE_EN RSC_CREATE_ADV_HELP_BLANK_CODE_EN

#define RSC_BOX_BLANK_DESC_CODE 	"                                    "

#define RSC_BOX_INTERVAL_STEP1_CODE	"    100   "
#define RSC_BOX_INTERVAL_STEP2_CODE	"    150   "
#define RSC_BOX_INTERVAL_STEP3_CODE	"    250   "
#define RSC_BOX_INTERVAL_STEP4_CODE	"    500   "
#define RSC_BOX_INTERVAL_STEP5_CODE	"    750   "
#define RSC_BOX_INTERVAL_STEP6_CODE	"   1000   "
#define RSC_BOX_INTERVAL_STEP7_CODE	"   1500   "
#define RSC_BOX_INTERVAL_STEP8_CODE	"   2000   "
#define RSC_BOX_INTERVAL_STEP9_CODE	"   2500   "
#define RSC_BOX_INTERVAL_STEP10_CODE	"   3000   "

#define RSC_SETTINGS_ROUTE_TITLE_CODE_EN "Route"
#define RSC_SETTINGS_ROUTE_DFLT_CODE	"DEFAULT"
#define RSC_SETTINGS_ROUTE_IO_CODE	"    I/O"
#define RSC_SETTINGS_ROUTE_HALT_CODE	"   HALT"
#define RSC_SETTINGS_ROUTE_MWAIT_CODE	"  MWAIT"

#define RSC_BOX_DCU_L1_TITLE_CODE	" DCU L1 Prefetcher "
#define RSC_BOX_DCU_L1_IP_TITLE_CODE	" DCU L1 IP Prefetcher "
#define RSC_BOX_DCU_L2_TITLE_CODE	" DCU L2 Prefetcher "
#define RSC_BOX_DCU_L2_CL_TITLE_CODE	" DCU L2 CL Prefetcher "

#define RSC_BOX_EIST_TITLE_CODE 	" EIST "

#define RSC_BOX_C1E_TITLE_CODE		" C1E "

#define RSC_BOX_TURBO_TITLE_CODE	" Turbo "

#define RSC_BOX_C1A_TITLE_CODE		" C1A "
#define RSC_BOX_C3A_TITLE_CODE		" C3A "
#define RSC_BOX_C1U_TITLE_CODE		" C1U "
#define RSC_BOX_C2U_TITLE_CODE		" C2U "
#define RSC_BOX_C3U_TITLE_CODE		" C3U "

#define RSC_BOX_CC6_TITLE_CODE		" CC6 "
#define RSC_BOX_C6D_TITLE_CODE		" C6D "

#define RSC_BOX_MC6_TITLE_CODE		" MC6 "
#define RSC_BOX_PC6_TITLE_CODE		" PC6 "

#define RSC_BOX_STATE_C8_CODE		"             C8            "
#define RSC_BOX_STATE_C7_CODE		"             C7            "
#define RSC_BOX_STATE_C6_CODE		"             C6            "
#define RSC_BOX_STATE_C4_CODE		"             C4            "
#define RSC_BOX_STATE_C3_CODE		"             C3            "

#define RSC_BOX_PKG_STATE_LIMIT_C10_CODE	"            C10            "
#define RSC_BOX_PKG_STATE_LIMIT_C9_CODE 	"             C9            "
#define RSC_BOX_PKG_STATE_LIMIT_C8_CODE 	"             C8            "
#define RSC_BOX_PKG_STATE_LIMIT_C7S_CODE	"            C7S            "
#define RSC_BOX_PKG_STATE_LIMIT_C7_CODE 	"             C7            "
#define RSC_BOX_PKG_STATE_LIMIT_C6R_CODE	"            C6R            "
#define RSC_BOX_PKG_STATE_LIMIT_C6_CODE 	"             C6            "
#define RSC_BOX_PKG_STATE_LIMIT_C4_CODE 	"             C4            "
#define RSC_BOX_PKG_STATE_LIMIT_C3_CODE 	"             C3            "
#define RSC_BOX_PKG_STATE_LIMIT_C2_CODE 	"             C2            "
#define RSC_BOX_PKG_STATE_LIMIT_C1_CODE 	"             C1            "
#define RSC_BOX_PKG_STATE_LIMIT_C0_CODE 	"             C0            "

#define RSC_BOX_DUTY_CYCLE_PCT1_CODE		"           12.50%          "
#define RSC_BOX_DUTY_CYCLE_PCT2_CODE		"           25.00%          "
#define RSC_BOX_DUTY_CYCLE_PCT3_CODE		"           37.50%          "
#define RSC_BOX_DUTY_CYCLE_PCT4_CODE		"           50.00%          "
#define RSC_BOX_DUTY_CYCLE_PCT5_CODE		"           62.50%          "
#define RSC_BOX_DUTY_CYCLE_PCT6_CODE		"           75.00%          "
#define RSC_BOX_DUTY_CYCLE_PCT7_CODE		"           87.50%          "
#define RSC_BOX_EXT_DUTY_CYCLE_PCT1_CODE	"            6.25%          "
#define RSC_BOX_EXT_DUTY_CYCLE_PCT2_CODE	"           12.50%          "
#define RSC_BOX_EXT_DUTY_CYCLE_PCT3_CODE	"           18.75%          "
#define RSC_BOX_EXT_DUTY_CYCLE_PCT4_CODE	"           25.00%          "
#define RSC_BOX_EXT_DUTY_CYCLE_PCT5_CODE	"           31.25%          "
#define RSC_BOX_EXT_DUTY_CYCLE_PCT6_CODE	"           37.50%          "
#define RSC_BOX_EXT_DUTY_CYCLE_PCT7_CODE	"           43.75%          "
#define RSC_BOX_EXT_DUTY_CYCLE_PCT8_CODE	"           50.00%          "
#define RSC_BOX_EXT_DUTY_CYCLE_PCT9_CODE	"           56.25%          "
#define RSC_BOX_EXT_DUTY_CYCLE_PCT10_CODE	"           62.50%          "
#define RSC_BOX_EXT_DUTY_CYCLE_PCT11_CODE	"           68.75%          "
#define RSC_BOX_EXT_DUTY_CYCLE_PCT12_CODE	"           75.00%          "
#define RSC_BOX_EXT_DUTY_CYCLE_PCT13_CODE	"           81.25%          "
#define RSC_BOX_EXT_DUTY_CYCLE_PCT14_CODE	"           87.50%          "

#define RSC_BOX_HWP_TITLE_CODE		" HWP "

#define RSC_BOX_HDC_TITLE_CODE		" HDC "

#define RSC_BOX_EEO_TITLE_CODE		" EEO "

#define RSC_BOX_R2H_TITLE_CODE		" R2H "

#define RSC_BOX_WDT_TITLE_CODE		" WDT "

#define RSC_BOX_POWER_POLICY_1_CODE	"            1           "
#define RSC_BOX_POWER_POLICY_2_CODE	"            2           "
#define RSC_BOX_POWER_POLICY_3_CODE	"            3           "
#define RSC_BOX_POWER_POLICY_4_CODE	"            4           "
#define RSC_BOX_POWER_POLICY_5_CODE	"            5           "
#define RSC_BOX_POWER_POLICY_6_CODE	"            6           "
#define RSC_BOX_POWER_POLICY_7_CODE	"            7           "
#define RSC_BOX_POWER_POLICY_8_CODE	"            8           "
#define RSC_BOX_POWER_POLICY_9_CODE	"            9           "
#define RSC_BOX_POWER_POLICY_10_CODE	"           10           "
#define RSC_BOX_POWER_POLICY_11_CODE	"           11           "
#define RSC_BOX_POWER_POLICY_12_CODE	"           12           "
#define RSC_BOX_POWER_POLICY_13_CODE	"           13           "
#define RSC_BOX_POWER_POLICY_14_CODE	"           14           "

#define RSC_BOX_CFG_TDP_BLANK_CODE	"                   "

#define RSC_BOX_PWR_OFFSET_00_CODE	"              +50 watts             "
#define RSC_BOX_PWR_OFFSET_01_CODE	"              +10 watts             "
#define RSC_BOX_PWR_OFFSET_02_CODE	"               +5 watts             "
#define RSC_BOX_PWR_OFFSET_03_CODE	"               +4 watts             "
#define RSC_BOX_PWR_OFFSET_04_CODE	"               +3 watts             "
#define RSC_BOX_PWR_OFFSET_05_CODE	"               +2 watts             "
#define RSC_BOX_PWR_OFFSET_06_CODE	"               +1 watt              "
#define RSC_BOX_PWR_OFFSET_07_CODE	"               -1 watt              "
#define RSC_BOX_PWR_OFFSET_08_CODE	"               -2 watts             "
#define RSC_BOX_PWR_OFFSET_09_CODE	"               -3 watts             "
#define RSC_BOX_PWR_OFFSET_10_CODE	"               -4 watts             "
#define RSC_BOX_PWR_OFFSET_11_CODE	"               -5 watts             "
#define RSC_BOX_PWR_OFFSET_12_CODE	"              -10 watts             "
#define RSC_BOX_PWR_OFFSET_13_CODE	"              -50 watts             "

#define RSC_BOX_CLAMPING_OFF_COND0_CODE "            Clamping OFF            "
#define RSC_BOX_CLAMPING_OFF_COND1_CODE "          < Clamping OFF >          "
#define RSC_BOX_CLAMPING_ON_COND0_CODE	"            Clamping ON             "
#define RSC_BOX_CLAMPING_ON_COND1_CODE	"          < Clamping ON  >          "

#define RSC_BOX_AMP_OFFSET_00_CODE	"              +50 amps              "
#define RSC_BOX_AMP_OFFSET_01_CODE	"              +10 amps              "
#define RSC_BOX_AMP_OFFSET_02_CODE	"               +5 amps              "
#define RSC_BOX_AMP_OFFSET_03_CODE	"               +4 amps              "
#define RSC_BOX_AMP_OFFSET_04_CODE	"               +3 amps              "
#define RSC_BOX_AMP_OFFSET_05_CODE	"               +2 amps              "
#define RSC_BOX_AMP_OFFSET_06_CODE	"               +1 amp               "
#define RSC_BOX_AMP_OFFSET_07_CODE	"               -1 amp               "
#define RSC_BOX_AMP_OFFSET_08_CODE	"               -2 amp               "
#define RSC_BOX_AMP_OFFSET_09_CODE	"               -3 amp               "
#define RSC_BOX_AMP_OFFSET_10_CODE	"               -4 amp               "
#define RSC_BOX_AMP_OFFSET_11_CODE	"               -5 amps              "
#define RSC_BOX_AMP_OFFSET_12_CODE	"              -10 amps              "
#define RSC_BOX_AMP_OFFSET_13_CODE	"              -50 amps              "

#define RSC_BOX_IDLE_LIMIT_RESET_CODE	"            0     RESET "

#define RSC_CF0_CODE "      ______                ______                  "
#define RSC_CF1_CODE "     / ____/___  ________  / ____/_______  ____ _   "
#define RSC_CF2_CODE "    / /   / __ \\/ ___/ _ \\/ /_  / ___/ _ \\/ __ `/   "
#define RSC_CF3_CODE "   / /___/ /_/ / /  /  __/ __/ / /  /  __/ /_/ /    "
#define RSC_CF4_CODE "   \\____/\\____/_/   \\___/_/   /_/   \\___/\\__, /     "
#define RSC_CF5_CODE "                                           /_/      "

#define RSC_FREQ_UNIT_MHZ_CODE		"(MHz)"
#define RSC_PPIN_CODE			"PPIN#"
#define RSC_PSTATE_CODE 		"P-State"
#define RSC_UNCORE_CODE 		"Uncore"
#define RSC_BOOST_CODE			"Turbo Boost"
#define RSC_TURBO_CODE			"Turbo"
#define RSC_MAX_CODE			"Max"
#define RSC_MIN_CODE			"Min"
#define RSC_TGT_CODE			"TGT"
#define RSC_HWP_CODE			"HWP"
#define RSC_XFR_CODE			"XFR"
#define RSC_CPB_CODE			"CPB"
#define RSC_TDP_CODE			"TDP"
#define RSC_ACT_CODE			"Activ"
#define RSC_XAPIC_CODE			"  xAPIC"
#define RSC_X2APIC_CODE 		" x2APIC"
#define RSC_FIRMWARE_CODE		"Firmware"

#define RSC_TOPOLOGY_HDR_PKG_CODE	"CPU Pkg  Apic"
#define RSC_TOPOLOGY_HDR_SMT_CODE	"  Core/Thread"
#define RSC_TOPOLOGY_HDR_CACHE_CODE	"  Caches     "
#define RSC_TOPOLOGY_HDR_WRBAK_CODE	" (w)rite-Back"
#define RSC_TOPOLOGY_HDR_INCL_CODE	" (i)nclusive "
#define RSC_TOPOLOGY_HDR_EMPTY_CODE	"             "
#define RSC_TOPOLOGY_SUB_ITEM1_CODE	" #   ID   ID "
#define RSC_TOPOLOGY_SUB_ITEM3_CODE	" L1-Inst Way "
#define RSC_TOPOLOGY_SUB_ITEM4_CODE	" L1-Data Way "
#define RSC_TOPOLOGY_SUB_ITEM5_CODE	"     L2  Way "
#define RSC_TOPOLOGY_SUB_ITEM6_CODE	"     L3  Way "
#define RSC_TOPOLOGY_ALT_ITEM1_CODE	"   ID     ID "
#define RSC_TOPOLOGY_ALT_ITEM2_CODE	" CMP ID    ID"
#define RSC_TOPOLOGY_ALT_ITEM3_CODE	"CCD CCX ID/ID"
#define RSC_TOPOLOGY_BSP_COMM_CODE	" Boot Strap Processor "

#define RSC_TECH_HYPERV_NONE_CODE	"          "
#define RSC_TECH_BARE_METAL_CODE	"Bare-Metal"
#define RSC_TECH_HYPERV_XEN_CODE	"       Xen"
#define RSC_TECH_HYPERV_KVM_CODE	"       KVM"
#define RSC_TECH_HYPERV_VBOX_CODE	"VirtualBox"
#define RSC_TECH_HYPERV_KBOX_CODE	"  KVM/VBox"
#define RSC_TECH_HYPERV_VMWARE_CODE	"    VMware"
#define RSC_TECH_HYPERV_HYPERV_CODE	"MS Hyper-V"

#define RSC_PERF_LABEL_VER_CODE 	"PM"
#define RSC_PERF_LABEL_C1E_CODE 	"C1E"
#define RSC_PERF_LABEL_C1A_CODE 	"C1A"
#define RSC_PERF_LABEL_C3A_CODE 	"C3A"
#define RSC_PERF_LABEL_C1U_CODE 	"C1U"
#define RSC_PERF_LABEL_C2U_CODE 	"C2U"
#define RSC_PERF_LABEL_C3U_CODE 	"C3U"
#define RSC_PERF_LABEL_CC6_CODE 	"CC6"
#define RSC_PERF_LABEL_PC6_CODE 	"PC6"
#define RSC_PERF_LABEL_MC6_CODE 	"MC6"
#define RSC_PERF_LABEL_FID_CODE 	"FID"
#define RSC_PERF_LABEL_VID_CODE 	"VID"
#define RSC_PERF_LABEL_HWCF_CODE	"MPERF/APERF"
#define RSC_PERF_LABEL_HWP_CODE 	"HWP"
#define RSC_PERF_LABEL_HDC_CODE 	"HDC"
#define RSC_PERF_LABEL_CFG_CTRL_CODE	"CONFIG"
#define RSC_PERF_LABEL_LOW_CST_CODE	"LIMIT"
#define RSC_PERF_LABEL_IOMWAIT_CODE	"IOMWAIT"
#define RSC_PERF_LABEL_MAX_CST_CODE	"RANGE"
#define RSC_PERF_LABEL_CST_BAR_CODE	"BAR"
#define RSC_PERF_LABEL_MWAIT_IDX_CODE	\
				"#0    #1    #2    #3    #4    #5    #6    #7"

#define RSC_PERF_ENCODING_C0_CODE	" C0"
#define RSC_PERF_ENCODING_C1_CODE	" C1"
#define RSC_PERF_ENCODING_C2_CODE	" C2"
#define RSC_PERF_ENCODING_C3_CODE	" C3"
#define RSC_PERF_ENCODING_C4_CODE	" C4"
#define RSC_PERF_ENCODING_C6_CODE	" C6"
#define RSC_PERF_ENCODING_C6R_CODE	"C6R"
#define RSC_PERF_ENCODING_C7_CODE	" C7"
#define RSC_PERF_ENCODING_C7S_CODE	"C7S"
#define RSC_PERF_ENCODING_C8_CODE	" C8"
#define RSC_PERF_ENCODING_C9_CODE	" C9"
#define RSC_PERF_ENCODING_C10_CODE	"C10"
#define RSC_PERF_ENCODING_UNS_CODE	"UNS"

#define RSC_POWER_LABEL_ODCM_CODE	"ODCM"
#define RSC_POWER_LABEL_PWM_CODE	"PWR MGMT"
#define RSC_POWER_LABEL_BIAS_CODE	"Bias Hint"
#define RSC_POWER_LABEL_EPP_CODE	"HWP EPP"
#define RSC_POWER_LABEL_TJ_CODE 	"TjMax"
#define RSC_POWER_LABEL_DTS_CODE	"DTS"
#define RSC_POWER_LABEL_PLN_CODE	"PLN"
#define RSC_POWER_LABEL_PTM_CODE	"PTM"
#define RSC_POWER_LABEL_TM1_CODE	"TM1"
#define RSC_POWER_LABEL_TM2_CODE	"TM2"
#define RSC_POWER_LABEL_TTP_CODE	"TTP"
#define RSC_POWER_LABEL_HTC_CODE	"HTC"
#define RSC_POWER_LABEL_TDP_CODE	"TDP"
#define RSC_POWER_LABEL_MIN_CODE	"Min"
#define RSC_POWER_LABEL_MAX_CODE	"Max"
#define RSC_POWER_LABEL_PPT_CODE	"PPT"
#define RSC_POWER_LABEL_PL1_CODE	"PL1"
#define RSC_POWER_LABEL_PL2_CODE	"PL2"
#define RSC_POWER_LABEL_EDC_CODE	"EDC"
#define RSC_POWER_LABEL_TDC_CODE	"TDC"
#define RSC_POWER_LABEL_PKG_CODE	"Package"
#define RSC_POWER_LABEL_CORE_CODE	"Core"
#define RSC_POWER_LABEL_UNCORE_CODE	"Uncore"
#define RSC_POWER_LABEL_DRAM_CODE	"DRAM"
#define RSC_POWER_LABEL_PLATFORM_CODE	"Platform"

#define RSC_MEM_CTRL_UNIT_MHZ_CODE	" MHz "
#define RSC_MEM_CTRL_UNIT_MTS_CODE	" MT/s"
#define RSC_MEM_CTRL_UNIT_MBS_CODE	" MB/s"

#define RSC_MEM_CTRL_MTY_CELL_CODE	"     "
#define RSC_MEM_CTRL_CHANNEL_CODE	" Cha "

#define RSC_DDR3_CL_CODE		"   CL"
#define RSC_DDR3_RCD_CODE		"  RCD"
#define RSC_DDR3_RP_CODE		"   RP"
#define RSC_DDR3_RAS_CODE		"  RAS"
#define RSC_DDR3_RRD_CODE		"  RRD"
#define RSC_DDR3_RFC_CODE		"  RFC"
#define RSC_DDR3_WR_CODE		"   WR"
#define RSC_DDR3_RTP_CODE		" RTPr"
#define RSC_DDR3_WTP_CODE		" WTPr"
#define RSC_DDR3_FAW_CODE		"  FAW"
#define RSC_DDR3_B2B_CODE		"  B2B"
#define RSC_DDR3_CWL_CODE		"  CWL"
#define RSC_DDR3_CMD_CODE		" CMD "
#define RSC_DDR3_REFI_CODE		" REFI"
#define RSC_DDR3_DDWRTRD_CODE		" ddWR"
#define RSC_DDR3_DRWRTRD_CODE		" drWR"
#define RSC_DDR3_SRWRTRD_CODE		" srWR"
#define RSC_DDR3_DDRDTWR_CODE		" ddRW"
#define RSC_DDR3_DRRDTWR_CODE		" drRW"
#define RSC_DDR3_SRRDTWR_CODE		" srRW"
#define RSC_DDR3_DDRDTRD_CODE		" ddRR"
#define RSC_DDR3_DRRDTRD_CODE		" drRR"
#define RSC_DDR3_SRRDTRD_CODE		" srRR"
#define RSC_DDR3_DDWRTWR_CODE		" ddWW"
#define RSC_DDR3_DRWRTWR_CODE		" drWW"
#define RSC_DDR3_SRWRTWR_CODE		" srWW"
#define RSC_DDR3_CKE_CODE		" CKE "
#define RSC_DDR3_ECC_CODE		"  ECC"

#define RSC_DDR4_CL_CODE		"   CL"
#define RSC_DDR4_RCD_CODE		"  RCD"
#define RSC_DDR4_RP_CODE		"   RP"
#define RSC_DDR4_RAS_CODE		"  RAS"
#define RSC_DDR4_RRD_CODE		"  RRD"
#define RSC_DDR4_RFC_CODE		"  RFC"
#define RSC_DDR4_WR_CODE		"   WR"
#define RSC_DDR4_RTP_CODE		" RTPr"
#define RSC_DDR4_WTP_CODE		" WTPr"
#define RSC_DDR4_FAW_CODE		"  FAW"
#define RSC_DDR4_B2B_CODE		"  B2B"
#define RSC_DDR4_CWL_CODE		"  CWL"
#define RSC_DDR4_CMD_CODE		" CMD "
#define RSC_DDR4_REFI_CODE		" REFI"
#define RSC_DDR4_RDRD_SCL_CODE		" sgRR"
#define RSC_DDR4_RDRD_SC_CODE		" dgRR"
#define RSC_DDR4_RDRD_SD_CODE		" drRR"
#define RSC_DDR4_RDRD_DD_CODE		" ddRR"
#define RSC_DDR4_RDWR_SCL_CODE		" sgRW"
#define RSC_DDR4_RDWR_SC_CODE		" dgRW"
#define RSC_DDR4_RDWR_SD_CODE		" drRW"
#define RSC_DDR4_RDWR_DD_CODE		" ddRW"
#define RSC_DDR4_WRRD_SCL_CODE		" sgWR"
#define RSC_DDR4_WRRD_SC_CODE		" dgWR"
#define RSC_DDR4_WRRD_SD_CODE		" drWR"
#define RSC_DDR4_WRRD_DD_CODE		" ddWR"
#define RSC_DDR4_WRWR_SCL_CODE		" sgWW"
#define RSC_DDR4_WRWR_SC_CODE		" dgWW"
#define RSC_DDR4_WRWR_SD_CODE		" drWW"
#define RSC_DDR4_WRWR_DD_CODE		" ddWW"
#define RSC_DDR4_CKE_CODE		" CKE "
#define RSC_DDR4_ECC_CODE		"  ECC"

#define RSC_DDR4_ZEN_CL_CODE		"  CL "
#define RSC_DDR4_ZEN_RCD_R_CODE 	" RCDR"
#define RSC_DDR4_ZEN_RCD_W_CODE 	" RCDW"
#define RSC_DDR4_ZEN_RP_CODE		"  RP "
#define RSC_DDR4_ZEN_RAS_CODE		" RAS "
#define RSC_DDR4_ZEN_RC_CODE		"  RC "
#define RSC_DDR4_ZEN_RRD_S_CODE 	" RRDS"
#define RSC_DDR4_ZEN_RRD_L_CODE 	" RRDL"
#define RSC_DDR4_ZEN_FAW_CODE		" FAW "
#define RSC_DDR4_ZEN_WTR_S_CODE 	" WTRS"
#define RSC_DDR4_ZEN_WTR_L_CODE 	" WTRL"
#define RSC_DDR4_ZEN_WR_CODE		"  WR "
#define RSC_DDR4_ZEN_RDRD_SCL_CODE	" clRR"
#define RSC_DDR4_ZEN_WRWR_SCL_CODE	" clWW"
#define RSC_DDR4_ZEN_CWL_CODE		" CWL "
#define RSC_DDR4_ZEN_RTP_CODE		" RTP "
#define RSC_DDR4_ZEN_RDWR_CODE		"RdWr "
#define RSC_DDR4_ZEN_WRRD_CODE		"WrRd "
#define RSC_DDR4_ZEN_WRWR_SC_CODE	"scWW "
#define RSC_DDR4_ZEN_WRWR_SD_CODE	"sdWW "
#define RSC_DDR4_ZEN_WRWR_DD_CODE	"ddWW "
#define RSC_DDR4_ZEN_RDRD_SC_CODE	"scRR "
#define RSC_DDR4_ZEN_RDRD_SD_CODE	"sdRR "
#define RSC_DDR4_ZEN_RDRD_DD_CODE	"ddRR "
#define RSC_DDR4_ZEN_RTR_DLR_CODE	"drRR "
#define RSC_DDR4_ZEN_WTW_DLR_CODE	"drWW "
#define RSC_DDR4_ZEN_WTR_DLR_CODE	"drWR "
#define RSC_DDR4_ZEN_RRD_DLR_CODE	"drRRD"
#define RSC_DDR4_ZEN_REFI_CODE		" REFI"
#define RSC_DDR4_ZEN_RFC1_CODE		" RFC1"
#define RSC_DDR4_ZEN_RFC2_CODE		" RFC2"
#define RSC_DDR4_ZEN_RFC4_CODE		" RFC4"
#define RSC_DDR4_ZEN_RCPB_CODE		" RCPB"
#define RSC_DDR4_ZEN_RPPB_CODE		" RPPB"
#define RSC_DDR4_ZEN_BGS_CODE		"  BGS"
#define RSC_DDR4_ZEN_BGS_ALT_CODE	":Alt "
#define RSC_DDR4_ZEN_BAN_CODE		" Ban "
#define RSC_DDR4_ZEN_RCPAGE_CODE	" Page"
#define RSC_DDR4_ZEN_CKE_CODE		"  CKE"
#define RSC_DDR4_ZEN_CMD_CODE		"  CMD"
#define RSC_DDR4_ZEN_GDM_CODE		"  GDM"
#define RSC_DDR4_ZEN_ECC_CODE		"  ECC"
#define RSC_DDR4_ZEN_MRD_CODE		" MRD:"
#define RSC_DDR4_ZEN_MOD_CODE		" MOD:"
#define RSC_DDR4_ZEN_MRD_PDA_CODE	"PDA  "
#define RSC_DDR4_ZEN_MOD_PDA_CODE	"PDA  "
#define RSC_DDR4_ZEN_STAG_CODE		"STAG "
#define RSC_DDR4_ZEN_PDM_CODE		" PDM "
#define RSC_DDR4_ZEN_PHYWRD_CODE	"Y[WRD"
#define RSC_DDR4_ZEN_PHYWRL_CODE	"  WRL"
#define RSC_DDR4_ZEN_PHYRDL_CODE	" RDL]"
#define RSC_DDR4_ZEN_RDDATA_CODE	"RDDAT"
#define RSC_DDR4_ZEN_PHY_CODE		"A  PH"
#define RSC_DDR4_ZEN_WRMPR_CODE 	"WRMPR"

#define RSC_SYS_REGS_SPACE_CODE 	"    "
#define RSC_SYS_REGS_NA_CODE		"  - "
#define RSC_SYS_REGS_HDR_CPU_CODE	"CPU "
#define RSC_SYS_REG_HDR_FLAGS_CODE	"FLAG"
#define RSC_SYS_REG_HDR_TF_CODE 	" TF "
#define RSC_SYS_REG_HDR_IF_CODE 	" IF "
#define RSC_SYS_REG_HDR_IOPL_CODE	"IOPL"
#define RSC_SYS_REG_HDR_NT_CODE 	" NT "
#define RSC_SYS_REG_HDR_RF_CODE 	" RF "
#define RSC_SYS_REG_HDR_VM_CODE 	" VM "
#define RSC_SYS_REG_HDR_AC_CODE 	" AC "
#define RSC_SYS_REG_HDR_VIF_CODE	" VIF"
#define RSC_SYS_REG_HDR_VIP_CODE	" VIP"
#define RSC_SYS_REG_HDR_ID_CODE 	" ID "
#define RSC_SYS_REG_HDR_CR0_CODE	"CR0:"
#define RSC_SYS_REG_HDR_CR0_PE_CODE	" PE "
#define RSC_SYS_REG_HDR_CR0_MP_CODE	" MP "
#define RSC_SYS_REG_HDR_CR0_EM_CODE	" EM "
#define RSC_SYS_REG_HDR_CR0_TS_CODE	" TS "
#define RSC_SYS_REG_HDR_CR0_ET_CODE	" ET "
#define RSC_SYS_REG_HDR_CR0_NE_CODE	" NE "
#define RSC_SYS_REG_HDR_CR0_WP_CODE	" WP "
#define RSC_SYS_REG_HDR_CR0_AM_CODE	" AM "
#define RSC_SYS_REG_HDR_CR0_NW_CODE	" NW "
#define RSC_SYS_REG_HDR_CR0_CD_CODE	" CD "
#define RSC_SYS_REG_HDR_CR0_PG_CODE	" PG "
#define RSC_SYS_REG_HDR_CR3_CODE	"CR3:"
#define RSC_SYS_REG_HDR_CR3_PWT_CODE	" PWT"
#define RSC_SYS_REG_HDR_CR3_PCD_CODE	" PCD"
#define RSC_SYS_REG_HDR_CR4_CODE	"CR4:"
#define RSC_SYS_REG_HDR_CR4_VME_CODE	" VME"
#define RSC_SYS_REG_HDR_CR4_PVI_CODE	" PVI"
#define RSC_SYS_REG_HDR_CR4_TSD_CODE	" TSD"
#define RSC_SYS_REG_HDR_CR4_DE_CODE	" DE "
#define RSC_SYS_REG_HDR_CR4_PSE_CODE	" PSE"
#define RSC_SYS_REG_HDR_CR4_PAE_CODE	" PAE"
#define RSC_SYS_REG_HDR_CR4_MCE_CODE	" MCE"
#define RSC_SYS_REG_HDR_CR4_PGE_CODE	" PGE"
#define RSC_SYS_REG_HDR_CR4_PCE_CODE	" PCE"
#define RSC_SYS_REG_HDR_CR4_FX_CODE	" FX "
#define RSC_SYS_REG_HDR_CR4_XMM_CODE	"XMM "
#define RSC_SYS_REG_HDR_CR4_UMIP_CODE	"UMIP"
#define RSC_SYS_REG_HDR_CR4_5LP_CODE	" 5LP"
#define RSC_SYS_REG_HDR_CR4_VMX_CODE	" VMX"
#define RSC_SYS_REG_HDR_CR4_SMX_CODE	" SMX"
#define RSC_SYS_REG_HDR_CR4_FS_CODE	" FS "
#define RSC_SYS_REG_HDR_CR4_PCID_CODE	"PCID"
#define RSC_SYS_REG_HDR_CR4_SAV_CODE	" SAV"
#define RSC_SYS_REG_HDR_CR4_KL_CODE	"  KL"
#define RSC_SYS_REG_HDR_CR4_SME_CODE	" SME"
#define RSC_SYS_REG_HDR_CR4_SMA_CODE	" SMA"
#define RSC_SYS_REG_HDR_CR4_PKE_CODE	" PKE"
#define RSC_SYS_REG_HDR_CR4_CET_CODE	" CET"
#define RSC_SYS_REG_HDR_CR4_PKS_CODE	" PKS"
#define RSC_SYS_REG_HDR_CR8_CODE	"CR8:"
#define RSC_SYS_REG_HDR_CR8_TPL_CODE	" TPL"
#define RSC_SYS_REG_HDR_EFCR_CODE	"EFCR"
#define RSC_SYS_REG_HDR_EFCR_LCK_CODE	"LCK "
#define RSC_SYS_REG_HDR_EFCR_VMX_CODE	"VMX^"
#define RSC_SYS_REG_HDR_EFCR_SGX_CODE	"SGX "
#define RSC_SYS_REG_HDR_EFCR_LSE_CODE	"[SEN"
#define RSC_SYS_REG_HDR_EFCR_GSE_CODE	"TER]"
#define RSC_SYS_REG_HDR_EFCR_LSGX_CODE	" [ S"
#define RSC_SYS_REG_HDR_EFCR_GSGX_CODE	"GX ]"
#define RSC_SYS_REG_HDR_EFCR_LMC_CODE	" LMC"
#define RSC_SYS_REG_HDR_EFER_CODE	"EFER"
#define RSC_SYS_REG_HDR_EFER_SCE_CODE	" SCE"
#define RSC_SYS_REG_HDR_EFER_LME_CODE	" LME"
#define RSC_SYS_REG_HDR_EFER_LMA_CODE	" LMA"
#define RSC_SYS_REG_HDR_EFER_NXE_CODE	" NXE"
#define RSC_SYS_REG_HDR_EFER_SVM_CODE	" SVM"
#define RSC_SYS_REG_HDR_EFER_LMS_CODE	" LMS"
#define RSC_SYS_REG_HDR_EFER_FFX_CODE	" FFX"
#define RSC_SYS_REG_HDR_EFER_TCE_CODE	" TCE"
#define RSC_SYS_REG_HDR_EFER_MCM_CODE	" MCM"
#define RSC_SYS_REG_HDR_EFER_WBI_CODE	" WBI"

#define RSC_ISA_3DNOW_CODE		" 3DNow!/Ext [%c/%c]"
#define RSC_ISA_ADX_CODE		"          ADX [%c]"
#define RSC_ISA_AES_CODE		"          AES [%c]"
#define RSC_ISA_AVX_CODE		"  AVX/AVX2 [%c/%c] "
#define RSC_ISA_AVX512_F_CODE		" AVX512-F     [%c]"
#define RSC_ISA_AVX512_DQ_CODE		"    AVX512-DQ [%c]"
#define RSC_ISA_AVX512_IFMA_CODE	"  AVX512-IFMA [%c]"
#define RSC_ISA_AVX512_PF_CODE		"   AVX512-PF [%c] "
#define RSC_ISA_AVX512_ER_CODE		" AVX512-ER    [%c]"
#define RSC_ISA_AVX512_CD_CODE		"    AVX512-CD [%c]"
#define RSC_ISA_AVX512_BW_CODE		"    AVX512-BW [%c]"
#define RSC_ISA_AVX512_VL_CODE		"   AVX512-VL [%c] "
#define RSC_ISA_AVX512_VBMI_CODE	" AVX512-VBMI  [%c]"
#define RSC_ISA_AVX512_VBMI2_CODE	" AVX512-VBMI2 [%c]"
#define RSC_ISA_AVX512_VNMI_CODE	"  AVX512-VNMI [%c]"
#define RSC_ISA_AVX512_ALG_CODE 	"  AVX512-ALG [%c] "
#define RSC_ISA_AVX512_VPOP_CODE	" AVX512-VPOP  [%c]"
#define RSC_ISA_AVX512_VNNIW_CODE	" AVX512-VNNIW [%c]"
#define RSC_ISA_AVX512_FMAPS_CODE	" AVX512-FMAPS [%c]"
#define RSC_ISA_AVX512_VP2I_CODE	" AVX512-VP2I [%c] "
#define RSC_ISA_AVX512_BF16_CODE	" AVX512-BF16  [%c]"
#define RSC_ISA_BMI_CODE		"  BMI1/BMI2 [%c/%c]"
#define RSC_ISA_CLWB_CODE		"         CLWB [%c]"
#define RSC_ISA_CLFLUSH_CODE		" CLFLUSH/O [%c/%c] "
#define RSC_ISA_AC_FLAG_CODE		" CLAC-STAC    [%c]"
#define RSC_ISA_CMOV_CODE		"         CMOV [%c]"
#define RSC_ISA_XCHG8B_CODE		"    CMPXCHG8B [%c]"
#define RSC_ISA_XCHG16B_CODE		"  CMPXCHG16B [%c] "
#define RSC_ISA_F16C_CODE		" F16C         [%c]"
#define RSC_ISA_FPU_CODE		"          FPU [%c]"
#define RSC_ISA_FXSR_CODE		"         FXSR [%c]"
#define RSC_ISA_LSHF_CODE		"   LAHF-SAHF [%c] "
#define RSC_ISA_MMX_CODE		" MMX/Ext    [%c/%c]"
#define RSC_ISA_MWAITX_CODE		" MON/MWAITX [%c/%c]"
#define RSC_ISA_MOVBE_CODE		"        MOVBE [%c]"
#define RSC_ISA_PCLMULDQ_CODE		"   PCLMULQDQ [%c] "
#define RSC_ISA_POPCNT_CODE		" POPCNT       [%c]"
#define RSC_ISA_RDRAND_CODE		"       RDRAND [%c]"
#define RSC_ISA_RDSEED_CODE		"       RDSEED [%c]"
#define RSC_ISA_RDTSCP_CODE		"      RDTSCP [%c] "
#define RSC_ISA_SEP_CODE		" SEP          [%c]"
#define RSC_ISA_SHA_CODE		"          SHA [%c]"
#define RSC_ISA_SSE_CODE		"          SSE [%c]"
#define RSC_ISA_SSE2_CODE		"        SSE2 [%c] "
#define RSC_ISA_SSE3_CODE		" SSE3         [%c]"
#define RSC_ISA_SSSE3_CODE		"        SSSE3 [%c]"
#define RSC_ISA_SSE4_1_CODE		"  SSE4.1/4A [%c/%c]"
#define RSC_ISA_SSE4_2_CODE		"      SSE4.2 [%c] "
#define RSC_ISA_SERIALIZE_CODE		" SERIALIZE    [%c]"
#define RSC_ISA_SYSCALL_CODE		"      SYSCALL [%c]"
#define RSC_ISA_RDPID_FMT1_CODE 	"        RDPID [%c]"
#define RSC_ISA_RDPID_FMT2_CODE 	"       RDPID [%c] "
#define RSC_ISA_UMIP_CODE		"        UMIP [%c] "
#define RSC_ISA_SGX_CODE		"          SGX [%c]"
