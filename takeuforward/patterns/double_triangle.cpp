#include <bits/stdc++.h>
using namespace std;

void printTriangle(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << j + 1 << " ";
    }
    for (int j = 0; j < n - i - 1; j++)
      cout << "  ";
    for (int j = 0; j < n - i - 1; j++)
      cout << "  ";
    for (int j = 0; j <= i; j++)
      cout << (i - j) + 1 << " ";
    cout << endl;
  }
}