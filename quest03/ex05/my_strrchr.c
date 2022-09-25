#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *my_strrchr(char *param_1, char param_2)
{
  char *ch = NULL;
  for (; *param_1 != '\0'; param_1++)
  {
    if (*param_1 == param_2)
      ch = param_1;
  }

  return ch;
}