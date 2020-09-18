#ifndef __VOLUMEMANAGER_H__
#define	__VOLUMEMANAGER_H__

void WT2003S_VolumeUp(void);
void WT2003S_VolumeDown(void);

typedef struct {
	void (*VolumeUp)(void);
	void (*VolumeDown)(void);	
} WT2003S_Volume_Driver;

typedef struct WT2003S_VolumeData {
	
	WT2003S_Volume_Driver *currentVolume;
	
} WT2003S_VolumeData;

#endif;