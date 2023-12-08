#include<bits/stdc++.h>
using namespace std;
string s;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("bai.inp","r",stdin);
	freopen("bai.out","w",stdout);
	int n;
	cin>>n;
	while(n--)
	{
		cin>>s;
		for(int i=0;i<s.length();i++)
			if(s[i]=='0')	s[i]='5';
		for(int i=0;i<s.length();i++)
			cout<<s[i];
		cout << '\n';
	}
	return 0;
}
