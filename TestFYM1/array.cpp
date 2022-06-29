#include <stdio.h>
#include <iostream>
using namespace std;
#include "array.h"
#define size 6


void array::init(int tab[])
{

    for (size_t i = 1; i < size; i++)
    {
        tab[i] = i;
    }
}

void array::affiche(int tab[])
{
    for (size_t i = 1; i < size; i++)
    {
        cout << tab[i] << " ";
    }
}

void array::square(int tab[])
{
    cout << endl<< "SQUARE : ";
    for (size_t i = 1; i < size; i++)
    {
        tab[i] = i * i;
    }
}

void array::cube(int tab[])
{
    cout << endl
         << "CUBE : ";
    for (size_t i = 1; i < size; i++)
    {
        tab[i] = i * i * i;
    }
}
void array::average(int tab[])
{
    int res, cpt = 0;
    cout << endl
         << "AVERAGE : ";
    for (size_t i = 1; i < size; i++)
    {
        res = res + i;
        cpt++;
    }
    cout << res / cpt;
}

void array::sum(int tab[])
{
    int res = 0;
    cout << endl
         << "SUM : ";
    for (size_t i = 1; i < size; i++)
    {
        res = res + i;
    }
    cout << res;
}

void array::even(int tab[])
{

    cout << endl << "even : ";
    for (size_t i = 1; i < size; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
}
void array::odd(int tab[])
{
cout << endl << "odd : ";
    for (size_t i = 1; i < size; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }

}
