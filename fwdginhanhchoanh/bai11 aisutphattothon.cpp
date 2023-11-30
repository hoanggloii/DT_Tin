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
 int n,a,b,c;
 cin>>n;
 while(n--)
 {
 	cin>>a>>b>>c;
	int x=0 , y=0;
	while(a && b && c>1)
	{
		if(a%c==0){
			a--;
			x++;
		}
		else if(b%c==0){
			b--;
			y++;
		}
		else c--;
	}
	cout<<x<<" "<<y<<'\n'; 
 }
 return 0;
 }


