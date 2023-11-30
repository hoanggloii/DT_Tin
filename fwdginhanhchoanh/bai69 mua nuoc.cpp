#include <bits/stdc++.h>
#define ll long long
#define vti std::vector<int>
#define vtl std::vector<ll>
#define sort std::sort
#define task task
#define INP "input"
#define OUT "output"
using namespace std;


int T;
void inp()
{
    std::cin >> T;
}

void solve()
{
    while (T--)
    {
        ll a,b,c;
        cin >> a >> b >> c;
        if(b*2 < c) std::cout << a * b << '\n';
        else {
            std::cout << (a/2)*c + (a%2)*b << '\n';
        }
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