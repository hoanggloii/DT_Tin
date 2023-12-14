#include <bits/stdc++.h>

#define FOR(j, k, i) for(int i = k ; i <= j ; i++)
#define lb(a,x) lower_bound(a.begin()+1,a.end(),x) - a.begin()
#define ub(a,x) upper_bound(a.begin()+1,a.end(),x) - a.begin()
using namespace std;

int main() {
    int n, m, p, t, b;
    scanf("%d %d %d %d %d", &n, &m, &p, &t, &b);
    // n : so nha , m : so nha can den , p : so tram xe bus , t : so tien di taxi ,
    // b : so tien di xe bus
    vector<int> des(m + 1), bus(p + 1);
    FOR(m, 1, i) scanf("%d", &des[i]);
    FOR(p,1,i) scanf("%d",&bus[i]);
    sort(des.begin() + 1, des.end());
    sort(bus.begin() + 1, bus.end());
    des[0] = 1;des.push_back(n);
    vector<int> nb(m+1);
    nb[0] = 1;
    FOR(m + 1,1,i){
        int k = bus[ub(bus,des[i])];
        int j = bus[ub(bus,des[i]) - 1];
        if(abs(des[i] - k) < abs(des[i] - j)) nb[i] = k;
        else nb[i] = j;
    }
    long long s = 0;
    FOR(m + 1,1,i){
        int k = (des[i] - des[i-1]) * t;
        int l = (abs(nb[i-1] - des[i-1]) + abs(nb[i] - des[i])) * t + b;
        s += min(k,l);
    }
    printf("%lld",s);
}
