#pragma once
#include <iostream>
#include "CommunicationFPGA.h"



class Manip :public CommunicationFPGA
{
private:

public:
	Manip();
	~Manip();
	bool ActiverLED(int TableauLED);
	int LireSwitch();
	int LireBouton();
	
};



Manip::Manip()
{
}

Manip::~Manip()
{
}

int Manip::LireSwitch()
{
	int valeur=0;
	//int Switch = 0;
	lireRegistre(8, valeur);
	/*if ((valeur & 1) == 1) Switch += 1;
	if (valeur & 2== 2) Switch += 2;
	if (valeur & 4== 4) Switch += 4;
	if (valeur & 8== 8) Switch += 8;
	if (valeur & 16== 16) Switch += 16;
	if (valeur & 32== 32) Switch += 32;
	if (valeur & 64== 64) Switch += 64;
	if (valeur & 128== 128) Switch += 128;*/
	//std::cout<<std::hex <<valeur<<std::endl;
	return(valeur);
}

int Manip::LireBouton()
{
	int valeur = 0;
	//int Bouton[4] = { 0,0,0,0 };
    lireRegistre(10, valeur);
	/*if(valeur & 0001 == 0001) Bouton[0] = 1;
	if(valeur & 0010 == 0010) Bouton[1] = 1;
	if(valeur & 0100 == 0100) Bouton[2] = 1;
	if(valeur & 1000 == 1000) Bouton[3] = 1;*/
	return(valeur);
}

bool Manip::ActiverLED(int TableauLED)
{
	//int bit = 0;
	/*if (TableauLED & 1 == 1) bit += 1;
	if (TableauLED& 2== 2) bit += 2;
	if (TableauLED & 4 == 4) bit += 4;
	if (TableauLED &8 == 8) bit += 8;
	if (TableauLED & 16 == 16) bit += 16;
	if (TableauLED &32 == 32) bit += 32;
	if (TableauLED &64==64) bit += 64;
	if (TableauLED &128== 128) bit += 128;*/
    ecrireRegistre(10,TableauLED);
	return(1);
	
}



