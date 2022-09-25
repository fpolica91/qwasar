#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int my_strcmp(char *pt1, char *pt2)
{
  if (pt1 == pt2)
  {
    return 0;
  }
  while (*pt1 != '\0')
  {
    if (*pt1 != *pt2 && *pt1 > *pt2)
      return 1;
    if (*pt1 != *pt2 && *pt2 > *pt1)
      return -1;
    pt1++;
    pt2++;
  }

  return 0;
}
