#include <bits/stdc++.h>
#define ll long long
#define vti std::vector<int>
#define vtl std::vector<ll>
#define sort std::sort
#define task task
#define INP "input"
#define OUT "output"
using namespace std;

int n,m;
void inp()
{
    std::cin >> n >> m;
}

void solve()
{
    int vet = 0;
    for (int i = 1; i < m; ++i) {
        vet += (i*n % m == 0);
    }
    std::cout << m - 1 - vet << '\n';

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