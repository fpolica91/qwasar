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

void num_inverse()
{
  int n = 5;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i; j++)
    {
      cout << j + 1;
    }
    printf("\n");
  }
}

void tree()
{
  int n = 5;
  for (int i = 1; i <= n; i++)
  {
    for (int j = n - i; j > 0; j--)
      cout << " ";
    for (int j = 0; j < 2 * i - 1; j++)
      cout << "*";
    cout << endl;
  }
}

void inverseT()
{
  int n = 2;
  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j < i; j++)
      cout << " ";
    for (int j = 0; j < ((n - i) * 2) - 1; j++)
      cout << "*";
    cout << endl;
  }
}

void inverseTAlt(int n)
{
  for (int i = n; i > 0; i--)
  {
    for (int j = 0; j < n - i; j++)
      cout << " ";
    for (int j = 0; j < 2 * i - 1; j++)
      cout << "*";
    cout << endl;
  }
}
int main()
{
  inverseT();
  return 0;
}