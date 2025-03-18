#include "assignment1.h"

int main()
{
    // Decide the size for the test case and initiate the vector
    int size = 4;
    int* vec = init(size);
    // Print to see if vector is created as intended. Should print -1000 for four elements  
    printf("Test initiated vec: \n");
    for (int i = 0; i < size; i++)
    {
        printf(" Initiated vector element %d: %d\n", i, vec[i]);
    }
  
    // Add a new temperature to the vector. Should enter to the right, at the last element
    add(vec, size, 20);
    // Print to see if value is added correctly. 
    printf("\nAdded value is: %d\n", vec[size - 1]);

    // Calculate of the avg value, note only one value
    int avg1 = get_avg(vec, size);
    // Print to see if right avg is calculated. Should be the same as the value added previously
    printf("\nThe average of one value is: %d\n", avg1);

    // Fill the rest of the vector with actual values. Print the vector elements to see they have been added in correct order
    add(vec, size, 21);
    add(vec, size, 22);
    add(vec, size, 21);
    printf("\nThe vector with new values\n");
    for (int i = 0; i < size; i++)
    {
        printf(" New vector element %d: %d\n", i, vec[i]);
    }

    // Calculate the average if the vector is filled.
    int avg2 = get_avg(vec, size);
    printf("\nThe average of all the values is: %d\n", avg2);

    // Get the maximum value if the vector is filled.
    int max1 = get_max(vec, size); 
    printf("\nThe max value of all the values is: %d\n", max1);

    // Get the minimum value if the vector is filled. 
    int min1 = get_min(vec, size); 
    printf("\nThe min value of all the values is: %d\n", min1);



    free(vec); // Remove vec from the heap
    return 0;

}
