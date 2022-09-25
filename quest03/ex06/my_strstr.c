#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *my_strstr(char *haystack, char *needle)
{
  if (!needle || !*needle)
    return haystack;

  int i;

  while (*haystack != '\0')
  {
    i = 0;
    // iterate pointer until first char of needle matches nth char of haystack
    while (*haystack != *needle && *haystack != '\0')
      haystack++;
    // simple character for character  comparison as long as chars in needle match chars in haystack
    while (haystack[i] == needle[i] && haystack[i] != '\0')
      i++;
    if (needle[i] == '\0')
      return haystack;
    haystack++;
  }
  return NULL;
}

int main()
{
  printf("%s:", my_strstr("hello", "ll"));
}
// function takes needle and finds it in haysack
// if needle empty return haystack