#include <bits/stdc++.h>
    #include <chrono> 
    
    using namespace std;
    using namespace std::chrono; 
    
    // #pragma GCC target ("avx2")
    // #pragma GCC optimization ("O3")
    // #pragma GCC optimization ("unroll-loops")
    // #pragma optimization_level 3
    // #pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,O3")
    // #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
    
    #define f0r(a, b) for (long long a = 0; a < (b); ++a)
    #define f1r(a, b, c) for (long long a = (b); a < (c); ++a)
    #define f0rd(a, b) for (long long a = (b); a >= 0; --a)
    #define f1rd(a, b, c) for (long long a = (b); a >= (c); --a)
    #define ms(arr, v) memset(arr, v, sizeof(arr))
    #define pb push_back
    #define send {ios_base::sync_with_stdio(false);}
    #define help {cin.tie(NULL); cout.tie(NULL);}
    #define fix(prec) {cout << setprecision(prec) << fixed;}
    #define mp make_pair
    #define f first
    #define s second
    #define all(v) v.begin(), v.end()
    #define getunique(v) {sort(all(v)); v.erase(unique(all(v)), v.end());}
    #define readgraph(list, edges) for (ll i = 0; i < edges; i++) {ll a, b; cin >> a >> b; a--; b--; list[a].pb(b); list[b].pb(a);}
    #define ai(a, n) for (ll ele = 0; ele < n; ele++) cin >> a[ele];
    #define ain(a, lb, rb) for (ll ele = lb; ele <= rb; ele++) cin >> a[ele];
    #define ao(a, n) {for (ll ele = 0; ele < (n); ele++) { if (ele) cout << " "; cout << a[ele]; } cout << '\n';}
    #define aout(a, lb, rb) {for (ll ele = (lb); ele <= (rb); ele++) { if (ele > (lb)) cout << " "; cout << a[ele]; } cout << '\n';}
    #define vsz(x) ((long long) x.size())
    typedef long long ll;
    typedef long double lld;
    typedef unsigned long long ull;
    typedef pair<ll, ll> pii;
    typedef pair<ll, ll> pll;
    typedef vector<ll> vi;
    typedef vector<ll> vl;
    typedef vector<pii> vpi;
    typedef vector<pll> vpl;
    
    template<typename A> ostream& operator<<(ostream &cout, vector<A> const &v);
    template<typename A, typename B> ostream& operator<<(ostream &cout, pair<A, B> const &p) { return cout << "(" << p.f << ", " << p.s << ")"; }
    template<typename A> ostream& operator<<(ostream &cout, vector<A> const &v) {
        cout << "["; for(ll i = 0; i < v.size(); i++) {if (i) cout << ", "; cout << v[i];} return cout << "]";
    }
    template<typename A, typename B> istream& operator>>(istream& cin, pair<A, B> &p) {
        cin >> p.first;
        return cin >> p.second;
    }
    
    mt19937 rng(std::chrono::steady_clock::now().time_since_epoch().count());
    // mt19937 rng(61378913);
    /* usage - just do rng() */
    
    void usaco(string filename) {
    // #pragma message("be careful, freopen may be wrong")
        freopen((filename + ".in").c_str(), "r", stdin);
        freopen((filename + ".out").c_str(), "w", stdout);
    }
    
    const lld pi = 3.14159265358979323846;
    const ll mod = 10000000007;
    // const ll mod = 998244353;
    // ll mod;
 
    ll stringToInteger(string s) {
 
        ll integer = 0;
        for (char c : s) {
            integer = integer * 10 + (c - '0');
        }
 
        return integer;
    }
 
    // Function to set the kth bit of n
    ll setBit(ll n, ll k) { return (n | (1 << (k))); }
 
    // Function to clear the kth bit of n
    ll clearBit(ll n, ll k) { return (n & (~(1 << (k)))); }
 
    // Function to toggle the kth bit of n
    ll toggleBit(ll n, ll k) { return (n ^ (1 << (k))); }
 
    // output is in 2^x; where x is the index at which the highest bit occurs
    ll setBitNumber(ll n)
    {
        if (n == 0)
            return 0;
    
        ll msb = 0;
        n = n / 2;
        while (n != 0) {
            n = n / 2; 
            msb++;
        }
    
        return (1 << msb);
    }
 
    ll kthBitOfANum(ll n, ll k) {
        return (n & (1 << (k - 1))) >> (k - 1);
    }
 
    ll binpow(ll a, ll b) {
        ll res = 1;
        while (b > 0) {
            if (b & 1)
                res = res * a;
            a = a * a;
            b >>= 1;
        }
        return res;
    }
 
    vector<bool> sieveOfEratosthenes(ll n) {
        vector<bool> is_prime(n+1, true); 
        is_prime[0] = is_prime[1] = false; 
        for (ll i = 2; i * i <= n; i++) {     
            if (is_prime[i]) {         
                for (ll j = i * i; j <= n; j += i) {           
                    is_prime[j] = false;     
                }
            } 
        }
 
        return is_prime;
    }
    
    bool checker(ll mid, ll m, ll n, ll k) {
        
        ll count = 0;                
        if(mid<m) {            
            ll x0 = (m+1)/(mid+1), type1 = min(x0*mid, m - x0+1), type2=0;
            if(x0+1<=m+1) {                    type2 = min((x0+1) * mid, m - x0);                
                
            }
            count = max(type1, type2);       
            
        }        
        else { 
            count = m;
        }                
        return count*n >= k;
    }
 
    ll n, m, k, q, l, r, x, y, z;
    const ll template_array_size = 1e6 + 585;
 
    unordered_map<ll, ll> mp;
    ll b[template_array_size];
    ll c[template_array_size];
    string s, t;
    ll ans = 0;
    // use substr(i, j) for subtring
 
    void solve(ll tc = 0) {
        cin >> n >> m >> k;                ll l=1, r=m;        ll ans = m;                while(r-l>=0) {            ll mid = (l+r)/2;            if(checker(mid, m, n, k)) {                    ans = mid;                    r = mid-1;                }                else {                    l = mid+1;                }                    }                cout << ans << endl;
    }
    
    int main() {
 
        ll tc = 1;
        cin >> tc;
        for (ll t = 0; t < tc; t++) solve(t);
    } 