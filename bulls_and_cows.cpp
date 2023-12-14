#include <bits/stdc++.h>
using namespace std;
#define MOD 2111992
#define maxn 100005
int f[maxn];

int main(){
    int n,k;
    cin >> n >> k;
    f[0] = 1;
    for(int i = 1 ; i <= k ; i++) f[i] = i+1;
    for(int i = k + 1 ; i <= n ; i++) f[i] = (f[i-1] + f[i-k-1])%MOD;
    cout << f[n];
}
