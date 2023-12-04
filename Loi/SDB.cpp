#include <bits/stdc++.h>
#define ll long long
#define vti vector<int>
#define vtl vector<ll>
#define task "SDB"
#define FOR(j,k,i) for(int i = k; i <=j ; i++)
#define FIR(j,k,i) for(int i = j; i >= k ; i--)

using namespace std;
int n;string s;

int check(string a){
    int sum = 0;
    FOR(a.length() - 1,0,i){
        sum += a[i] - '0';
    }
    return sum;
}
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
    cin >> n >> s;
    int k = check(s);
    s = cong(s,"1");
    while(s.length() == n){
        if(check(s) == k) {cout << s;return;}
        s = cong(s,"1");
    }
    cout << "-1";
}

int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);cout.tie(nullptr);
     freopen(task".inp","r",stdin);
     freopen(task".out","w",stdout);
    solve();
    return 0;
}

