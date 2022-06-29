#include <iostream>
#include "array.h"

using namespace std;

int main() 
{
   array numbers;
   int array[5];

    numbers.init(array);
    numbers.affiche(array);

    // square
    numbers.square(array);
    numbers.affiche(array);

    // Cube
    numbers.cube(array);
    numbers.affiche(array);

    // Average
    numbers.average(array);

    //sum
    numbers.sum(array); 

    //even
    numbers.even(array);
     
     //odd
    numbers.odd(array);
    return 0;

    
}