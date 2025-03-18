#ifndef ASSIGNMENT1_H
#define ASSIGNMENT1_H

#include <stdlib.h> 
#include <stdio.h>

int test_size(int size);

/**
 *  @brief The function init() initializes the vector. 
 */
int* init(int size); 

/**
 *  @brief The function add() adds a new temperature value to the vector. 
 */
void add(int* vec, int size, int value);

/**
 *  @brief The function get_avg() calculates the average temperature of the measured values. 
 */
int get_avg(int* vec, int size);

/**
 *  @brief The function get_max() gives the maximum temperature of the measured values. 
 */
int get_max(int* vec, int size);

/**
 *  @brief The function get_min() gives the minumum temperature of the measured values. 
 */
int get_min(int* vec, int size);



#endif

