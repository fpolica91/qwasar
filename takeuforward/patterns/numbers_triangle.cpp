#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n = 5;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << j + 1;
    }
    for (int j = i + 1; j < n; j++)
    {
      printf(" ");
    }

    printf("\n");
  }
  return 0;
}