#include <iostream>
// #include "array.h"
#define size 5
using namespace std;

int valOdd(int tab[])
{
    cout << "valOdd :";

    for (size_t i = 0; i < size; i++)
    {
        int count = 0;

        for (size_t j = 0; j < size; j++)
        {

            if (tab[i] == tab[j])
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            return tab[i];
        }
    }
    return -1;
}

void affiche(int tab[])
{
    for (size_t i = 0; i < size; i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl;
}

int main()
{
    int array[size] = {1, 0, 0, 1, 0};

    affiche(array);

    cout << valOdd(array);
}