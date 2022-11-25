#include "my_printf.h"

char *transform(long long num, char *hash, int base)
{
  int len = 0;
  long long copy = num;
  // find length based on size of buffer

  while (copy != 0)
  {
    len++;
    copy /= base;
  }
  // allocate memory for buffer
  char *buffer = malloc(sizeof(int) * len);

  buffer[len] = '\0';
  len--;

  while (num != 0)
  {
    buffer[len] = hash[num % base];
    num /= base;
    len--;
  }

  return buffer;
}