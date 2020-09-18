
#include "VolumeManager.h"

static WT2003S_VolumeData TheVolume = {	
	WT2003S_VolumeUp,
	WT2003S_VolumeDown,
};

static WT2003S_VolumeData self = {.currentVolume = &TheVolume };

void LLT_Driver_Initialize(void)
{	
	self.currentVolume = NULL;
}

LLT_Driver *LLT_Driver_GetInterface(void)
{
	printf("LLT Driver Interface Init\n\n");
	
	return ((LLT_Driver *)&TheLLT);
}

void WT2003S_VolumeUp(void)
{
	
}

void WT2003S_VolumeDown(void)
{
	
}