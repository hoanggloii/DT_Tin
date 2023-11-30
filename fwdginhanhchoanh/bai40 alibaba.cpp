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
    ll minn = (ll)10e9 + 1;
    ll sum = 0;
    while(n --)
    {
        ll tmp;
        std::cin >> tmp;
        sum += tmp;
        if(tmp % 2 == 1) minn = std::min(minn,tmp);
    }
    if(sum % 2 == 0) std::cout << sum;
    else std::cout << sum - minn;
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