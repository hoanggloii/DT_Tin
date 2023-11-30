#include <bits/stdc++.h>
#define ll long long
#define vti std::vector<int>
#define vtl std::vector<ll>
#define map std::map
#define sort std::sort
#define task task
#define INP "input"
#define OUT "output"

std::string a,b;
void inp()
{
    std::cin >> a >> b;
}

void solve()
{
    std::reverse(a.begin(), a.end());
    std::reverse(b.begin(),b.end());
    if(a > b) std::cout << a;
    else std::cout << b;
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