#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{

  char ch;
  printf("%d", argc);
  for (int i = 0; i < argc; i++)
    printf("%s \n", argv[i]);
  FILE *fptr;
  fptr = fopen("./chloe.txt", "r");
  do
  {
    ch = fgetc(fptr);
    printf("%c", ch);
  } while (ch != EOF);
  fclose(fptr);
  return 0;
}