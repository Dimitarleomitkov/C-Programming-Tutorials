#include "Food.h"
#include <iostream>

using namespace std;

template <class T>
// The function template parameter is the same as for the class
Food<T>::Food (T FirstVar, T SecondVar) : firstVar (FirstVar), secondVar (SecondVar)
{
    // ctor
}

template <class T>
T Food<T>::bigger()
{
    if (firstVar > secondVar) {
        return firstVar;
    } else {
        return secondVar;
    }
}
