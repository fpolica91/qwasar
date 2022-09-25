
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>



char *reverse_string(char *s)
{
  char ch, *beg_pt, *end_pt;
  for (end_pt = s; *end_pt != '\0'; end_pt++)
    ;
  if (end_pt > s)
    end_pt--;
  for (beg_pt = s; beg_pt < end_pt; beg_pt++, end_pt--)
  {
    ch = *beg_pt;
    *beg_pt = *end_pt;
    *end_pt = ch;
  }
  return s;
}