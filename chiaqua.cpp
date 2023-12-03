#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <stack>
#include <string>
#include <cmath>
#include <cstring>
#define ll long long
#define vti vector<int>
#define vtl vector<ll>
#define task "task"
#define FOR(j,k,i) for(int i = k; i <=j ; i++)
#define FIR(j,k,i) for(int i = j; i >= k ; i--)

using namespace std;
int n,m;
vector<ll> vt1;
pair<ll,ll> dem(ll k){
    ll res = 0;
    ll maxx = 0;
    FOR(m,1,i){
        res += vt1[i]/k + (vt1[i] % k == 0 ? 0:1);
        maxx = max(k,maxx);
    }
    return {res,maxx};
}

void solve(){
    std::cin >> n >> m;
    vt1.resize(m+1);
    ll sum = 0 ,maxx = -1;
    FOR(m,1,i) {
        cin >> vt1[i];
        sum += vt1[i];
        maxx = max(maxx,vt1[i]);
    }
    int l = sum/n - 1,r = maxx;
    ll result = -1;
    while(l <= r){
        int mid = (l+r)/2;
        pair<ll,ll> s = dem(mid);
        if(s.first > n){
            l = mid;
        }else if(s.first < n){
            r = mid;
        }
        else {
            std::cout << s.second ; return;
        }
    }
}

int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);cout.tie(nullptr);
     freopen(task".inp","r",stdin);
     freopen(task".out","w",stdout);
    solve();
    return 0;
}
