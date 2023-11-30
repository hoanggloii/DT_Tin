#include <bits/stdc++.h>
#define ll long long
#define vti std::vector<int>
#define vtl std::vector<ll>
#define map std::map
#define sort std::sort
#define task task
#define INP "input"
#define OUT "output"

int A,N;
void inp()
{
    std::cin >> N >> A;
}

void solve()
{
    if(A % 2 == 1)
        std::cout << (A - 1 )/2  + 1;
    else
        std::cout << (N - A)/2 + 1;
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