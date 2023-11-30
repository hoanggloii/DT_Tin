#include <bits/stdc++.h>
using namespace std;
const int N=1E8;
#define ll long long
#define ff first
#define ss second
ll a[10005],b[10005],f[N];
bool cmp(ll a, ll b)
{
	return a>b;
}
int main()
{
// ios_base::sync_with_stdio(0);
// cin.tie(0);cout.tie(0);
// freopen(".inp","r",stdin);
// freopen(".out","w",stdout);
 int t,n;
 cin>>t>>n;
 for(int i=1; i<=t; i++)
 {
 	for(int j=1; j<=n ; j++)
 	{
 		cin>>a[j];
	 }
	 ll maxx = 0;
	 for(int k=1; k<=n; k++)
	 {
	 	cin>>b[k];
	 	maxx=max(abs(b[k] - a[k]),maxx);
	 }
	 cout << maxx;
  }
 return 0;
 }

