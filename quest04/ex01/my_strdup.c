#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* my_strdup(char* param_1)
{   
    int str_size;
    static char *dup;
    char *itr;
    str_size = strlen(param_1);
    dup = (char *)malloc(sizeof(char)*str_size+1);
    if( dup == NULL)
        return( (char *)NULL);
    itr = dup;
    while(*param_1){
        *itr = *param_1;
        itr++;
        param_1++;
    }
    return dup;
}

// char* my_strdup(char* param_1)
// {   
//     char *ptr;
//     int i;
    

//     for(i = 0; param_1[i] != '\0'; i++);
//     ptr = (char*)malloc(i * sizeof(char));
    

    
//     for(int j = 0; j <= i; j++){
//         ptr[j] = param_1[j];
//     }

//     return ptr;
// }

