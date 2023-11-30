#include <bits/stdc++.h>

#define ll long long
#define vti vector<int>
#define vtl vector<ll>
#define task task
#define INP "input"
#define OUT "output"

using namespace std;
int N;
void inp() {
    std::cin >> N;
}

void solve() {
    int plus = N ;int less = N;
    while (1)
    {
        if(plus % 10 == 0) { std::cout << plus;return; }
        if(less % 10 == 0) { std::cout << less ; return ;}
        plus ++;
        less --;
    }
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