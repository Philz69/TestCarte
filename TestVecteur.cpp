#include "vecteur.h"
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
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
    return 0;
}
