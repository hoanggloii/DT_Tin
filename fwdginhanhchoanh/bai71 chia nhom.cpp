#include <bits/stdc++.h>
#define ll long long
#define vti std::vector<int>
#define vtl std::vector<ll>
#define sort std::sort
#define task task
#define INP "input"
#define OUT "output"
using namespace std;
int T,n;
void inp()
{
    std::cin >> T;
}

void solve()
{
    while(T--)
    {
        std::cin >> n;int a[n];
        for (int i = 0; i < n; ++i) {
            std::cin >> a[i];
        }
        sort(a,a + n);
        bool is = false;
        for (int i = 0; i < n - 1; ++i) {
            if(a[i] == a[i+1] - 1) { std::cout << 2 << '\n';is = true;break;}
        }
        if(!is) std::cout << 1 << '\n';
    }
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