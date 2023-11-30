#include <bits/stdc++.h>

#define ll long long
#define vti vector<int>
#define vtl vector<ll>
#define task task
#define INP "input"
#define OUT "output"

using namespace std;
int a,b;
void inp() {
    std::cin >> a >> b;
}

void solve() {
    if(abs(a - b) >= 2)
    {
        std::cout << "NO";
    }
    else std::cout << "YES";
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