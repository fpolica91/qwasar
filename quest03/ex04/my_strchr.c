#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


char *my_strchr(char *param_1, char param_2)
{
  for (; *param_1 != '\0'; param_1++)
  {
    if (*param_1 == param_2)
      return param_1;
  }
  return NULL;
}