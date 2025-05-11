/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 05 / 11 / 2025
   Time  : 12:12
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
    vector<int> v{1, 3, 5};
    reverse(v.begin(), v.end());
    for (auto x:v)
    {
      cout << x << " ";
    }
    cout << nl;
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