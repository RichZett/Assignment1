#include "assignment1.h"

// This file ONLY contains the implementation of the functions

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
    int* vec = malloc(size * sizeof(int)); // Need to remove from heap later

    for (int i = 0; i < size; i++)
    {
        vec[i] = -1000;
    }
    return vec;
}

void add(int* vec, int size, int value)
{
    for (int i = 0; i < size - 1; i++)
    {
        vec[i] = vec[i + 1];
    }
    vec[size - 1] = value;

    for (int i = 0; i < size; i++)
    {
        printf("X Vector element %d: %d\n", i, vec[i]);
    }
  
}

int get_avg(int* vec, int size)
{
    int avg = 0;
    int count = 0;

    for (int i = 0; i < size ; i++)
    {
        if (vec[i] != -1000)
        {
            avg = avg + vec[i];
            count++;
        }
    }
    avg = avg / count;

    return avg;
}

int get_max(int* vec, int size)
{
    int max_value = 0;

    for (int i = 0; i < size ; i++)
    {
        if (vec[i] != -1000)
        {
            if (max_value < vec[i])
            {
                max_value = vec[i]; 
            }
        }
    }

    return max_value;
}

int get_min(int* vec, int size)
{
    int min_value = 1000;

    for (int i = 0; i < size ; i++)
    {
        if (vec[i] != -1000)
        {
            if (min_value > vec[i])
            {
                min_value = vec[i]; 
            }
        }
    }
    return min_value;
}
