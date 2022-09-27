#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char **array;
} string_array;
#endif

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int *array;
} integer_array;
#endif

integer_array *my_count_on_it(string_array *p1)
{

    integer_array *pusher = (integer_array *)malloc(sizeof(integer_array));

    pusher->size = p1->size;
    pusher->array = (int *)malloc(sizeof(int) * p1->size);

    for (int i = 0; i < p1->size; i++)
    {
        pusher->array[i] = strlen(p1->array[i]);
    }
    return pusher;
}

int main()
{
    string_array *p1 = (string_array *)malloc(sizeof(string_array));
    p1->size = 3;
    p1->array = malloc(sizeof(char *) * 3);
    p1->array[0] = "Hello";
    p1->array[1] = "World";
    p1->array[2] = "!";
    integer_array *p2 = my_count_on_it(p1);
    for (int i = 0; i < p2->size; i++)
    {
        printf("%d ", p2->array[i]);
    }
}