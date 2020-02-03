#include "vecteur.h"
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    cout << "TEST" << endl;
    Vecteur<int> vecteurTest;
    cout << vecteurTest.getSize() << endl;
    for (int i = 0; i < 10; i++)
    {
        vecteurTest += i;
    }

    cout << vecteurTest.getSize() << endl;
    cout << "TEST" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << vecteurTest[i] << endl;
    }
    return 0;
}
