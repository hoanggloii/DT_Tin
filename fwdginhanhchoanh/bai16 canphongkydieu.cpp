#include <bits/stdc++.h>
using namespace std;
const int N=1E7;
#define ll long long
#define ff first
#define ss second
pair<ll,ll>p[2];
ll kt(ll n,ll x)
{
	for(int i=2;i*i<=n;i++)
		if(n%i==0 && i>=x) return i;
}
int main()
{
// ios_base::sync_with_stdio(0);
// cin.tie(0);cout.tie(0);
// freopen(".inp","r",stdin);
// freopen(".out","w",stdout);
	ll a,n,b;
	cin>>n>>a>>b;
	n*=6;
	if(a*b>=n) cout<<a*b<<'\n'<<a<<" "<<b;
	else
	{
		ll m=kt(n,min(a,b));
		if(m>=min(a,b)) cout<<n<<'\n'<<m<<" "<<n/m;
	}	
 return 0;
 }
