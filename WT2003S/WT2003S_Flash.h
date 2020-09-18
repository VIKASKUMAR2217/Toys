
#ifndef __WT2003S_FLASH__
#define __WT2003S_FLASH__

#define WT2003S_SPIFLASH_START_CODE 			0x7E
#define WT2003S_SPIFLASH_END_CODE 				0xEF

#define WT2003S_SPIFLASH_INDEX_PLAY				0xA0
#define WT2003S_SPIFLASH_ROOT_FILENAME			0xA1
#define WT2003S_SPIFLASH_PLAY_OR_PAUSE			0xAA
#define WT2003S_SPIFLASH_STOP					0xAB
#define WT2003S_SPIFLASH_NEXT_SONG				0xAC
#define WT2003S_SPIFLASH_PREVIOUS_SONG			0xAD
#define WT2003S_SPIFLASH_SET_VOLUME_LEVEL		0xAE
#define WT2003S_SPIFLASH_PLAY_MODE				0xAF

#define WT2003S_SPIFLASH_INTER_CUT_PLAY			0xB1	/* Only support inter-cut function when playing audio files in SD card or U disk */
#define WT2003S_SPIFLASH_EQ_MODE				0xB2
#define WT2003S_SPIFLASH_PLAYEND_MP3_CURR_POS	0xBA

#define WT2003S_SPIFLASH_MAX_VOLUME 			0x1F
#define WT2003S_SPIFLASH_MIN_VOLUME 			0x00
#define WT2003S_SPIFLASH_GET_VOLUME				0XC1	/* Volume value(00-1F) */

#define WT2003S_SPIFLASH_CURR_MP3_TRACK_STATE	0XC2
#define WT2003S_SPIFLASH_GET_PLAYING_TRACK		0XC9	/* return in byte */
#define WT2003S_SPIFLASH_GET_SONG_NAME_PLAYING 	0xCB

typedef enum {
	COMMAND_STATUS_OK 				= 0X00, /* command execution SUCCESS */
	COMMAND_STATUS_FAIL 			= 0X01, /* command error, no execution */
	COMMAND_STATUS_EMP				= 0X03,	/* no such file */
	COMMAND_STATUS_FLASH_NOT_EXIST 	= 0X05, /* Flash does not exist or FLASH data abnormal */
}COMMAND_STATUS;

typedef enum {
    PLAY_SINGLE		   	= 0x00, /* Single play, no loop playback --Default */	
    SINGLE_LOOP_PLAY   	= 0x01, /* Single loop play mode */
    LOOP_PLAY    		= 0x02, /* All audio loop play mode */
    RANDOM_PLAY   		= 0x03, /* Random play mode */
} PLAY_MODE;

typedef enum {
	EQ_MODE_NORMAL 	= 0x00,
	EQ_MODE_POP 	= 0x01,
	EQ_MODE_ROCK 	= 0x02,
	EQ_MODE_JAZZ 	= 0x03,
	EQ_MODE_CLASSIC = 0x04,
	EQ_MODE_BASE 	= 0x05,
}EQ_MODE;

typedef enum {
	NO_RETURN 	= 0x00, /* no need to return information --Default */
	RETURN		=0x01,	/* need to return information */
}CURR_SONG_POS;

typedef enum {
	UDISK		= 0x02,
	SDCARD		= 0x01,
	SPIFLASH 	= 0x00,
}STORAGE_TYPE;

typedef enum {
	PAUSE	=	0x03,
	STOP	=	0x02,
	PLAY	=	0X01,
} MP3_PLAYING_STATUS;

#endif;











