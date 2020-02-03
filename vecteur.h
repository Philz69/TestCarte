
#ifndef VECTEUR_H
#define VECTEUR_H

#include <iostream>

template<class T>
class Vecteur
{
    public:
        Vecteur();
        ~Vecteur();
        int getCapacity();
        int getSize(); 
        bool isEmpty();
        bool add(T element);
        T del(int index);
        T get(int index);
        void empty();
    private:
        T *elements;
        int doubleCapacity();
        int capacity;
        int size;
};

template<class T>
Vecteur::Vecteur()
{
    elements = new T*[1];    
    size = 0;
    capacity = 1; 
}

template<class T>
Vecteur::~Vecteur()
{
    delete elements;
}

template<class T>
int Vecteur::doubleCapacity()
{
    capacity = capacity * 2;
    T *tmp;
    tmp = new T*[capacity];
    for(int i = 0; i < size; i++)
    {
       tmp[i] = elements[i];
    } 
   delete elements;
   elements = tmp;
   return capacity;
}

template<class T>
int Vecteur::getCapacity()
{
    return capacity;
}

template<class T>
int Vecteur::getSize()
{
    return size;
}

template<class T>
bool Vecteur::isEmpty()
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
bool Vecteur::add(T element)
{
    if(size == capacity)
    {
        capacity = doubleCapacity();
    } 
    elements[size] = element; 
    size++;
    return true;
}

template<class T>
T Vecteur::del(int index)
{
    if(index >= size || index < 0)
    {
        return nullptr;
    }

    T* tmp = elements[index];
    for(int i = index; i < size - 1; i++)
    {
        elements[i] = elements[i + 1];
    }
    elements[getSize() - 1] = nullptr;
    size = size - 1;
    return tmp;
}

template<class T>
T Vecteur::get(int index)
{
    if(index >= size || index < 0)
    {
        return nullptr;
    }
    return elements[index];
}

template<class T>
void Vecteur::empty()
{
    for(int i = 0; i < size; i++)
    {
        delete elements[i];
        elements[i] = nullptr;
    }
    size = 0;
}

#endif
