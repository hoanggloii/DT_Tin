#include <bits/stdc++.h>
using namespace std;
const int N=1E5+5;
#define ll long long
#define ff first
#define ss second
int a[N],b[N];
int main()
{
// ios_base::sync_with_stdio(0);
// cin.tie(0);cout.tie(0);
// freopen(".inp","r",stdin);
// freopen(".out","w",stdout);
	int t,p,n;
	cin>>t ;
	while(t--)
	{
		long long sum = 0;
		cin >> n >> p;
		for(int i = p ; n/i >= 1; i*=p)
		{
			sum += n/i;	
		}
		cout << sum << '\n';
	}
 return 0;
}
