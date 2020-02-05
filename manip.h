#pragma once
#include <iostream>
#include "CommunicationFPGA.h"


class Manip :public CommunicationFPGA
{
private:

public:
	Manip();
	~Manip();
	bool ActiverLED(int* TableauLED);
	int* LireSwitch();
	int* LireBouton();
	
};



Manip::Manip()
{
	;
}

Manip::~Manip()
{
	;
}

int* Manip::LireSwitch()
{
	int valeur=0;
	int Switch[8] = { 0,0,0,0,0,0,0,0 };
	lireRegistre(8,valeur);
	if (valeur & 00000001 == 00000001) Switch[0] = 1;
	if (valeur & 00000010 == 00000010) Switch[1] = 1;
	if (valeur & 00000100 == 00000100) Switch[2] = 1;
	if (valeur & 00001000 == 00001000) Switch[3] = 1;
	if (valeur & 00010000 == 00010000) Switch[4] = 1;
	if (valeur & 00100000 == 00100000) Switch[5] = 1;
	if (valeur & 01000000 == 01000000) Switch[6] = 1;
	if (valeur & 10000000 == 10000000) Switch[7] = 1;
	return(Switch);
}

int* Manip::LireBouton()
{
	int valeur = 0;
	int Bouton[4] = { 0,0,0,0 };
    lireRegistre(10, valeur);
	if(valeur & 0001 == 0001) Bouton[0] = 1;
	if(valeur & 0010 == 0010) Bouton[1] = 1;
	if(valeur & 0100 == 0100) Bouton[2] = 1;
	if(valeur & 1000 == 1000) Bouton[3] = 1;
	return(Bouton);
}

bool Manip::ActiverLED(int* TableauLED)
{
	int bit = 0;
	if (TableauLED[0] == 1) bit += 1;
	if (TableauLED[1] == 1) bit += 2;
	if (TableauLED[2] == 1) bit += 4;
	if (TableauLED[3] == 1) bit += 8;
	if (TableauLED[4] == 1) bit += 16;
	if (TableauLED[5] == 1) bit += 32;
	if (TableauLED[6] == 1) bit += 64;
	if (TableauLED[7] == 1) bit += 128;
    ecrireRegistre(10, bit);
	return(1);
	
}



