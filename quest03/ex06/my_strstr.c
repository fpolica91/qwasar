#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *my_strstr(char *haystack, char *needle)
{
  int i;

  if (!needle || !*needle)
    return (haystack); // if needle is empty
  while (*haystack != '\0')
  {
    i = 0;
    while (*haystack != *needle && *haystack != '\0')
      haystack++;
    while (haystack[i] == needle[i] && haystack[i] != '\0')
      i++;
    if (needle[i] == '\0')
      return haystack;
    haystack++;
  }
  return NULL;
}

// issipi
// missi ssippi \0