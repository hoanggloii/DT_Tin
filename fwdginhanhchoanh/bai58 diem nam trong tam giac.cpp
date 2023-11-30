#include <bits/stdc++.h>
#define ll long long
#define vti std::vector<int>
#define vtl std::vector<ll>
#define map std::map
#define sort std::sort
#define task task
#define INP "input"
#define OUT "output"

int x[4],y[4];

double dodai(int x1,int x2,int y1,int y2)
{
    return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}
double dientich(int x1,int x2,int x3,int y1,int y2,int y3)
{
    double c1,c2,c3,p;
    c1 = dodai(x1,x2,y1,y2);
    c2 = dodai(x2,x3,y2,y3);
    c3 = dodai(x1,x3,y1,y3);
    p = (c1 + c2 + c3)/2;
    return sqrt(p*(p - c1)*(p - c2)*(p - c3));
}
void inp()
{
    for (int i = 0; i < 4; ++i) {
        std::cin >> x[i] >> y[i];
    }
}

void solve()
{
    double S1,S2,S3,S;
    S = dientich(x[0],x[1],x[2],y[0],y[1],y[2]);
    S1 = dientich(x[3],x[1],x[2],y[3],y[1],y[2]);
    S2 = dientich(x[0],x[1],x[3],y[0],y[1],y[3]);
    S3 = dientich(x[0],x[3],x[2],y[0],y[3],y[2]);
    double sum = S1 + S2 + S3;
    std::cout << (abs(sum - S) <= 0.00001 ? 1:0);
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