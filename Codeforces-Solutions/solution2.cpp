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
 
 
    
    int main() {
 
        ll tc = 1;
        cin >> tc;
        vector<ll> a(tc);
        ll N = 2;
        for (ll t = 0; t < tc; t++) {
            cin >> a[t];
            N = max(N, a[t]);
        }
        
        vector<ll> is_prime(N+1, 1); 
        vector<ll> set_of_primes;
        
        is_prime[0] = is_prime[1] = 0; 
        for (ll i = 2; i <= N; ++i) {     
            if (is_prime[i]) { 
                set_of_primes.push_back(i);
                for (ll j = 1LL*i * i; j <= N; j += i) {           
                    is_prime[j] = 0;     
                }
            } 
        }
        
        for(ll i=0; i<tc; i++) {
            ll n = a[i];
            
            ll ans = 0;
            for(ll p : set_of_primes) {
                if(p>n) {break;}
                ans += n/p;
            }
            
            cout << ans << endl;
        }
    } 