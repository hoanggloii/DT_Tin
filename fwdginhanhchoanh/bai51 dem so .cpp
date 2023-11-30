#include <bits/stdc++.h>
#define ll long long
#define vti std::vector<int>
#define vtl std::vector<ll>
#define map std::map
#define sort std::sort
#define task task
#define INP "input"
#define OUT "output"

ll f(ll s)
{
    if(s < 10) return s;
    ll ret = s/10 + 9,c =s;
    while(c >= 10) c/= 10;
    if(c > (s % 10)) ret--;
    return ret;
}
ll l ,r;
void inp()
{
    std::cin >> l >> r;
}

void solve()
{
    std::cout << f(r) - f(l - 1) ;
    return ;
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