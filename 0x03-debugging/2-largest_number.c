#include "main.h"

int largest_number(int a, int b, int c)
{
    int largest=a;

    if(largest<b)
    {
        largest = b;
    }
    if (largest <c)
    {
        largest = c;
    }


    return (largest);
}

