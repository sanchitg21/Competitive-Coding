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
        vector<vll>ans;
		cin >> n;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        vll s=v;
        sa(s);
        lli count=0;
        for(i=0;i<n;i++){
            lli num= s[i];
            if(v[i]==num){
                continue;
            }
            count++;
            lli l=i+1;
            lli r=n;
            for(j=i+1;j<n;j++){
                if(v[j]==num){
                    break;
                }
            }
            lli d=j-i;
            //rotate
            vll b;
            for(j=i;j<n;j++){
                b.pb(v[j]);
            }
            vll a(b.size());
            for(j=0;j<b.size();j++){
                a[j]=b[(j+d)%b.size()];
            }
            lli start=0;
            for(j=i;j<n;j++){
                v[j]=a[start++];
            }
            // for(j=0;j<n;j++){
            //     cout << v[j] << " ";
            // }
            // cout << endl;
            //save l r d
            ans.pb({l,r,d});
            //cout << l << " " << r << "  "<< d << endl;
        }
        cout << count << endl;
        for(i=0;i<count;i++){
            cout << ans[i][0] << " " << ans[i][1] << " " << ans[i][2] << endl;
        }
	}
}
