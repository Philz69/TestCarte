#include "manip.h"
#include "vecteur.h"

class Tests
{
public:
    Tests();
    ~Tests();
    void testsVecteur(); 
    void testsFPGA(); 
};

Tests::Tests()
{

}
	
Tests::~Tests()
{

}


void Tests::testsVecteur()
{
    cout << "--- Test d'operateur += ---" << endl;
    Vecteur<int> vecteurTest;
    cout << "Grosseur avant ajout: " << vecteurTest.getSize() << endl;
    for (int i = 0; i < 10; i++)
    {
        vecteurTest += i;
    }

    cout << "Grosseur apres ajout: " << vecteurTest.getSize() << endl;

    cout << "--- Test d'operateur[] ---" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "vecteurTest[" << i << "] = " << vecteurTest[i] << endl;
    }

    cout << "--- Test d'index ---" << endl;
    cout << vecteurTest.getIndex() << endl;
    vecteurTest++;
    cout << "vecteurTest++ -> " << vecteurTest.getIndex() << endl;
    vecteurTest--;
    cout << "vecteurTest++ -> " << vecteurTest.getIndex() << endl;

    cout << "--- Test d'operateur << ---" << endl;
    cout << vecteurTest;
}

void Tests::testsFPGA()
{
	Manip fpga;
   //int LED[8] = { 1,0,0,1,0,0,0,1 };
    //fpga.ActiverLED(LED);
}
