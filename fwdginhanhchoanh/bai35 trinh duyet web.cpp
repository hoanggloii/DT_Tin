#include <bits/stdc++.h>
#define ll long long
#define vti std::vector<int>
#define vtl std::vector<ll>
#define map std::map
#define sort std::sort
#define task task
#define INP "input"
#define OUT "output"
int n,r,l,p;
void inp()
{
    std::cin >> n >> p >> l >> r;
    if (l == 1 && r == n) std::cout << 0;
    else if(l ==1) std::cout << abs(r - p) + 1;
    else if(r ==n) std::cout << abs(l - p) + 1;
    else std::cout << std::min(abs(r-p),abs(l -p)) + 2 + (r - 1);
}

void solve()
{
    //std::cout << "\uF004";
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