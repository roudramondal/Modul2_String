/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 05 / 11 / 2025
   Time  : 16:59
   Problem Link: 
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define ld long double
#define pb push_back
#define po pop_back
#define all(v) v.begin(), v.end()
#define F first
#define S second
#define co cout
#define c cin

const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ld PI = acos(-1.0);

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
void solve() {
    // Your code here
    string s;
    c >> s;
    string sub;
    c >> sub;
    for (int i = 0; i < s.length();i++)
    {
      if (i+sub.length()>s.length())continue;
      if (s.substr(i,sub.length())==sub)
      {
        co<<"Got it in index = "<<i<<nl;
        return;
      }
      
    }
    cout << "Not a substring " << nl;
}

int main() {
    fast_io;
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}