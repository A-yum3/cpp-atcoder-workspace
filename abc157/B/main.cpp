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

const string YES = "Yes";
const string NO  = "No";

void func(std::vector<std::vector<long long>> A, long long N,
          std::vector<long long> b) {

    std::vector<std::vector<long long>> Ans(3, std::vector<long long>(3, false));

    for(int in = 0; in < b.size(); in++) {
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                if (Ans[i][j]) continue;

                Ans[i][j] = A[i][j] == b[in];
            }
        }
    }

    bool flag = false;
    for (int point = 0; point < 3; point++)
    {
        // 横
        if(Ans[point][0] && Ans[point][1] && Ans[point][2]) {
            flag = true;
        }

        // 縦
        if(Ans[0][point] && Ans[1][point] && Ans[2][point]) {
            flag = true;
        }
    }

    if((Ans[0][0] && Ans[1][1] && Ans[2][2])
    || (Ans[2][0] && Ans[1][1] && Ans[0][2])) {
        flag = true;
    }

    string ans = flag ? YES : NO;
    cout << ans << endl;
}

int main() {
    // cout << fixed << setprecision(5);

    std::vector<std::vector<long long>> A(3, std::vector<long long>(3));
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            std::scanf("%lld", &A[i][j]);
        }
    }
    long long N;
    std::scanf("%lld", &N);
    std::vector<long long> b(N);
    for(int i = 0; i < N; i++) {
        std::scanf("%lld", &b[i]);
    }
    func(std::move(A), N, std::move(b));
    return 0;
}
