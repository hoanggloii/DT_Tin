#include <bits/stdc++.h>
#define ll long long
#define vti std::vector<int>
#define vtl std::vector<ll>
#define map std::map
#define sort std::sort
#define task task
#define INP "input"
#define OUT "output"

ll n;
void inp()
{
    std::cin >> n;
}

void solve()
{
    ll n1 =  (n % 2 ? n -1:n);
    ll a = (n1/2)*(n1/2)*2;
    ll b = n1/2*(n1 +1) ;
    if(n % 2) a+= n;
    std::cout << b - a;
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