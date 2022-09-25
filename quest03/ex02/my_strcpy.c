#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *my_strcpy(char *param_1, char *param_2)
{
  int index = 0;

  for (; *param_2 != '\0'; param_2++, index++)
  {
    param_1[index] = *param_2;
  }

  return param_1;
}