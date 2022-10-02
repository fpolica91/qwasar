#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int ac, char **av)
{
  // int x = atoi(av[1]);
  // int y = atoi(av[2]);
  int n = 5;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (j == 0 || j == n - 1 || i == 0 || i == n - 1)
      {
        if (j == i)
          printf("o");
        else if (j == n - 1 && i == 0)
          printf("o");
        else if (j == 0 && i == n - 1)
          printf("o");
        else if (j == 0 || j == n - 1)
          printf("|");
        else
          printf("-");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
}

// Language: c
