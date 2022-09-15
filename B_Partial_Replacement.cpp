#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define FASTIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define vt vector
#define sz(x) int(x.size())



int main()
{
	FASTIO;
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k,x,y;
		cin>>n>>k;
		string s;
		cin>>s;
		ll ans=0;
		for(ll i=0;i<n;i++)
		{
			if(s[i]=='*')
			{
				x=i;
				break;
			}
		}
		for(ll i=n-1;i>=0;i--)
		{
			if(s[i]=='*') 
			{
				y=i;
				break;
			}
		}
		if(x==y)
		{
			cout<<"1\n";
			continue;
		}
		s[x]='x';
		ans=1;
		for(ll i=x;i<n;i++)
		{
			if(s[i]=='x')
			{	
				for(ll j=i+k;j>i;j--)
				{
					if(j<n && s[j]=='*')
					{
						ans++;
						s[j]='x';
						i=j-1;
						break;
					}
				}
			}
		}
		cout<<ans<<"\n";
	}

}