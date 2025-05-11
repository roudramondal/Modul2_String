#include<bits/stdc++.h>
using namespace std;
void solve ()
{
  int n = 5;
  string s[n];
  for (int i = 0; i < n;i++)
  {
    for (int j = 0; j < 10;j++)
    {
      s[i] += to_string(j);
    }
  }
  for (auto x:s)
  {
    cout << x << endl;
  }
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}