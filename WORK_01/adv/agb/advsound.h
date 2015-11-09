
enum {
	ADVSNDBIT_SWEEPSHIFT	= 0,
	ADVSNDBIT_SWEEPDIR		= 3,
	ADVSNDBIT_SWEEPTIME		= 4,

	ADVSNDBIT_LENG			= 0,
	ADVSNDBIT_DUTYCYCLE		= 6,
	ADVSNDBIT_ENVSTEP		= 8,
	ADVSNDBIT_ENVDIR		= 11,
	ADVSNDBIT_ENV			= 12,

	ADVSNDBIT_FREQ			= 0,
	ADVSNDBIT_LENGEN		= 14,
	ADVSNDBIT_RESET			= 15,

	ADVSNDBIT_BANKTYPE		= 5,
	ADVSNDBIT_BANKSEL		= 6,
	ADVSNDBIT_OUTPUT		= 7,

	ADVSNDBIT_VOLRATIO		= 13,
};

#define REG_SOUND1CNT_L		((volatile UINT16 *)0x04000060)
#define REG_SOUND1CNT_H		((volatile UINT16 *)0x04000062)
#define	REG_SOUND1CNT_X		((volatile UINT16 *)0x04000064)
#define REG_SOUND2CNT_L		((volatile UINT16 *)0x04000068)
#define	REG_SOUND2CNT_H		((volatile UINT16 *)0x0400006c)
#define REG_SOUND3CNT_L		((volatile UINT16 *)0x04000070)
#define REG_SOUND3CNT_H		((volatile UINT16 *)0x04000072)
#define	REG_SOUND3CNT_X		((volatile UINT16 *)0x04000074)
#define REG_SOUND4CNT_L		((volatile UINT16 *)0x04000078)
#define REG_SOUND4CNT_H		((volatile UINT16 *)0x0400007c)

#define	REG_SOUNDCNT_L		((volatile UINT16 *)0x04000080)
#define	REG_SOUNDCNT_H		((volatile UINT16 *)0x04000082)
#define	REG_SOUNDCNT_X		((volatile UINT16 *)0x04000084)

#define	REG_SOUNDBIAS		((volatile UINT16 *)0x04000088)

#define REG_WAVE_RAM0		((volatile UINT32 *)0x04000090)
#define REG_WAVE_RAM0_L		((volatile UINT16 *)0x04000090)
#define REG_WAVE_RAM0_H		((volatile UINT16 *)0x04000092)
#define REG_WAVE_RAM1		((volatile UINT32 *)0x04000094)
#define REG_WAVE_RAM1_L		((volatile UINT16 *)0x04000094)
#define REG_WAVE_RAM1_H		((volatile UINT16 *)0x04000096)
#define REG_WAVE_RAM2		((volatile UINT32 *)0x04000098)
#define REG_WAVE_RAM2_L		((volatile UINT16 *)0x04000098)
#define REG_WAVE_RAM2_H		((volatile UINT16 *)0x0400009a)
#define REG_WAVE_RAM3		((volatile UINT32 *)0x0400009c)
#define REG_WAVE_RAM3_L		((volatile UINT16 *)0x0400009c)
#define REG_WAVE_RAM3_H		((volatile UINT16 *)0x0400009e)
