#include <bits/stdc++.h>
using namespace std;

// Input: 4
// Output:
//    A
//   ABA
//  ABCBA
// ABCDCBA

void printTriangle(int n)
{
  for (int i = 1; i <= n; i++)
  {
    char tt = 'A';
    for (int j = n - i; j > 0; j--)
      cout << " ";
    for (int j = 1; j <= 2 * i - 1; j++)
    {
      cout << tt;
      if (j < i)
        tt++;
      else
        tt--;
    }
    cout << endl;
  }
}

int main()
{
  printTriangle(4);
  return 0;
}