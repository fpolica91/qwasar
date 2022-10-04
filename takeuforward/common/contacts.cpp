#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

vector<int> contacts(vector<vector<string>> &queries)
{
  vector<int> ans;
  map<string, int> m;
  for (int i = 0; i < queries.size(); i++)
  {
    if (queries[i][0] == "add")
    {
      string s = queries[i][1];
      for (int j = 0; j < s.size(); j++)
      {
        m[s.substr(0, j + 1)]++;
      }
    }
    else
    {
      ans.push_back(m[queries[i][1]]);
    }
  }

  return ans;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<vector<string>> queries = {
      {"add", "hack"},
      {"add", "hackerrank"},
      {"find", "hac"},
      {"find", "hak"},
      {"add", "hackerrank"},
  };
  contacts(queries);
  return 0;
}
