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
    std::cin >> N ;
}

void solve()
{
    int k = int(sqrt(N));
    int sum = 1 - (k*k == N ? k:0);
    for (int i = 2; i*i <= N; i++) {
        if(N % i == 0) sum += (i + N/i);
    }
    if(N < sum) std::cout << 1;
    else std::cout << 0;
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