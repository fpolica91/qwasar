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

int get_size(string_array *param_1, char *param_2)
{
  int cc = 0;
  for (int i = 0; i < param_1->size; i++)
  {
    cc += (int)(strlen(param_1->array[i]) + strlen(param_2));
  }
  return cc;
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
    int j;
    for (j = 0; j < str_size; j++)
    {
      str[j] += param_1->array[i][j];
    }

    int current_size = strlen(result);
    int k = 0;

    while (k < str_size && str[k])
    {
      result[current_size + k] = str[k];
      k++;
    }
    if (i + 1 < param_1->size)
    {
      int x = 0;
      while (x < strlen(param_2))
      {
        result[current_size + k] = param_2[x];
        x++;
        k++;
      }
    }
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
