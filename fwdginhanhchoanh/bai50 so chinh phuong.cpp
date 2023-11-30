#include <bits/stdc++.h>
#define ll long long
#define vti std::vector<int>
#define vtl std::vector<ll>
#define map std::map
#define sort std::sort
#define task task
#define INP "input"
#define OUT "output"

int sumdigit(int n)
{
    if(n == 0) return 0;
    return n% 10 + sumdigit(n/10);
}
int n;
void inp()
{
    std::cin >> n;
}

void solve()
{
    n = sumdigit(n);
    int k = std::sqrt(n);
    if(k*k == n) std::cout << "YES";
    else std::cout << "NO";
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