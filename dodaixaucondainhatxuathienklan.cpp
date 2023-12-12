/*
    cho xau s va so nguyen k tim xau con dai nhat xuat hien > k lan trong s

*/

// lib
#include <iostream>
#include <string>
#include <vector>
#include <map>
// define
#define task "task"
#define FOR(j, k, i) for(int i = k ; i <= j ;i++)
#define FIR(j, k, i) for(int i = j ; i >= k ;i--)
#define ll long long
// data
using namespace std;

const ll MOD = 1000000007;
const ll base = 31;
string s;
int k;
vector<ll> has;
vector<ll> pw;
// function

ll getHash(int l, int r) {
    ll ans = ((has[r] - has[l - 1] * pw[r - l + 1]) % MOD + MOD) % MOD;
    return ans;
}

bool check(int p) {
    map<ll, int> m1;
    int maxx = -1;
    FOR(s.length() - p, 1, i) {
        ll k = getHash(i, i + p - 1);
        m1[k]++;
        maxx = max(m1[k],maxx);
    }
    return maxx >= k;
}

void solve() {
    cin >> s >> k;
    s = ' ' + s;
    int n = (int) s.length();
    int l = 1, r = n - k;
    int res = 0;
    has.resize(n + 1, 0);
    FOR(n - 1, 1, i) {
        has[i] = (has[i - 1] * base + s[i] - 'a' + 1) % MOD;
    }
    pw.resize(r, 1);
    FOR(r, 1, i) pw[i] = pw[i - 1] * base % MOD;
    while (l <= r) {
        int mid = (r + l) / 2;
        if (check(mid)) {
            res = max(res, mid);
            l = mid + 1;
        } else r = mid - 1;
    }
    cout << res;
}

// main

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen(task".inp", "r", stdin);
    freopen(task".out", "w", stdout);
    solve();
    return 0;
}