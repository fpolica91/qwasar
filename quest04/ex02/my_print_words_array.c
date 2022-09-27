#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif


void my_putchar (char c) {
	write (1,&c,1);
}
void my_putstr (char *str) {
    for(int i =0; str[i] != '\0'; i++){
        my_putchar(str[i]);
    }
    my_putchar('\n');

}



void my_print_words_array(string_array* param_1)
{
    for(int i =0; i < param_1->size; i++){
        my_putstr(param_1->array[i]);
    }
    
}
