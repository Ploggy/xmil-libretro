
#define	IDM_MAINMENU	128

#define	MAKE_MENUID(a, b)	((a << 16) | b)

// --------------------------------------------------------------- system menu

enum {
	IDM_APPLE			= 128,
	IDM_EMULATE			= 129,
	IDM_EDIT			= 130,
	IDM_STATSAVE		= 131,
	IDM_FDD0			= 132,
	IDM_FDD1			= 133,
	IDM_FDD2			= 134,
	IDM_FDD3			= 135,
	IDM_IPLROM			= 136,
	IDM_DIPSW			= 137,
	IDM_SCREEN			= 138,
	IDM_DEVICE			= 139,
	IDM_OTHER			= 140,

	IDM_ABOUT			= MAKE_MENUID(IDM_APPLE, 1),

	IDM_IPLRESET		= MAKE_MENUID(IDM_EMULATE, 1),
	IDM_NMIRESET		= MAKE_MENUID(IDM_EMULATE, 2),
	IDM_CONFIG			= MAKE_MENUID(IDM_EMULATE, 4),
	IDM_NEWDISK			= MAKE_MENUID(IDM_EMULATE, 5),
	IDM_EXIT			= MAKE_MENUID(IDM_EMULATE, 7),

	IDM_FDD0OPEN		= MAKE_MENUID(IDM_FDD0, 1),
	IDM_FDD0EJECT		= MAKE_MENUID(IDM_FDD0, 3),

	IDM_FDD1OPEN		= MAKE_MENUID(IDM_FDD1, 1),
	IDM_FDD1EJECT		= MAKE_MENUID(IDM_FDD1, 3),

	IDM_FDD2OPEN		= MAKE_MENUID(IDM_FDD2, 1),
	IDM_FDD2EJECT		= MAKE_MENUID(IDM_FDD2, 3),

	IDM_FDD3OPEN		= MAKE_MENUID(IDM_FDD3, 1),
	IDM_FDD3EJECT		= MAKE_MENUID(IDM_FDD3, 3),

	IDM_TURBOZ			= MAKE_MENUID(IDM_IPLROM, 1),
	IDM_TURBO			= MAKE_MENUID(IDM_IPLROM, 2),
	IDM_X1ROM			= MAKE_MENUID(IDM_IPLROM, 3),

	IDM_BOOT2D			= MAKE_MENUID(IDM_DIPSW, 1),
	IDM_BOOT2HD			= MAKE_MENUID(IDM_DIPSW, 2),
	IDM_HIGHRES			= MAKE_MENUID(IDM_DIPSW, 4),
	IDM_LOWRES			= MAKE_MENUID(IDM_DIPSW, 5),

	IDM_WIDTH80			= MAKE_MENUID(IDM_SCREEN, 1),
	IDM_WIDTH40			= MAKE_MENUID(IDM_SCREEN, 2),
	IDM_DISPSYNC		= MAKE_MENUID(IDM_SCREEN, 4),
	IDM_RASTER			= MAKE_MENUID(IDM_SCREEN, 5),
	IDM_NOWAIT			= MAKE_MENUID(IDM_SCREEN, 6),
	IDM_AUTOFPS			= MAKE_MENUID(IDM_SCREEN, 8),
	IDM_60FPS			= MAKE_MENUID(IDM_SCREEN, 9),
	IDM_30FPS			= MAKE_MENUID(IDM_SCREEN, 10),
	IDM_20FPS			= MAKE_MENUID(IDM_SCREEN, 11),
	IDM_15FPS			= MAKE_MENUID(IDM_SCREEN, 12),

	IDM_KEY				= MAKE_MENUID(IDM_DEVICE, 1),
	IDM_JOY1			= MAKE_MENUID(IDM_DEVICE, 2),
	IDM_JOY2			= MAKE_MENUID(IDM_DEVICE, 3),
	IDM_FMBOARD			= MAKE_MENUID(IDM_DEVICE, 5),
	IDM_JOYSTICK		= MAKE_MENUID(IDM_DEVICE, 6),
	IDM_MOUSE			= MAKE_MENUID(IDM_DEVICE, 7),
	IDM_8MHZ			= MAKE_MENUID(IDM_DEVICE, 8),
	IDM_SEEKSND			= MAKE_MENUID(IDM_DEVICE, 10),

	IDM_BMPSAVE			= MAKE_MENUID(IDM_OTHER, 1),
	IDM_OPMLOG			= MAKE_MENUID(IDM_OTHER, 2),
	IDM_DISPCLOCK		= MAKE_MENUID(IDM_OTHER, 3),
	IDM_DISPFRAME		= MAKE_MENUID(IDM_OTHER, 4),
	IDM_JOYX			= MAKE_MENUID(IDM_OTHER, 5),
	IDM_RAPID			= MAKE_MENUID(IDM_OTHER, 6),
	IDM_Z80SAVE			= MAKE_MENUID(IDM_OTHER, 7)
};


// -------------------------------------------------------------------- dialog

enum {
	IDOK				= 1,
	IDCANCEL			= 2,

	IDD_ABOUT			= 128,
	IDD_VERSION			= 4,

	IDD_RESUMEERROR		= 129,

	IDD_RESUMEWARNING	= 130,
	IDC_RESUMEEXIT		= 3,
	IDC_RESUMEREASON	= 6,

	IDD_CONFIGURE		= 131,
	IDC_RATE11			= 5,
	IDC_RATE22			= 6,
	IDC_RATE44			= 7,
	IDC_SOUNDBUF		= 9,
	IDC_SKIPLINE		= 11,
	IDC_SKIPLIGHT		= 12,

	IDD_NEWFDDDISK		= 132,
	IDC_DISKLABEL		= 4,
	IDC_MAKE2DD			= 6,
	IDC_MAKE2HD			= 7
};


// ------------------------------------------------------------------ Messages

enum {
	IDT_TITLE			= 128,
	IDT_NEWDISK			= 129,
	IDT_NEWHDDDISK		= 130
};

