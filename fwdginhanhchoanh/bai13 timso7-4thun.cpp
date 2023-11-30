#include <bits/stdc++.h>
using namespace std;
const int N=1E7;
#define ll long long
#define ff first
#define ss second
ll a[1005];

	
int main()
{
// ios_base::sync_with_stdio(0);
// cin.tie(0);cout.tie(0);
// freopen(".inp","r",stdin);
// freopen(".out","w",stdout);
	int t;
	a[1]=4;
	a[2]=7;
	for(int i=3; i<=1005; i++)
	{
		if(i%2==0) a[i]=a[i/2-1]*10+7;
		else a[i]=a[i/2]*10+4;
	}
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<a[n]<<'\n';
	}	

 return 0;
 }
