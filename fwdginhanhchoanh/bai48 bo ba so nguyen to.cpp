#include <bits/stdc++.h>
#define ll long long
#define vti std::vector<int>
#define vtl std::vector<ll>
#define map std::map
#define sort std::sort
#define task task
#define INP "input"
#define OUT "output"

ll N;
void inp()
{
    std::cin >> N;
}
bool nt(int n){
    for(int i = 2 ; i*i <= n ; i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}
void solve()
{
    int y = 2;
    bool kt = false;
    while (4 + y*y <= N)
    {
        if(nt(y))
        {
            if(nt(4+y*y))
            {
                std::cout << 2 <<' ' << y << ' ' << 4 + y*y <<'\n';
                kt = true;
            }
        }
        y++;
    }
    if(!kt)
        std::cout << -1;
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