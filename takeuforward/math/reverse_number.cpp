#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{
  int result = 0;
  while (x)
  {
    int last = x % 10;
    x /= 10;
    result = result * 10 + last;
  }
  return result;
}