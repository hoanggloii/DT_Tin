#include <bits/stdc++.h>
using namespace std;
const int N=1E7;
#define ll long long
#define ff first
#define ss second

int main()
{
// ios_base::sync_with_stdio(0);
// cin.tie(0);cout.tie(0);
// freopen(".inp","r",stdin);
// freopen(".out","w",stdout);
	int t;
	ll tong=0;
	cin>>t;
	while(t--)
	{
		ll a,b,c;
		cin>>a>>b>>c;
		if(c%2==0)
		{
			tong=max(a,b)/min(a,b);
		}
		tong=max((a*2),b)/min((a*2),b);
	}
	cout<<tong;
 return 0;
 }


