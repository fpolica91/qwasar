#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int* my_range(int param_1, int param_2)
{
    if(param_1 >= param_2) return NULL;
    int *ptr;
    ptr = (int*)malloc(param_2 * sizeof(int));

    for(int i = param_1, j = 0; i < param_2; i++, j++){
        ptr[j] = i;
    }

    return ptr;

}