#include "my_printf.h"

int my_printf(char *restrict format, ...)
{
  va_list arg;
  char *iter;
  int len = 0;
  int argument;
  char *str;
  void *v_pointer;
  va_start(arg, format);
  for (iter = format; *iter != '\0'; iter++)
  {
    if (*iter != '%')
    {
      putchar(*iter);
      len++;
    }
    if (*iter == '%')
    {
      iter++;
      switch (*iter)
      {
      case 'c':
        argument = va_arg(arg, int);
        putchar(argument);
        len++;
        break;
      case 's':
        str = va_arg(arg, char *);
        if (str == NULL)
          str = "(null)";
        len += print_characters(str);
        break;
      case 'd':
        argument = va_arg(arg, int);
        print_number(argument);
        break;
      case 'i':
        argument = va_arg(arg, int);
        print_number(argument);
        break;
      case 'p':
        v_pointer = va_arg(arg, void *);
        char *hash = "0123456789abcdef";
        transform((long long)v_pointer, hash, 16);
        char *hex_string = calloc((strlen(hash) + 2), sizeof(int));
        strcpy(hex_string, "0x");
        strcat(hex_string, hash);
        len += print_characters(hex_string);
        free(hex_string);
        free(hash);

        break;
      }
    }
  }

  va_end(arg);
  return len;
}

int print_characters(char *arg)
{
  int i = 0;
  for (; arg[i] != '\0'; i++)
    putchar(arg[i]);
  return i;
}

int print_number(int arg)
{
  int len = 0;
  if (arg == 0)
  {
    putchar('0');
    len++;
  }

  if (arg / 10)
  {
    print_number(arg / 10);
    putchar(arg % 10 + '0');
    len++;
  }
  else
  {
    putchar(arg + '0');
    len++;
  }
  return len;
}