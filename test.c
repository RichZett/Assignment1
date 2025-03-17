#include "assignment1.h"

int main()
{
    int size = 4;
    int* vec = init(size);

    for (int i = 0; i < size ; i++)
    {
        printf("Vector element %d: %d\n", i, vec[i]);
    }

    printf("%d\n", vec[0]);

    add(vec, size, 20);

    printf("%d\n", vec[size]);

    int avg1 = get_avg(vec, size);
    printf("The first avg is: %d\n", avg1);

    add(vec, size, 21);
    add(vec, size, 22);
    add(vec, size, 21);

   
    





    int avg2 = get_avg(vec, size);
    printf("The second avg is: %d\n", avg2);


    free(vec); // Remove vec from the heap
    return 0;

}
