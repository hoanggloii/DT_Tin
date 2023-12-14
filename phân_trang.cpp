#include <bits/stdc++.h>

using namespace std;
#define maxn 6003

int main() {
    int n, l, s[maxn], f[maxn];
    cin >> n >> l;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        s[i] = s[i - 1] + a;
    }
    for (int i = 1; i <= n; i++) f[i] = l;
    for (int i = 1; i <= n; i++) {
        for(int j = 0 ; j < i ; j ++){
            if(s[i] - s[j] <= l){
                f[i] = min(f[i],max(f[j] , l - (s[i] - s[j])));
            }
        }
    }
    cout << f[n];
}
