#include <bits/stdc++.h>
#define ll long long
#define vti std::vector<int>
#define vtl std::vector<ll>
#define map std::map
#define sort std::sort
#define task task
#define INP "input"
#define OUT "output"

int n,k;
void inp()
{
    std::cin >> n >> k;
}

void solve()
{
    int minn = 1000;
    while (n--)
    {
        int tmp;
        std::cin >> tmp;
        if(k % tmp == 0)
        {
            minn = std::min(minn,k/tmp);
        }
    }
    std::cout << minn;
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