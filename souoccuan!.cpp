#include <bits/stdc++.h>
#define task "task"
#define ll long long
#define FOR(j,k,i) for(int i = k ; i <= j ;i++)
using namespace std;
int n;
bool nt[100001];
vector<int> nt1;
void snt(){
    for(int i = 0 ; i < 100001 ; i++) nt[i] = true;
    nt[0] = nt[1] = false;
    FOR(100000,2,i)
        if(nt[i]){
            nt1.push_back(i);
            for(int j = i*2 ; j <= 100000 ; j += i) nt[j] = false;
        }
}
int dem(int n,int k){
    int cnt = 0;
    for(int i = k ; n / i >= 1 ; i *= k){
        cnt += n / i;
    }
    return cnt;
}
const int MOD=1E9;
void solve(){
    scanf("%d",&n);
    ll cnt = 1;
    snt();
    for(int i = 0 ; nt1[i] <= n ; i++){
        cnt = ((cnt % MOD) * ((dem(n,nt1[i]) + 1) % MOD))%MOD;
    }
    printf("%lld",cnt);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen(task".inp","r",stdin);
    freopen(task".out","w",stdout);
    solve();
    return 0;
}