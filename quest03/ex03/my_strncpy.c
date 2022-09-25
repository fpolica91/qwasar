#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *my_strncpy(char *param_1, char *param_2, int param_3)
{
  int i = 0;
  while (i < param_3)
  {
    param_1[i] = *param_2;
    param_2++;
    i++;
  }

  return param_1;
}

// int main()
// {
//   char dst[100] = {0};
//   char *src = "abc";
//   int range = 2;

//   printf("my_strcpy -> %s\n", my_strncpy(dst, src, range));
//   return 0;
// }