#include <bits/stdc++.h>
#define ll long long
#define vti std::vector<int>
#define vtl std::vector<ll>
#define map std::map
#define sort std::sort
#define task task
#define INP "input"
#define OUT "output"

int a1,a2,a3,b1,b2,b3,n;
void inp()
{
    std::cin >> a1>>a2>>a3>>b1>>b2>>b3>>n;
}

void solve()
{
    int n0 = 0;
    ll sum = 0;
    sum += (a1+a2+a3)/5 + ((a1 + a2 + a3)%5 ? 1:0);
    sum += (b1+b2+b3)/10 + ((b1 + b2 + b3)%10 ? 1:0);
    if(sum <= n) std::cout << "YES";
    else std::cout << "NO";
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