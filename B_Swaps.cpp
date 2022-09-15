//CODE BY Sanchit Gupta
#define pb push_back
#define db double
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<lli>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpst map<string,lli>
#define mpc map<char,lli>
#define ff first
#define ss second
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=5e5+5;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n;
        vll a(n);
        vll b(n);
        for(i=0;i<n;i++){
            cin >> a[i];
        }
        for(i=0;i<n;i++){
            cin >> b[i];
        }
        vpl v(n); // for index matching
        for(i=0;i<n;i++){
            v[i].ff=a[i];
            v[i].ss=i;
        }
        sa(v); 

        lli mn=1e9;
        lli index=0;
        lli ans=1e9;
        for(i=0;i<n;i++){
            for(j=index;j<n;j++){
                if(b[i]>v[j].ff){ 
                    mn=min(mn,v[j].ss);
                }
                else{
                    index=j;
                    break;
                }
            }
            ans=min(ans,mn+i);
        }
        cout << ans << endl;
	}
}