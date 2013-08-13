#include "CPU.cpp"
#include "gpu.cpp"
#include "SDpath.py"
#include "config.cpp"

unsigned char delay_timer;

void symdroid::openfile();
{
    #include "filebrowser.py"
    return 0;
}

void symdroid::emulateCycle()
{
    if(delay_timer > 0)
    --delay_timer;
}

void symdroid::initialize()
{
    opcode = 0;
    I = 0;
    sp = 0;
}

symdroid::openfile();
symdroid::emulateCycle();
symdroid::initialize();

return 0;
