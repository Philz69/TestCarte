
#ifndef VECTEUR_H
#define VECTEUR_H
#include <iostream>
#define PILE 0
#define QUEUE 1
using namespace std;

template<class T>
class Vecteur;

template<class T>
ostream& operator<<(ostream &s, Vecteur<T> &v);

template<class T>
class Vecteur
{
    public:
        Vecteur();
        ~Vecteur();
        int getCapacity();
        int getSize(); 
        int getIndex(); 
		void setMode(int i);
		void setIndex(int i);
		T getCurrent();
        bool isEmpty();
        void operator+=(T element);
        T del(int index);
        T operator[](int index);
        void operator ++();
        void operator --();
        void operator ++(int);
        void operator --(int);
        friend ostream& operator<< <> (ostream &s, Vecteur<T> &v);
        void empty();
    private:
        T *elements;
        int doubleCapacity();
        int capacity;
        int size;
        int index;
		int mode;
		int mode;
};

template<class T>
Vecteur<T>::Vecteur()
{
    elements = new T[1];    
    size = 0;
    capacity = 1; 
    index = 0;
}

template<class T>
Vecteur<T>::~Vecteur()
{
    delete elements;
}

template<class T>
int Vecteur<T>::doubleCapacity()
{
    capacity = capacity * 2;
    T *tmp;
    tmp = new T[capacity];
    for(int i = 0; i < size; i++)
    {
       tmp[i] = elements[i];
    } 
   delete elements;
   elements = tmp;
   return capacity;
}

template<class T>
int Vecteur<T>::getCapacity()
{
    return capacity;
}

template<class T>
int Vecteur<T>::getSize()
{
    return size;
}

template<class T>
bool Vecteur<T>::isEmpty()
{
    if(size == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

template<class T>
void Vecteur<T>::operator+=(T element)
{
    if(size == capacity)
    {
        capacity = doubleCapacity();
    } 
	if (mode == QUEUE)
	{
		elements[size] = element;
		size++;
	}
	if (mode == PILE)
	{
		tmp = new T*;
		for (int i = 0; i < size; i++)
		{
			tmp[size - i] = elements[i];	
		}
		tmp[0] = element;
		size++;
	}
}

template<class T>
T Vecteur<T>::del(int index)
{
    if(index >= size || index < 0)
    {
        return NULL;
    }

    T tmp = elements[index];
    for(int i = index; i < size - 1; i++)
    {
        elements[i] = elements[i + 1];
    }
    elements[getSize() - 1] = nullptr;
    size = size - 1;
    return tmp;
}

template<class T>
T Vecteur<T>::operator[](int index)
{
    if(index >= size || index < 0)
    {
        return NULL;
    }
    return elements[index];
}

template<class T>
void Vecteur<T>::empty()
{
    for(int i = 0; i < size; i++)
    {
        delete elements[i];
        elements[i] = nullptr;
    }
    size = 0;
	index = 0;
}

template<class T>
ostream& operator<<(ostream &s, Vecteur<T> &v)
{
    for(int i = 0; i < v.size; i++)
    {
        s << v.elements[i] << endl;
    }
	return s;
}

template<class T>
void Vecteur<T>::operator ++()
{
	if (index < size - 1)
	{
		index++;
	}
}
template<class T>
void Vecteur<T>::operator ++(int)
{
	if (index < size - 1)
	{
		index++;
	}
}

template<class T>
void Vecteur<T>::operator --()
{
	if (index > 0)
	{
		index--;
	}
}

template<class T>
void Vecteur<T>::operator --(int)
{
	if (index > 0)
	{
		index--;
	}
}

template<class T>
int Vecteur<T>::getIndex()
{
    return index;
}

template<class T>
void Vecteur<T>::setIndex(int i)
{
	index = i;
}


template<class T>
T Vecteur<T>::getCurrent()
{
	return elements[index];
}

template<class T>
void Vecteur<T>::setMode(int i)
{
	mode = i;
}

ostream& operator<<(ostream &s,  const DonneesTest * donnees) 
{
      s << "Type test : "               << donnees->typeTest   << endl
		<< "Adresse switches : " << dec << donnees->registreSW << endl
		<< "Retour switches : "  << dec << donnees->retourSW   << " (" << hex << donnees->retourSW << ")" << endl
		<< "Etat switches : "    << dec << donnees->etatSW     << " (" << hex << donnees->etatSW << ")" << endl
		<< "Adresse leds : "     << dec << donnees->registreLD << endl
		<< "Valeur leds : "      << dec << donnees->valeurLD   << " (" << hex << donnees->valeurLD << ")" << endl
		<< "Etat leds : "        << dec << donnees->etatLD     << " (" << hex << donnees->etatLD << ")" << endl;
 return s;
}

ostream& operator<<(ostream &s, const DonneesTest &donnees)
{
	s << "Type test : " << donnees.typeTest << endl
		<< "Adresse switches : " << donnees.registreSW << endl
		<< "Retour switches : " << donnees.retourSW << " (" << hex << donnees.retourSW << ")" << endl
		<< "Etat switches : " << donnees.etatSW << " (" << hex << donnees.etatSW << ")" << endl
		<< "Adresse leds : " << donnees.registreLD << endl
		<< "Valeur leds : " << donnees.valeurLD << " (" << hex << donnees.valeurLD << ")" << endl
		<< "Etat leds : " << donnees.etatLD << " (" << hex << donnees.etatLD << ")" << endl;
	return s;
}
#endif