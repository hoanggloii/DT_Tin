#include<bits/stdc++.h>
using namespace std;
#define ll long  long 
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
//	freopen("bai.inp","r",stdin);
//	freopen("bai.out","w",stdout);
	int t;
	ll n,dem;
	cin>>t;
	while(t--)
	{
		cin>>n;
		dem=0;
		while(n)
		{
			dem+=n%2;
			n/=2;
		}
//		if(dem%2==0) cout<<"even \n";
//		else cout<<"odd \n";
		cout<<(dem%2 ? "odd\n":"even\n");
	}	
	return 0;
}
