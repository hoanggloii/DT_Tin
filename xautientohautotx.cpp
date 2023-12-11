/**
  Cho 2 xau t va x tim xau s ngan nhat sao cho t la xau tien to
  x la xau hau to cua s
**/

// lib
#include <iostream>
#include <string>
#include <vector>

// define
#define task "task"
#define max_len 100000
#define FOR(j,k,i) for(int i = k ; i <= j ;i++)
#define FIR(j,k,i) for(int i = j ; i >= k ;i--)

// data
using namespace std;
typedef long long ll;
const ll MOD = 1000000009;
const ll base = 31;
string t,x;
vector<ll> hash1,hash2;
vector<ll> pw;
// function

ll checkHash(int l,int r,vector<ll> hash){
    ll ans = ((hash[r] - hash[l - 1]*pw[r - l + 1])%MOD + MOD)%MOD;
    return ans;
}

void solve(){
    cin >> t >> x;string t1 = t,x1 = x;
    int n = (int)t.size(),m = (int)x.size();
    hash1.resize(n+1,0);hash2.resize(m+1,0);
    t = ' ' + t;
    x = ' ' + x;
    FOR(n,1,i){
        hash1[i] = (hash1[i - 1] * base + t[i] - 'a' + 1) % MOD;
    }
    FOR(m,1,i) {
        hash2[i] = (hash2[i - 1] * base + x[i] - 'a' + 1) % MOD;
    }
    pw.resize(min(n,m),1);
    FOR(min(n,m),1,i) pw[i] = pw[i-1]*base % MOD;
    int i = min(n,m);
    for(;i >= 1 ; i--){
        if(checkHash(n-i +1,n,hash1) == checkHash(1,i,hash2)){
            cout << t1 + x1.substr(i,m-i+1);return;
        }
    }
    cout << t1 + x1;

}

// main

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen(task".inp","r",stdin);
    freopen(task".out","w",stdout);
    solve();
    return 0;
}