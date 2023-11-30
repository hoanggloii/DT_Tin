#include <bits/stdc++.h>

#define ll long long
#define vti vector<int>
#define vtl vector<ll>
#define task task
#define INP "input"
#define OUT "output"

using namespace std;
int yh,ya,yd,mh,ma,md,h,a,d,m = 1 << 30;
void inp() {
    std::cin >> yh >> ya >> yd >> mh >> ma >> md >> h >> a >> d;
}

void solve() {
    for(int i = ya ; i  <= 200 ; i++ )
    {
        for (int j = yd; j <= 100; j++) {
            if(i <= md) continue;
            int r = ceil((double) mh / (i - md));
            int k = max((ma - j)*r+1,yh);
            m = min (m,(k - yh)*h + (i - ya) + (j - yd) *d);
        }
    }
    std::cout << m;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen(INP".inp", "r", stdin);
    freopen(OUT".out", "w", stdout);
    inp();
    solve();
    return 0;
}