#include <bits/stdc++.h>
#define ll long long
#define vti std::vector<int>
#define vtl std::vector<ll>
#define sort std::sort
#define task task
#define INP "input"
#define OUT "output"
using namespace std;

int n;
void inp()
{
    std::cin >> n;
}

void solve()
{
    int k = log(n)/log(2);
    std::cout << k << ' ' << n - pow(2,k);
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