#include <bits/stdc++.h>
#define ll long long
#define FOR(j,k,i) for(int i = k ; i <= j ;i++)
#define task "task"
using namespace std;
const int base = 31;
const int MOD = 1000000007;
ll pw = 1;
vector<ll> hs;
ll getHash(int l,int r){
//    ll ans = (hs[r] - hs[l - 1]*pw + 1LL*MOD*MOD)%MOD;
    ll ans = ((hs[r] - hs[l - 1]*pw)%MOD + MOD)%MOD;
    return ans;
}

void solve(){
    string s,sub;
    cin >> s >> sub;
    int n = s.length(),m = sub.length();
    FOR(m,1,i) pw = pw*base % MOD;
    s = ' ' + s;sub = ' ' + sub;
    ll HashSub = 0;
    hs.resize(n + 1,0);
    FOR(m,1,i) HashSub = (HashSub*base + sub[i] - 'a' + 1) % MOD;
    FOR(n,1,i) hs[i] = (hs[i-1]*base + s[i] - 'a' + 1) % MOD;
    FOR(n-m+1,1,i){
        if(getHash(i,i + m - 1) == HashSub) cout << i << ' ';
    }
}

int main(){
    freopen(task".inp","r",stdin);
    freopen(task".out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    solve();
    return 0;
}