/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 05 / 11 / 2025
   Time  : 12:35
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

const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ld PI = acos(-1.0);

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
void solve() {
    // Your code here
    string s1, s2;
    cin >> s1 >> s2;
    if (s1==s2)
    {
      cout << "String are equal" << nl;
    }
    else if (s1>s2)
    {
      cout<<"String s1 is grater than string s2 "<<nl;
    }
    else 
    {
      cout << "String s2 is grater than string s1" << nl;
    }
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