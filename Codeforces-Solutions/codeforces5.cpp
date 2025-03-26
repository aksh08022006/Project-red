#include <bits/stdc++.h>
    #include <chrono> 
    
    using namespace std;
    using namespace std::chrono; 
    
  
    typedef long long ll;
   
    ll n, m, k, q, l, r, x, y, z;
 
    void solve(ll tc = 0) {
        
        string date = "01032025";       cin >> n;    vector<ll> a(n);    for (ll i = 0; i < n; i++) {        cin >> a[i];    }        unordered_map<char, ll> mapOne;    for (char c : date) mapOne[c]++;        unordered_map<char, ll> mapTwo;    for (ll i = 0; i < n; i++) {        mapTwo['0' + a[i]]++;                bool flag = true;        for (char c : date) {            if (mapTwo[c] < mapOne[c]) {                flag = false;                break;            }        }                if (flag) {            cout << (i + 1) << endl;            return;        }    }        cout << 0 << endl;
        
        
        
 
        
    }
    
    int main() {
 
        ll tc = 1;
        cin >> tc;
        for (ll t = 0; t < tc; t++) solve(t);
    } 