#include<bits/stdc++.h>
using namespace std;
void solve ()
{
  int n=5;
  //cin >> n;
  vector<string>v;
  while(n--)
  {
    string str;
    cin >> str;
    v.push_back(str);
  }
  for (auto s:v)
  {
    cout << s << endl;
  }
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}