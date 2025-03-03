

enum ctrlcmd{
	//WRITE_CMD_BASE = 0,
	//SPEED_UP = WRITE_CMD_BASE,
	//SPEED_DOWN,
	//TURN_LEFT,
	//TURN_RIGHT,
	//TURN_DIRECT,
//	START,
//	STOP,
	OPERATE_CAR_LEFT = 7,
//	ENTER_FOLLOW_ROAD_MODE,
//	EXIT_FOLLOW_ROAD_MODE,
	//add by zulongpan July 6,2013
	ENTER_REAL_CONTROL_MODE = 10,
	ENTER_AUTO_CONTROL_MODE,
	OPERATE_CAR_RIGHT =13,
	
	//end add by zulongp

	UDP_DATA_ACQ_BASE = 0x100,
	ACQUIRE_CAMERA_IMAGE = UDP_DATA_ACQ_BASE,
	ACQUIRE_CAMERA_VIDEO_START,
	ACQUIRE_CAMERA_VIDEO_STOP,

	TCP_DATA_ACQ_BASE = 0x200,
	ACQUIRE_ROBOT_INFO = TCP_DATA_ACQ_BASE,

	SET_ARM_BASE = 0x300,
	SET_LCD_BASE = (SET_ARM_BASE + 0),
	SET_LCD_WITH_PIC = (SET_LCD_BASE + 0),
	SET_LCD_CLR_SCREEN = (SET_LCD_BASE + 1),
	SET_LCD_SHOW_STRING = (SET_LCD_BASE + 2),
	SET_LCD_SHOW_CAMREA_START = (SET_LCD_BASE + 3),
	SET_LCD_SHOW_CAMREA_STOP = (SET_LCD_BASE + 4),
};
