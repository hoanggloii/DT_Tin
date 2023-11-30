#include <bits/stdc++.h>
#define ll long long
#define vti std::vector<int>
#define vtl std::vector<ll>
#define map std::map
#define sort std::sort
#define task task
#define INP "input"
#define OUT "output"

vtl stg(50000,0);
void dp()
{
    for (int i = 1; i < 50000; ++i) {
        stg[i] = stg[i - 1] + i;

    }
}
ll n;int t;
void inp()
{
    std::cin >> t;
}
void solve()
{
    dp();
    while (t--) {
        std::cin >> n;
        bool is = false;
        for (int i = 1; stg[i] < n; i++) {
            ll x = n - stg[i];
            if (x <= 0) continue;
            ll y = std::lower_bound(stg.begin(), stg.end(), x) - stg.begin();
            if (y < stg.size() && stg[y] == n - stg[i]) {
                std::cout << "YES\n";
                is = true;
                break;
            }
        }
        if(!is) std::cout << "NO\n";
    }

}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);std::cout.tie(nullptr);
    freopen(INP".inp","r",stdin);
    freopen(OUT".out","w",stdout);
    inp();solve();
    return 0;
}