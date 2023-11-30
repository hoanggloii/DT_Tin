#include <bits/stdc++.h>
#define ll long long
#define vti std::vector<int>
#define vtl std::vector<ll>
#define map std::map
#define sort std::sort
#define task task
#define INP "input"
#define OUT "output"

std::string cong(std::string x,std::string y){
    int sx=x.length();
    int sy=y.length();
    int l=abs(sx-sy);
    if(sx<sy)
        for(int i=1; i<=l; i++) x='0'+x;
    else
        for(int i=1; i<=l; i++) y='0'+y;
    l=x.length(); int res=0;
    std::string z;
    for(int i=l-1; i>=0; i--){
        int r=x[i]+y[i]-96+res;
        res=r/10;
        z=char(r%10+48)+z;
    }
    if(res>0) z=char(res+48)+z;
    return z;
}
std::string n;
int k;
void inp()
{
    std::cin >> n >> k; 
}

void solve()
{
    std::string j = n;
    while (k --)
    {
        n = cong(n,j+'0');
        j += '0';
    }
    std::cout << n;
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