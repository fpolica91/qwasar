// #include <stdarg.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int print_characters(char *arg)
// {
//     int i = 0;
//     for (; arg[i] != '\0'; i++)
//         putchar(arg[i]);
//     return i;
// }

// int print_number(int arg)
// {
//     int len = 0;
//     if (arg == 0)
//     {
//         putchar('0');
//         len++;
//     }

//     if (arg / 10)
//     {
//         print_number(arg / 10);
//         putchar(arg % 10 + '0');
//         len++;
//     }
//     else
//     {
//         putchar(arg + '0');
//         len++;
//     }
//     return len;
// }

// int my_printf(char *restrict format, ...)
// {
//     va_list arg;
//     char *iter;
//     int len = 0;
//     int argument;
//     char *str;
//     va_start(arg, format);
//     for (iter = format; *iter != '\0'; iter++)
//     {
//         if (*iter != '%')
//         {
//             putchar(*iter);
//             len++;
//         }
//         if (*iter == '%')
//         {
//             iter++;
//             switch (*iter)
//             {
//             case 'c':
//                 argument = va_arg(arg, int);
//                 putchar(argument);
//                 len++;
//                 break;
//             case 's':
//                 str = va_arg(arg, char *);
//                 if (str == NULL)
//                     str = "(null)";
//                 len += print_characters(str);
//                 break;
//             case 'd':
//                 argument = va_arg(arg, int);
//                 print_number(argument);
//                 break;
//             case 'i':
//                 argument = va_arg(arg, int);
//                 print_number(argument);
//                 break;
//             case 'p':
//                 void *p = va_arg(arg, void *);
//                 char *base = "0123456789abcdef";
//                 break;
//             }
//         }
//     }

//     va_end(arg);
//     return len;
// }

int main()
{
    my_printf("Chloe's age is %d", 11000);
    // my_printf("this is the value of char: %c\n", c);
    // my_printf("her name is %s and she is 6 years old \n", name);
    // my_printf("%c%c%c%c%c %s\n", 'H', 'E', 'L','L', 'O', name);
    // my_printf("hello world");
    return 0;
}