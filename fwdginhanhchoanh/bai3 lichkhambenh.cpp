#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
//	freopen("bai.inp","r",stdin);
//	freopen("bai.out","w",stdout);
	int tg=0;
	int n,x,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>x;
		tg=x+(n-1)*10-x*n;
		cout<<tg<<endl;
	}
	return 0;
}
