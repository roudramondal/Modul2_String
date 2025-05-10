#include<bits/stdc++.h>
using namespace std;
void solve ()
{
  string s = "";
  cout << "Before = " << s.length() << endl;
  for (char c = 'a'; c <= 'g';c++)
  {
    s+=c;
  }
  cout << "After = " << s.length() << endl;
  cout << "output = " << s << " ";
  cout << endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}