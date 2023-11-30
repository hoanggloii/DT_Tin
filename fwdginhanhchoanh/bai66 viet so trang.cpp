#include <bits/stdc++.h>
#define ll long long
#define vti std::vector<int>
#define vtl std::vector<ll>
#define sort std::sort
#define task task
#define INP "input"
#define OUT "output"
using namespace std;

map<int,int> m1;
void dem(int n)
{
    while (n)
    {
        m1[n%10] ++;
        n /= 10;
    }
}
int a,b;
void solve()
{
    std::cin >> a >> b;
    for (int i = b; i <= a + b -1; ++i) {
        dem(i);
    }
    for (int i = 0; i < 10; ++i) {
        std::cout << m1[i] << ' ';
    }
    //std::cout << "\uF004";
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);std::cout.tie(nullptr);
    freopen(INP".inp","r",stdin);
    freopen(OUT".out","w",stdout);
    solve();
    return 0;
}