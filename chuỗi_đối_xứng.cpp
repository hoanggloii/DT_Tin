#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef unsigned long long ull;
#define task "task"

#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FOD(i,r,l) for (int i=r;i>=l;i--)
const int N = 2500;
int n, F[N][N];
string s, ans;

void solve(int i, int j, int L, int R) {
    if (L > R) return ;
    if (i == j) ans[L] = s[i];
    else {
        if (s[i] == s[j]) {
            ans[L] = ans[R] = s[i];
            solve(i+1, j-1, L+1, R-1);
        } else {
            if (F[i][j] == F[i+1][j])
                solve(i+1, j, L, R);
            else
                solve(i, j-1, L, R);
        }
    }
}
int main() {
	freopen(task".inp", "r", stdin);
    freopen(task".out", "w", stdout);
    getline(cin, s);
    n = s.size()-1;
    FOD(i,n,0)
        FOR(j,i,n) {
            if (i == j) F[i][j] = 1;
            else {
                if (s[i] == s[j]) {
                    if (i == j-1)
                        F[i][j] = 2;
                    else
                        F[i][j] = F[i+1][j-1] + 2;
                } else
                    F[i][j] = max(F[i+1][j], F[i][j-1]);
            }
        }

    ans.resize(F[0][n]);

    solve(0, n, 0, F[0][n]-1);

    cout << ans;

    return 0;
}
