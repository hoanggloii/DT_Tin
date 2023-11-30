#include <bits/stdc++.h>
#define ll long long
#define vti std::vector<int>
#define vtl std::vector<ll>
#define map std::map
#define sort std::sort
#define task task
#define INP "input"
#define OUT "output"

int xa,ya,xb,yb;
void inp()
{
    std::cin >> xa >> ya >> xb >> yb ;
}

void solve()
{
    if(xa == xb)
    {
        std::cout <<  xa + yb - ya << ' ' << ya << ' ' << xa + yb - ya << ' ' << yb;
    }
    else if(ya == yb)
    {
        std::cout << xa << ' ' <<  ya + xb - xa << ' ' << xb << ' ' <<  ya + xb - xa;
    }
    else {
        if(abs(xa-xb) != abs(ya - yb)) std::cout << -1;
        else {
            std::cout << xa << ' ' << yb << ' ' << xb << ' ' << ya;
        }
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