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
	int n;
	cin>>n;
	while(n--)
	{
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		int x=min(c,d), y=max(c,d);
		if(c==1 || d==1) cout<<b-a<<'\n';		
		else
		{
			int i=0, dem=0;
			for(i=1; i<=a/2; i++)
			{
				if(x*i >= a) break;
			}
			for(i; i<=b/2; i++)
			{
				if(x*i <= b ) dem++;
				if(x*i > b ) break;
			}
			int j=0;
			for(j=1; j<=a/2; j++)
			{
				if(y*j >= a) break;
			}
			for(j; j<=b/2; j++)
			{
				if(y*j <= b && j%x !=0) dem++;
				if(y*j > b ) break;
			}
			cout<<dem<<'\n';
		}			
	}
 return 0;
 }
