#include <bits/stdc++.h>
#define ll long long
#define vti std::vector<int>
#define vtl std::vector<ll>
#define sort std::sort
#define task task
#define INP "input"
#define OUT "output"
using namespace std;

int days = 1440;
int h,m;
void inp()
{
    std::cin >> h >> m;
}

void solve()
{
    int d = h*60 + m + days - 45;
    if(d >= days) d -= days;
    std::cout << (int)d/60 << ' ' << (d - 60*(int)(d/60));
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