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
#define endl '\n'
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
using namespace std;
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
        vector<vll>v(n,vector<lli>(5));
        for(i=0;i<n;i++){
            for(j=0;j<5;j++){
                v[i][j]=0;
            }
        }
        vector<string>s(n);
        for(i=0;i<n;i++){
            cin >> s[i];
        }
        string w="abcde";
        for(k=0;k<5;k++){ 
            for(i=0;i<n;i++){
                for(j=0;j<s[i].size();j++){
                    if(s[i][j]==w[k]){ 
                        v[i][k]++;
                    }
                }
            }
        }
        vector<vll> ans(5,vector<lli>(n));
        for(i=0;i<5;i++){ 
            for(j=0;j<n;j++){
                ans[i][j]= 2*v[j][i]-s[j].size();
            }
        }
        for(i=0;i<5;i++){
            sd(ans[i]);
        }
        lli mx=0;
        for(i=0;i<5;i++){
            lli count=0;
            lli sum=0;
            j=0;
            while(j<n && sum+ans[i][j]>0){
                sum=sum+ans[i][j];
                count++;
                j++;
            }
            mx=max(mx,count);
        }
        cout << mx << endl;
	}
}