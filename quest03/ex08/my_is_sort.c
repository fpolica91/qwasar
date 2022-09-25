#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif


bool my_is_sort(integer_array* param_1)
{
    
    if(param_1->size == 0) return true;
    int x = param_1->array[0];
    if(x <= param_1->array[1]){
        for(int i = 1; i < param_1->size -1; i++){
            if(param_1->array[i] > param_1->array[i + 1]) return false;
        }
    }else {
        for(int i = param_1->size - 1; i > 1 ; i--){
            
            if(param_1->array[i] > param_1->array[i - 1]) {
                return false;
            };
        }  
    }
    
    
    return true;
};