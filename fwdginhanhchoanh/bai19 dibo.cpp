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
	int m;
	cin>>n>>m;
	int k=n/2;
	int i;
	for( i=k; i<=n ; i++)
	{
		if(i%m==0)
		{
			cout<<i;
			return 0;
		}
	}
	if(i>n) cout<<-1;
 return 0;
}
