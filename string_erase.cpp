/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 05 / 11 / 2025
   Time  : 16:08
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
    int a1, a2;
    cin >> a1 >> a2;
    cout<<"3 Way to erase string"<<nl;
    ;
    // s1.erase(3, 2);//which index i want to remove and how many element . 3 index and 2 range
    //  address
    //  erase (int startingIndex, int size)
    //  erase (address);
    //  erase (startingaddress,endingaddress+1);
    s1.erase(s1.begin() + a1); 

    s2.erase(s2.begin()+a1, s2.begin()+a2);
    cout << s2 << " " << s1 << nl;
    
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