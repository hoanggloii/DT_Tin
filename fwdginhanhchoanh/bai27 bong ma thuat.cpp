#include <bits/stdc++.h>

#define ll long long
#define vti vector<int>
#define vtl vector<ll>
#define task task
#define INP "input"
#define OUT "output"

ll A,B,X,Y,Z;
using namespace std;

void inp() {
    std::cin >> A >> B >> X >> Y >> Z;
}

void solve() {
    ll v = A - X*2 - Y;
    ll x = B - Y - 3*Z;
    ll c = (v < 0 ? abs(v) : 0) + (x < 0 ? abs(x) : 0);
    std::cout << c;
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