#include "assignment1.h"

int main()
{
    int size = 4;
    int *vec = init(size);

    printf("%d\n", vec[0]);

    add(vec, size, 20);

    printf("%d\n", vec[size]);

    free(vec); 
    return 0;

}
