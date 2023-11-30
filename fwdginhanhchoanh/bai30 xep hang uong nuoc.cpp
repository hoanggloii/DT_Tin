#include <bits/stdc++.h>

#define ll long long
#define vti vector<int>
#define vtl vector<ll>
#define task task
#define INP "input"
#define OUT "output"

using namespace std;
int T;
void inp() {
    std::cin >> T;
}

void solve() {
    while(T--)
    {
        int c = 1;int n;
        std::cin >> n;
        for(int l,r,i = 0; i < n ; i++)
        {
            std::cin >> l >> r;
            if(l >= c) c = l;
            if(r < c && i != 1) { std::cout << "0 " ;continue; }
            else {
                std::cout << c << " ";c++;
            }
            std::cout << "\n";
        }
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