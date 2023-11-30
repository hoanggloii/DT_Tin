#include <bits/stdc++.h>
#define ll long long
#define vti std::vector<int>
#define vtl std::vector<ll>
#define map std::map
#define sort std::sort
#define task task
#define INP "input"
#define OUT "output"

int n;
void inp()
{
    std::cin >> n;
}

void solve()
{
    ll sum = 0;
    while (n--)
    {
        int tmp;
        std::cin >> tmp;sum += tmp;
    }
    std::cout << sum/4 + (sum%4 ? 1:0);
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