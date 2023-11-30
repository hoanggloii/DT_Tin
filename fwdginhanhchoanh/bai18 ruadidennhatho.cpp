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
	ll a,b,s;
	cin>>a>>b>>s;
	ll k=abs(a)+abs(b);
	if(k==s) cout<<"yes";
	if(k>s) cout<<"no";
	if(k<s)
	{
		if(s%2==0) cout<<"yes";
		else cout<<"No";
	}

 return 0;
 }


