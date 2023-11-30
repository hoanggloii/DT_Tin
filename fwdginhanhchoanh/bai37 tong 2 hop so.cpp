#include <bits/stdc++.h>
#define ll long long
#define vti std::vector<int>
#define vtl std::vector<ll>
#define map std::map
#define sort std::sort
#define task task
#define INP "input"
#define OUT "output"


bool nt[1000001];

void snt()
{
    memset(nt,true,sizeof(nt));
    nt[0] = nt[1] = false;
    for(int i = 2 ; i <= 1000000 ; i++)
        if(nt[i])
            for (int j = i*2; j <= 1000000; j += i)
                nt[j] = false;
}
int N;
void inp()
{
    std::cin >> N;
}

void solve()
{
    snt();
    for (int i = 4; i <= N; i++) {
        int t = N - i;
        if(!nt[i] && !nt[t])
        {
            std::cout << i << ' ' << N - i;break;
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