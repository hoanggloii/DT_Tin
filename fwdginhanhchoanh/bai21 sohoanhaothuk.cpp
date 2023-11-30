#include <bits/stdc++.h>
using namespace std;
const int N=1E7;
#define ll long long
#define ff first
#define ss second
int tong(ll n)
{
    if(n == 0) return 0;
    else
	return n% 10 + tong(n / 10) ;
    
}
int main()
{
// ios_base::sync_with_stdio(0);
// cin.tie(0);cout.tie(0);
// freopen(".inp","r",stdin);
// freopen(".out","w",stdout);
	int k;
	cin>>k;
	int i=1;
	ll m=19;int t;
	while(i<=k)
	{
		if(tong(m)==10)
		{
			t = m;
			i++;
		}
		m+=9;
	}
	cout<< t;

 return 0;
 }
