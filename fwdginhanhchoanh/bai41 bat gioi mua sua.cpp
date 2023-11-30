#include <bits/stdc++.h>
#define ll long long
#define vti std::vector<int>
#define vtl std::vector<ll>
#define map std::map
#define sort std::sort
#define task task
#define INP "input"
#define OUT "output"

ll n,a,b,c,k,t;
void inp()
{
    std::cin >> n >> a >> b >> c;
}

void solve()
{
    k = b - c;
    if (a > k && n >= b)
    {
        t = (n - b)/k + 1;
        n -= t*k;
    }
    t = t + n/a;
    std::cout << t ;
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