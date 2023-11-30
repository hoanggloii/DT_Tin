#include <bits/stdc++.h>
#define ll long long
#define vti std::vector<int>
#define vtl std::vector<ll>
#define map std::map
#define sort std::sort
#define task task
#define INP "input"
#define OUT "output"

int n,m,a,b;
void inp()
{
    std::cin >> n >> m >> a >> b;
}

void solve()
{
    if(b/m > a) std::cout << n * a;
    else
    {
        int k = n / m;
        std::cout << k * b + std::min((n - k*m)*a,b);
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