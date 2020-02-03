
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
        void operator=(T element);
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
Vecteur<T>::Vecteur()
{
    elements = new T[1];    
    size = 0;
    capacity = 1; 
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
void Vecteur<T>::operator=(T element)
{
    if(size == capacity)
    {
        capacity = doubleCapacity();
    } 
    elements[size] = element; 
    size++;
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
T Vecteur<T>::get(int index)
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
}

#endif
