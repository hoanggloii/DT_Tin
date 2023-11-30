#include<bits/stdc++.h>
using namespace std;
const int N=1E7 ;
int a[N],b[N];
int t,n,i;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
//	freopen("bai.inp","r",stdin);
//	freopen("bai.out","w",stdout);
//	vector<long long >b;
//	fill( b.begin(), b.end(), 0);
	fill( b, b+N , 0);
	long tong = 0 ;
	int j=1;
	for(i=1;i < 4473 ; i++)
	{
		tong += i;
		a[j] = tong ;
		b[a[j]]++;
		j++;
	}
	cin>>t;
	for( i = 1 ; i <= t ; i++ )
	{
		cin>>n;
		if(b[n]==1) cout<< 1<<'\n';
		else cout<< 0 << '\n';
	}
	return 0;
}
