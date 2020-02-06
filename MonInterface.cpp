/*
*   Voir fichier d'entête pour informations.
*   
*   $Author: bruc2001 $
*   $Date: 2018-02-13 08:54:36 -0500 (mar., 13 févr. 2018) $
*   $Revision: 108 $
*   $Id: MonInterface.cpp 108 2018-02-13 13:54:36Z bruc2001 $
*
*   Copyright 2013 Département de génie électrique et génie informatique
*                  Université de Sherbrooke  
*/
#include <QApplication>
#include <QStyleFactory>
#include "MonInterface.h"

int main(int argc, char ** argv)
{
	QApplication app(argc, argv);

	MonInterface gui("TestVisiTest V5.1");

	app.exec();
}

MonInterface::MonInterface(const char * theName) : VisiTest(theName)
{
	donnee.typeTest = 1;
	donnee.registreSW = 8;
	donnee.retourSW = 1;

	donnee.registreLD = 10;
	donnee.valeurLD = 1;

	donnee.etatLD = 1;
	donnee.etatSW = 1;

	resetTest();
	resetArchive();
}

void MonInterface::testSuivant()
{
	
	if (donnee.typeTest == 1)
	{
		
		donnee.registreSW = 8;
		donnee.retourSW = fpga.LireSwitch();
		donnee.registreLD = 10;
		donnee.etatLD= fpga.LireSwitch();
		donnee.etatSW = fpga.LireSwitch();
		

		donnee.etatLD= fpga.LireSwitch();
		fpga.ActiverLED(fpga.LireSwitch());
		 

	}

	 if (donnee.typeTest == 2)
	{
		int count = 0;
		donnee.registreSW = 8;
		donnee.retourSW = fpga.LireSwitch();
		donnee.etatSW = fpga.LireSwitch();
		donnee.registreLD = 10;
		
		if ((fpga.LireSwitch() & 128) == 128)  count++;
		if ((fpga.LireSwitch() & 64) == 64) count++;
		if ((fpga.LireSwitch() & 32) == 32) count++;
		if ((fpga.LireSwitch() & 16) == 16) count++;
		if ((fpga.LireSwitch() & 8 )== 8) count++;
		if ((fpga.LireSwitch() & 4 )== 4) count++;
		if ((fpga.LireSwitch() & 2 )== 2) count++;
		if ((fpga.LireSwitch() & 1) == 1) count++;
		if (count == 0)
		{
			donnee.valeurLD = 0;
			fpga.ActiverLED(0);
			donnee.etatLD = 0;
		}
		else if (count % 2 == 0)
		{
			fpga.ActiverLED(0xff);
			donnee.valeurLD = 0xff;
			donnee.etatLD = 0xff;
		}
		else
		{
			fpga.ActiverLED(0);
			donnee.valeurLD = 0;
			donnee.etatLD = 0;
		}
		

	}

	 if (donnee.typeTest == 3)
	{
		 int etatLED = 0;
		 donnee.registreSW = 8;
		 donnee.retourSW = fpga.LireSwitch();
		 donnee.etatSW = fpga.LireSwitch();
		 donnee.registreLD = 10;
		donnee.etatSW = fpga.LireSwitch();

		if ((fpga.LireSwitch() & 128) == 128)
		{

			etatLED = 0xff;
			
		}
		else if ((fpga.LireSwitch() & 64) == 64)
		{
			etatLED = 0x7f;
		}
		else if ((fpga.LireSwitch() & 32) == 32)
		{
			etatLED = 0x3f;
		}
		else if ((fpga.LireSwitch() & 16) == 16)
		{
			etatLED = 0x1f;
		}
		else if ((fpga.LireSwitch() & 8) == 8)
		{
			etatLED = 0x0f;
		}
		else if ((fpga.LireSwitch() & 4) == 4)
		{
			etatLED = 0x07;	
		}
		else if ((fpga.LireSwitch() & 2) == 2)
		{
			etatLED = 0x03;
		}
		else if ((fpga.LireSwitch() & 1) == 1)
		{
			etatLED = 0x01;			
		}
		
		donnee.etatLD = etatLED;
		fpga.ActiverLED(etatLED);
	}
	
	


	setTest(donnee);
	setArchive(donnee);
	setArchive(donnee.typeTest, donnee.registreSW);
	if (donnee.typeTest == 3) donnee.typeTest = 0;
	donnee.typeTest++;

   /*if(donnee.etatLD > 0x80)
	{
		donnee.typeTest = 1;

		donnee.registreSW = 8;
		donnee.retourSW = 1;

		donnee.registreLD = 10;
		donnee.valeurLD = 1;

		donnee.etatLD = 1;
		donnee.etatSW = 1;
	}
	else
	{
		donnee.typeTest++;
		
		//donnee.registreSW++;
		donnee.retourSW <<= 1;

		//donnee.registreLD++;
		donnee.valeurLD <<= 1;

		donnee.etatLD <<= 1;
		donnee.etatSW <<= 1;
	}*/
  
   message("be");
}

void MonInterface::demarrer()
{
	Tests tests;
	tests.testsFPGA();
	message("Demarer");
	Manip fpga;
	

}



