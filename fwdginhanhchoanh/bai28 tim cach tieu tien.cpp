#include <bits/stdc++.h>

#define ll long long
#define vti vector<int>
#define vtl vector<ll>
#define task task
#define INP "input"
#define OUT "output"

using namespace std;

int N,A,B;

void inp() {
    std::cin >> N >> A >> B;
}

void solve() {
    if(N % 2 == 1)
        if(A %2 == 0 && B % 2 == 0)
        {
            std::cout << "NO" ; return;
        }
    int k = 0;
    do
    {
        if((N - k*A) % B == 0)
        {
            std::cout << "YES\n" << k << " " << (N - k*A) / B;return ;
        }
        k++;
    }while (k);
    std::cout <<"NO";
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