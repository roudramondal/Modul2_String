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
  //reverse(s.begin(), s.end()); // It will print gfedcba;
  reverse(s.begin()+0, s.begin() + 4);
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