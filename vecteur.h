
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

Vecteur::Vecteur()
{
    elements = new T*[1];    
    size = 0;
    capacity = 1; 
}

Vecteur::~Vecteur()
{
    delete elements;
}

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

int Vecteur::getCapacity()
{
    return capacity;
}

int Vecteur::getSize()
{
    return size;
}

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

T Vecteur::get(int index)
{
    if(index >= size || index < 0)
    {
        return nullptr;
    }
    return elements[index];
}

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
