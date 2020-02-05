#include "CommunicationFPGA.h"
#include "manip.h"

int main()
{
    Manip fpga;
    int LED[8] = { 0,0,0,0,0,0,0,1 };
    fpga.ActiverLED(LED);
}
