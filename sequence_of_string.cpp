/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 05 / 12 / 2025
   Time  : 15:35
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
    int n;
    c >> n;
    vector<string> s(n);
    for (int i = 0; i < n;i++)
    {
      c >> s[i];
    }
    reverse(s.begin(), s.end());
    for (auto x:s)
    {
      co << x << endl;
    }
}

int main() {
    fast_io;
    // int t ;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
    return 0;
}