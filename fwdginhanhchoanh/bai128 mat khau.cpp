#include<bits/stdc++.h>
#define ll long long
#define vti vector<int>
#define vtl vector<ll>
#define task task
#define INP "input"
#define OUT "output"

using namespace std;
string s;
void inp() {
    std::cin >> s;
    s = '#' + s;
}

void solve() {
    int n = (int)s.size();
    vector<int> hoa(n ,0);
    vector<int> thuong(n,0);
    vector<int> so(n ,0);
    for(int i = 1; i < n ; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z') thuong[i] = thuong[i-1]+1;
        else thuong[i] = thuong[i-1];
        if(s[i] >= '0' && s[i] <= '9') so[i] = so[i-1] + 1;
        else so[i] = so[i-1];
        if(s[i] >= 'A' && s[i] <= 'Z') hoa[i] = hoa[i-1] + 1;
        else hoa[i] = hoa[i-1];
    }
    ll count = 0 ;
    for (int i = 6; i < n; i++) {
        for (int j = 1; j < n - i + 1; j++) {
            bool k = (bool)so[j + i - 1] && (bool)hoa[j + i -1] && (bool )thuong[j+i - 1];
            if(so[i + j - 1] - so[j - 1]> 0 && hoa[i + j -1] - hoa[j - 1] > 0 && thuong[i+j-1] -thuong[j - 1] > 0 && k)
                count ++;
        }
    }
//    bool a = (bool)12;
    std::cout << count;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen(INP".inp", "r", stdin);
    freopen(OUT".out", "w", stdout);
    inp();
    solve();
    return 0;
}