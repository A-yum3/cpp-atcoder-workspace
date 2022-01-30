#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

using ll = long long;
using pii  = pair<int, int>;
using pll = pair<ll, ll>;
#define ull unsigned long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define vpii vector<pii>
#define vpll vector<pll>

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; i++)
#define rep1(i, n) for (int i = 1, i##_len = (n); i <= i##_len; i++)
#define repr(i, n) for (int i = ((int)(n)-1); i >= 0; i--)
#define rep1r(i, n) for (int i = ((int)(n)); i >= 1; i--)

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

ull gcd(ull a, ull b) { return b ? gcd(b, a % b) : a; }
ull lcm(ull a, ull b) { return a / gcd(a, b) * b; }

const string YES = "Yes";
const string NO = "No";

void func(long long N, long long K, long long Q, std::vector<long long> A){
    vector<ll> ansCount(N);
    for (ll i = 0; i < A.size(); i++)
    {
        ansCount[A[i] - 1]++;
    }

    for (ll i = 0; i < N; i++)
    {
        string ans = Q - ansCount[i] < K ? "Yes" : "No" ;
        cout << ans << endl;
    }
}

int main(){
    // cout << fixed << setprecision(5);

    long long N;
    std::scanf("%lld", &N);
    long long K;
    std::scanf("%lld", &K);
    long long Q;
    std::scanf("%lld", &Q);
    std::vector<long long> A(Q);
    for(int i = 0 ; i < Q ; i++){
        std::scanf("%lld", &A[i]);
    }
    func(N, K, Q, std::move(A));
    return 0;
}
