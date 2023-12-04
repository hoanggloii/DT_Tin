#include <bits/stdc++.h>
#define ll long long
#define vti vector<int>
#define vtl vector<ll>
#define task "BB"
#define FOR(j,k,i) for(int i = k; i <=j ; i++)
#define FIR(j,k,i) for(int i = j; i >= k ; i--)

using namespace std;

void solve(){
    int n;
    scanf("%d",&n);
    vector<int> vt1(n);
    FOR(n-1,0,i) scanf("%d",&vt1[i]);
    sort(vt1.begin(), vt1.end());
    double S = vt1[0];
    FOR(n-1,1,i){
        S = ((double)vt1[i] + S)/2;
    }
    double res = 0;
    FOR(n-1,0,i){
        res += S - (double)vt1[i];
    }
//    printf("%f",res);
    cout<< fixed << setprecision(5) << res;
}


int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);cout.tie(nullptr);
     freopen(task".inp","r",stdin);
     freopen(task".out","w",stdout);
    solve();
    return 0;
}

