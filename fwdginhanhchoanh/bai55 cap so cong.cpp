#include <bits/stdc++.h>
#define ll long long
#define vti std::vector<int>
#define vtl std::vector<ll>
#define map std::map
#define sort std::sort
#define task task
#define INP "input"
#define OUT "output"
int a,b,c;
void inp()
{
    std::cin >> a >> b >> c;
}
void swap3(int &a,int &b,int &c)
{
   while(!(a < b && b < c))
   {
       if(a > b) std::swap(a,b);
       if(b > c) std::swap(b,c);
   }
}
void solve()
{
    swap3(a,b,c);
    int d1 = b - a;
    int d2 = c -b;
    if(d2 == d1) std::cout << c + d2;
    else if(d2 < d1) std::cout << a + d2;
    else std::cout << c - d1;
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