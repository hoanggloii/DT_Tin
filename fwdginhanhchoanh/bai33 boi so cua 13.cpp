#include <bits/stdc++.h>

#define ll long long
#define vti vector<int>
#define vtl vector<ll>
#define task task
#define INP "input"
#define OUT "output"

using namespace std;
int L,R;
void inp() {
    std::cin >> L >> R;
}
ll sumNatural(int n)
{
    ll sum = (n * (n + 1)) / 2;
    return sum;
}

// Function to return the sum
// of all numbers in range L and R
ll suminRange(int l, int r)
{
    return sumNatural(r) - sumNatural(l - 1);
}
void solve() {
    ll sum = suminRange(L,R);
    int l = (L - 1) / 13;
    ll sl = 13 * sumNatural(l);
    int r = R / 13;
    ll sr =13 * sumNatural(r);
    ll ds = sum - sr + sl;
    std::cout << ds;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen(INP".inp", "r", stdin);
    freopen(OUT".out", "w", stdout);
    inp();
    solve();
    return 0;
}