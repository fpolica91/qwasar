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

// get size to allocate memory for the new array
int get_size(string_array *param_1, char *param_2)
{
  int cc = 0;
  for (int i = 0; i < param_1->size; i++)
  {
    cc += (int)(strlen(param_1->array[i]) + strlen(param_2));
  }
  return cc;
}

char *my_strncat(char *dest, char *src, int nb)
{
  int i = 0;
  int len = strlen(dest);
  while (i < nb && src[i])
  {
    dest[len + i] = src[i];
    i++;
  }
  return dest;
}

char *my_join(string_array *param_1, char *param_2)
{

  int counter = get_size(param_1, param_2);

  char *result = malloc(sizeof(char) * counter);
  *result = 0;

  for (int i = 0; i < param_1->size; i++)
  {
    int str_size = (int)(strlen(param_1->array[i]) + strlen(param_2));
    char *str = malloc(str_size);
    *str = 0;
    my_strncat(str, param_1->array[i], str_size);

    my_strncat(result, str, str_size);
    if (i < param_1->size - 1)
      my_strncat(result, param_2, strlen(param_2));
  }

  return result;
}

int main()
{
  string_array *p1 = (string_array *)(malloc(sizeof(string_array)));
  p1->size = 4;
  // ["abc", "def", "gh", "!"]
  p1->array = malloc(sizeof(char *) * 4);
  p1->array[0] = "abc";
  p1->array[1] = "def";
  p1->array[2] = "gh";
  p1->array[3] = "!";
  char *p2 = my_join(p1, "blah");
  printf("->  %s", p2);
}
