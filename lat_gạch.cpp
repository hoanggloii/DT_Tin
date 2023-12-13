

// lib
#include <iostream>
#include <string>
#include <vector>

// define
#define task "task"
#define FOR(j,k,i) for(int i = k ; i <= j ;i++)
#define FIR(j,k,i) for(int i = j ; i >= k ;i--)

// data
using namespace std;
typedef long long ll;

// function

string cong(string x,string y){
    int sx=x.length();
    int sy=y.length();
    int l=abs(sx-sy);
    if(sx<sy)
        for(int i=1; i<=l; i++) x='0'+x;
    else
        for(int i=1; i<=l; i++) y='0'+y;
    l=x.length(); int res=0;
    string z;
    for(int i=l-1; i>=0; i--){
        int r=x[i]+y[i]-96+res;
        res=r/10;
        z=char(r%10+48)+z;
    }
    if(res>0) z=char(res+48)+z;
    return z;
}


void solve(){
    int T;
    cin >> T;
    string dp[102];
    dp[0] = dp[1] = "1";
    FOR(100,2,i){
        dp[i] = cong(dp[i-1],dp[i-2]);
    }
    while(T--){
        int n;
        cin >> n;
        cout << dp[n] << '\n';
    }
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
