#include "assignment1.h"

// This file ONLY contains the implementation of the functions



// Used librarys

/* 
The basic function of the code is to use an array/ vector
to store a certain amount of data. And if more values are 
added, the first values will be removed and all the values 
will move one space to the left and add the newest value 
to the end of the array/vector. 

Functions to be implemented: 
- TS.init()
- TS.add(value)
- TS.avg()
- TS.max()
- TS.min()

*/


int* init(int size)
{
    int* vec = malloc(size * sizeof(int));
    
    for(int i = 0; i < size; i++)
    {
        vec[i] = 0; 
    }
    return vec; 
}

void add(int* vec, int size, int value)
{
    for(int i = 0; i < size - 1; i++)
    {
        vec[i] = vec[i + 1]; 
    }
    vec[size] = value; 
}

int get_avg()
{
    return 0;
}

int get_max()
{
    return 0;
}

int get_min()
{
    return 0; 
}

