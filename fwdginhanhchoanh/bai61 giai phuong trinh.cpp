#include <bits/stdc++.h>
#define ll long long
#define vti std::vector<int>
#define vtl std::vector<ll>
#define map std::map
#define sort std::sort
#define task task
#define INP "input"
#define OUT "output"
using namespace std;

ll sumdigit(ll n)
{
    if(n == 0) return 0;
    return n%10 + sumdigit(n/10);
}
ll a;
void inp()
{
    std::cin >> a;
}
void solve()
{
    vtl vt1;
    bool is = false;
    for (int i = 1; i < 82; ++i) {
        if(a % i == 0)
        {
            int x = a /i;

            if(i == sumdigit(x)) { vt1.push_back(x); is = true;}
        }
    }
    if(is) {
        sort(vt1.begin(), vt1.end());
        std::cout << vt1[0];
    }
    else std::cout <<-1;
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