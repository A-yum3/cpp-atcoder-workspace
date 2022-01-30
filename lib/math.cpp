#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

using ll  = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
#define ull unsigned long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define vpii vector<pii>
#define vpll vector<pll>

#define rep(i, n) for(int i = 0, i##_len = (n); i < i##_len; i++)
#define rep1(i, n) for(int i = 1, i##_len = (n); i <= i##_len; i++)
#define repr(i, n) for(int i = ((int)(n)-1); i >= 0; i--)
#define rep1r(i, n) for(int i = ((int)(n)); i >= 1; i--)

#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define SORT(v, n) sort(v, v + n);
#define VSORT(v) sort(v.begin(), v.end());
#define RSORT(x) sort(rall(x));
#define pb push_back
#define mp make_pair

#define INF (1e9)
#define PI (acos(-1))
#define EPS (1e-7)

ull gcd(ull a, ull b) {
    return b ? gcd(b, a % b) : a;
}
ull lcm(ull a, ull b) {
    return a / gcd(a, b) * b;
}

/**
 * @brief 基礎的な素数列挙
 *
 * @param x
 * @return true
 * @return false
 */
bool is_prime(ll x) {
    if(x <= 1) return false;
    for (ll i = 2; i * i <= x; i++)
    {
        if(x % i == 0) return false;
    }
    return true;
}


/**
 * @brief エラトステネスの篩による素数列挙
 *
 * @param N
 * @return vector<ll>
 */
vector<ll> makePrimes(ll N) {
    vector<bool> judgePrimes(N, true);

    for (ll i = 2; i * i <= N; i++)
    {
      if(judgePrimes[i]) {
        for (ll x = 2 * i; x <= N; x += i) judgePrimes[i] = false;
      }
    }

    vector<ll> primes;
    for (ll i = 2; i <= N; i++)
    {
        if(judgePrimes[i]) primes.push_back(i);
    }

    return primes;
}