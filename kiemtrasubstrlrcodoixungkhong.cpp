// lib
#include <iostream>
#include <vector>

// define
#define FOR(j,k,i) for(int i = k ; i <= j ;i++)
#define FIR(j,k,i) for(int i = j ; i >= k ;i--)
#define task "task"

// data
using namespace std;
typedef long long ll;
const ll base = 31;
const ll MOD=1000000007;
string s;
vector<ll> hash1;
vector<ll> hash2;
int q;


// function
ll checkHash1(int l ,int r);
ll checkHash2(int r ,int l);
vector<ll> pw;
void solve(){
    cin >> s;
    s = ' ' + s;
    int n = (int)s.size();
    hash1.resize(n+1,0);
    hash2.resize(n+2,0);
    FOR(n,1,i) {
        hash1[i] = (hash1[i-1]*base + s[i] - 'a' + 1) % MOD;
    }
    FIR(n,1,i) {
        hash2[i] = (hash2[i+1]*base + s[i] - 'a' + 1) % MOD;
    }
    pw.resize(n/2,1);
    FOR(n/2,1,i) pw[i] = pw[i-1]*base % MOD;
    cin >> q;
    while(q--) {
        int l, r;
        cin >> l >> r;
        int k = l + r - 1;
        if(k % 2 == 0) {
            int mid = k/2;
            if(checkHash1(l,mid) == checkHash2(r,mid + 1)){
                cout << "ok bae\n";
            }else cout << "wrong\n";
        }else {
            int mid = (k + 1)/2;
            if(checkHash1(l,mid-1) == checkHash2(r,mid + 1)) {
                cout << "ok bae\n";
            }else cout << "wrong\n";
        }
    }

}

ll checkHash1(int l,int r){
    ll ans = ((hash1[r] - hash1[l - 1]*pw[r - l + 1])%MOD + MOD)%MOD;
    return ans;
}

ll checkHash2(int r,int l){
    ll ans = ((hash2[l] - hash2[r + 1]*pw[r - l + 1])%MOD + MOD)%MOD;
    return ans;
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