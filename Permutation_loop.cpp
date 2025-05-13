/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 05 / 13 / 2025
   Time  : 22:30
   Problem Link: 
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define ld long double
#define pb push_back
#define po pop_back
#define mx max()
#define min min()
#define all(v) v.begin(), v.end()
#define F first
#define S second
#define co cout
#define c cin

const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ld PI = acos(-1.0);

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
void printV(vector<int>&v)
{
  for(auto x:v)
    co << x << " ";
    co<<nl;
}
void solve() {
    // Your code here
    vector<int> v{1, 2, 45, 34};
    do
    {
      printV(v);
    } while (next_permutation(v.begin(), v.end()));
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