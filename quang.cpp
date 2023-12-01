// Define Time 
#define TIME (1.0 * clock()/CLOCKS_PER_SEC)
// Xep Bi
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define pub push_back
#define pob pop_back
#define fi first
#define se second
#define ii pair<int, int>
#define all(x) x.begin(), x.end()
#define mod 1000000007
#define db doubler  nbb
#define FORi(st, n, jp) for(int i = st; i <= n; i += jp)
#define FORj(st, n, jp) for(int j = st; j <= n; j += jp)
#define FORn(n, st, jp) for(int i = n; i >= st; i -= jp) 
#define TIME (1.0 * clock()/CLOCKS_PER_SEC)
#define N (int)1e6+5
ll binPow(ll a, ll k){
	if(k == 0)
		return 1;
	ll x = binPow(a, k/2);
	if(k % 2 == 0)
		return x * x;
	else
		return x * x * a;
}
//--------------------------------DEFINE---------------------------------------
int n, k, a[N], b[N];
//-------------------------------KHAI BAO--------------------------------------

//---------------------------------HAM------------------------------------------

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);	cout.tie(0); 
   	freopen("XepBi.inp","r",stdin);
	freopen("XepBi.out","w", stdout);	

	cin >> n >> k;
	FORi(1, n, 1)	cin >> a[i];
	FORi(1, n, 1)	cin >> b[i];
	int res = 1, pre = a[1];
	FORi(2, n, 1){
		if(b[i] == b[i-1]){
			if(pre + a[i] <= k){
				pre += a[i];
			}
			else{
				res++;
				pre = a[i];
			}
		}
		else{
			res++;
			pre = a[i];
		}
	}
	cout << res;
	return 0;
}
// DDC
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define pub push_back
#define pob pop_back
#define fi first
#define se second
#define ii pair<int, int>
#define all(x) x.begin(), x.end()
#define mod 1000000007
#define db doubler  nbb
#define FORi(st, n, jp) for(int i = st; i <= n; i += jp)
#define FORj(st, n, jp) for(int j = st; j <= n; j += jp)
#define FORn(n, st, jp) for(int i = n; i >= st; i -= jp) 
#define TIME (1.0 * clock()/CLOCKS_PER_SEC)
#define N (int)1e6+5
ll binPow(ll a, ll k){
	if(k == 0)
		return 1;
	ll x = binPow(a, k/2);
	if(k % 2 == 0)
		return x * x;
	else
		return x * x * a;
}
//--------------------------------DEFINE---------------------------------------
ll n, s, a[N];
//-------------------------------KHAI BAO--------------------------------------

//---------------------------------HAM------------------------------------------

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);	cout.tie(0); 
   	freopen("DDC.inp","r",stdin);
	freopen("DDC.out","w", stdout);	

	cin >> n >> s;
	FORi(1, n, 1){
		cin >> a[i];
	}
	ll sum = 0, res = 0, l = 0, r = 1;
	while(r <= n){
		sum += a[r];
		while(sum - a[l] > s){
			sum -= a[l];
			l++;
		}
		res += r - l;
		r++;
	}
	cout << res;
	return 0;
}
// ZXY
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

const int maxn = 100000;
string fi = "test/zxy9.in";
string fo = "zxy9.ou";

vector<int> a(maxn);
int max_a, n, k;
long long s, m, min_m, m1, m2;

void nhapdl() {
    ifstream f(fi);
    f >> n >> k;
    s = 0;
    max_a = 0;
    for (int i = 0; i < n; i++) {
        f >> a[i];
        s += a[i];
        max_a = max(max_a, a[i]);
    }
    f.close();
}

int demhop(long long x) {
    int dem = 1;
    long long t = 0;
    for (int i = 0; i < n; i++) {
        if (t + a[i] <= x) {
            t += a[i];
        } else {
            t = a[i];
            dem++;
        }
        if (dem > k) break;
    }
    return dem;
}

void xuli() {
    long long l = max_a, r = s;
    do {
        m1 = (l + r) / 2;
        int sohop = demhop(m1);
        if (sohop > k) {
            l = m1 + 1;
        } else if (sohop <= k) {
            m = m1;
            r = m1 - 1;
        }
    } while (l <= r);
}

void inkq() {
    ofstream f(fo);
    f << m << endl;
    f.close();
}

int main() {
    nhapdl();
    xuli();
    inkq();
    return 0;
}
// Het
