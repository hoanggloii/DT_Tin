#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;int k;
    cin >> k >> s;
    long long sum[s.length()];
    for(int i = 1 ; i <= s.length() ; i ++){
        sum[i] = sum[i - 1] + s[i - 1] - 'a' + 1;
    }
    long long cnt = 0 ;
    for(int i = 1 ; i <= s.length() ; i ++){
        int j = binary_search(sum + 1,sum + s.length() + 1,sum[i] + k);
        if(j) cnt ++;
    }
    cout << cnt ;
}
