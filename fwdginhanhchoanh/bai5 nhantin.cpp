#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
//	freopen("bai.inp","r",stdin);
//	freopen("bai.out","w",stdout);
	int t, n;
	cin>> t ;
	for( int i=1; i<=t ;i++)
	{
		cin>>n;
		if(n==1) cout<< 1 << endl ;
		else cout<< n*2 - 2<< '\n';
	}
	return 0;
}
