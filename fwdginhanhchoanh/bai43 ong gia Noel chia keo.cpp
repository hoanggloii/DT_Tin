#include <bits/stdc++.h>
#define ll long long
#define vti std::vector<int>
#define vtl std::vector<ll>
#define map std::map
#define sort std::sort
#define task task
#define INP "input"
#define OUT "output"
int n,m;
void inp()
{
    std::cin >> n >> m;
}

void solve()
{
    int maxx = 0;
    int n1 = n;
    int index = 0;
    while (n--)
    {
        int tmp;
        std::cin >> tmp;
        if(tmp/m + (tmp%m ? 1:0) >= maxx)
        {
            maxx = tmp/m + (tmp%m ? 1:0);
            index = n1 - n;
        }
    }
    std::cout << index;
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