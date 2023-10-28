// template-->1
//“All you need was that one little match, to start that whole fire.”

/*"Everything in the universe is balanced. Every disappointment
   you face in life will be balanced by something good for you!
  Keep going, never give up."
*/


#include <algorithm>
#include<bits/stdc++.h>
#include <iterator>
#include<math.h>
#include<string.h>
#include<cstring>
#include<string>
#include<vector>
#include<stdlib.h>
#include <ext/pb_ds/exception.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/type_utils.hpp>
#include <ext/pb_ds/detail/hash_fn/mask_based_range_hashing.hpp>
#include <ext/pb_ds/detail/hash_fn/mod_based_range_hashing.hpp>
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
#define MOD 1000000007
#define INF 1e18
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define small 0
const int N = 2000005;
#define MAXN   100001
#define endl "\n"
using namespace std;
#define f(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define vi vector<long long>
#define si set<long long>
#define sc set<char>
#define pii pair<long ,long>
#define vpii vector<pair<long,long>>
#define pqi priority_queue<long long> pq;
#define spii set<pair<long,long>>
using namespace __gnu_pbds;
#define debug(x) cerr << #x << " " << x << endl;
#define debug1(x) cerr << #x << " " << x << " ";
typedef long long int ll;
typedef long double lld;
#define timeset ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

/*#define debug(x);
  printf(x);*/


mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
typedef tree<pair<ll, ll>, null_type, less<pair<ll, ll>>, rb_tree_tag, tree_order_statistics_node_update> pbds_pair;
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
int modpow(int b, int e) {int ans = 1; b %= MOD; while (e) {if (e & 1) ans = (ans * b) % MOD; e >>= 1; b = (b * b) % MOD;} return ans;}
int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}
int max(int a, int b) {if (a > b) return a; else return b;}
int min(int a, int b) {if (a < b) return a; else return b;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
int smallestDivisor(int n) {if (n % 2 == 0) {return 2;} for (int i = 3; i * i <= n; i += 2) {if (n % i == 0) {return i;}} return n;}
void debug_vector(vector<int> v) {for (auto i : v) {cerr << i << " ";} cerr << endl;}
void debug_map(map<ll, ll> mp) {for (auto i : mp) {cerr << i.ff  << " " << i.ss << endl;} cout << endl;}
void debug_set(set<int> v) {for (auto i : v) {cerr << i << " ";}}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
ll Testcase_generator(ll l, ll r) {return uniform_int_distribution<ll>(l, r)(rng);}
void testcase_generator(ll n, ll l, ll r) {for (int i = 0; i < n; i++) {cerr << Testcase_generator(l, r) << endl;}}
ll common(vi x , vi y) {si z; f(i , 0 , sz(x)) {z.insert(x[i]);} f(i , 0 , sz(y)) {if (z.count(y[i])) {return y[i];}} return -INF;}
// ---------------------------------------------------------------------------------------
// print_statements

void p(long long n) {cout << n;}
void pstr(string s) {cout << s;}
void s() {cout << " ";}
void pv(vector<long long> v) {for (auto i : v) {cout << i << " ";}}
void ps(set<long long> s) {for (auto i : s) {cout << i << " ";}}
void e() {cout << endl;}
void pmp(map<long, long > mp) {for (auto i : mp) {cout << i.ff << " " << i.ss << endl;}}

// ------------------------------------------------------------------------------------------------

// ncr modp
// vector<int>f(N);
// vector<int>fi(N);
// int binpow(int a, int n, int m) {if (n == 0) return 1; int res  = binpow(a, n / 2, m); if (n % 2 == 0) {return (res * res) % m;} else {return (((res * res) % m) * a) % m;}}
// int modinverse(int x, int p) {return binpow(x, p - 2, p);}
// void factorial() {f[0] = 1; fi[0] = 1; for (int i = 1; i < N; i++) {f[i] = f[i - 1] * i; f[i] %= MOD; fi[i]  = fi[i - 1] * modinverse(i, MOD); fi[i] %= MOD;}}
// int ncrmodp(int n, int r, int p) {if (n < r) return 0; int a = f[n]; int b = fi[r]; int c = fi[n - r]; return (((a * b) % p) * c) % p;}
// int power(int a, int x) {int c = 0; while (a % x == 0) {c++; a /= x;} return c;}
// ------------------------------------------------------------------------------

void precision(lld a) {cout  << setprecision(a) << fixed;}

//  reference
//  cerr << "0th element: " << *A.find_by_order(0) << endl;
//  cerr << "No. of elements smaller than 6: " << A.order_of_key(6) << endl; // 2
//  cerr << "Lower Bound of 6: " << *A.lower_bound(6) << endl;
//  cerr << "Upper Bound of 6: " << *A.upper_bound(6) << endl;
// }

//** pritishcf307 **//
//**------------------------------------------------------------------------------------------------------**//
//** code starts here **//

void solve() {

}


int main() {
  // init();
  IOS;
  ll t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}

