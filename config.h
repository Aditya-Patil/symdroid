bool bEnableSound;
int iSFXVolume;
int iBGMVolume;

bool bHardwareTransform;
bool bTrueColor;

bool bJit;
bool bFastMemory;

void Load(const char *iniFileName = "symdroid.ini");
void Save();
