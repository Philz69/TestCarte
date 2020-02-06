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
	lireRegistre(8, valeur);
	return(valeur);
}

int Manip::LireBouton()
{
	int valeur = 0;
    lireRegistre(10, valeur);
	return(valeur);
}

bool Manip::ActiverLED(int TableauLED)
{
	
    ecrireRegistre(10,TableauLED);
	return(1);
	
}



