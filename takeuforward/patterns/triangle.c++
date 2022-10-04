#include <bits/stdc++.h>
using namespace std;

void number_triangle()
{
  int n = 5;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << i + 1;
    }
    for (int j = i + 1; j < n; j++)
    {
      printf(" ");
    }

    printf("\n");
  }
}

void right()
{
  int n = 5;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << "*";
    }
    for (int j = i + 1; j < n; j++)
    {
      printf(" ");
    }

    printf("\n");
  }
}

void inverse()
{
  int n = 5;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i; j++)
    {
      printf("*");
    }

    // for (int j = n - i; j < n; j++)
    // {
    //   printf("$");
    // }

    printf("\n");
  }
}

int main()
{
  inverse();
  return 0;
}