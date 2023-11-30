#include <bits/stdc++.h>

#define ll long long
#define vti vector<int>
#define vtl vector<ll>
#define task task
#define INP "input"
#define OUT "output"

using namespace std;
int A,B;
void inp() {
    std::cin >> A >> B;
}

void solve() {
    int i = 0;
    while (A <= B)
    {
        ++i;
        A*=3;B*=2;
    }
    std::cout << i << '\n';
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