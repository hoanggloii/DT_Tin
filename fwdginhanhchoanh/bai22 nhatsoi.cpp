#include <bits/stdc++.h>
using namespace std;
const int N=1E7;
#define ll long long
#define ff first
#define ss second
int a[N],n;
ll k;
int main()
{
// ios_base::sync_with_stdio(0);
// cin.tie(0);cout.tie(0);
// freopen(".inp","r",stdin);
// freopen(".out","w",stdout);
	cin>>n>>k;
	int ngay=0;
	for(int i=1; i<=n; i++)
		cin>>a[i];
	sort(a+1,a+n+1);
	int i=1;
	for( i ; i<=n; i++)
	{
		if(a[i]>k) break;
	}
	if(i%2==0) ngay+=i/2;
	else ngay+=i/2+1;
	int m=0,d=0;
	for(i; i<=n ; i++)
	{
		m+=ceil(a[i]/k)-m;
		d++;
	}
	ngay+=m;
	if(d%2!=0) ngay+=1;
	cout<<ngay;
 return 0;
 }

