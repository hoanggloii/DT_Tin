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
double a,b,c;
const double pi=3.14;
void inp()
{
    std::cin >> a >> b >> c;
}

void solve()
{
    double d = (b - a)/2;
    double h = sqrt(c*c - d*d);
    double r = h/4;
    double St = ((a+b)*h)/2;
    double Sr = r*r*pi;
    std::cout << fixed << setprecision(2) <<(St - Sr);
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