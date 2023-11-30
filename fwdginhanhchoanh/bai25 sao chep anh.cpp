#include <bits/stdc++.h>

#define ll long long
#define vti vector<int>
#define vtl vector<ll>
#define task task
#define INP "input"
#define OUT "output"

using namespace std;
int X,Y;
void inp() {
    std::cin >> X >> Y;
}

void solve() {
    if((X -  Y)% 2 == 1)
    {
        std::cout << "Yes";
    }
    else std::cout << "No";
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