#include <bits/stdc++.h>
#define ll long long
#define vti std::vector<int>
#define vtl std::vector<ll>
#define map std::map
#define sort std::sort
#define task task
#define INP "input"
#define OUT "output"

int a,b,c;
void inp()
{
    std::cin >> a >> b >> c;
}

void solve()
{
    int sum = 0;
    int x = a + b;
    while (x/c)
    {
        sum += x/c;
        x = x/c + x%c;
    }
    std::cout << sum;
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