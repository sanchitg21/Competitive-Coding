//CODE BY Sanchit Gupta
#define pb push_back
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
const int mod=1e9+7;
const int M=5e5+5;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,sum,a,flag=0;
	t=1;
	while(t--){
		cin >> n;
        vll v(n,0);
        vll s(1,0);
        for(i=1;i<=n-1;i++){
            cout << "?" << " " << i << " " << i+1 << endl;
            cin >> sum;
            v[i]=sum;
        }
        s.pb(v[1]);
        for(i=2;i<n;i++){
            s.pb(v[i]-s[i-1]);
        }
        m=s.size();
        if(m%2==0){
            m--;
            flag=1;
        }
        lli count=0;
        for(i=1;i<m;i++){
            count+=s[i];
        }
        if(flag==1){
            cout << "?" << " " << 1 << " " << n-1 << endl;
        }
        else{
            cout << "?" << " " << 1 << " " << n << endl;
        }
        cin >> sum;
        s[0]=sum-count;
        for(i=1;i<m;i=i+2){
            s[i]-=s[0];
        }
        for(i=2;i<m;i=i+2){
            s[i]+=s[0];
        }
        if(flag==1){ 
            if((m)%2==0){
                s[s.size()-1]+=s[0];
            }
            else{
                s[s.size()-1]-=s[0];
            }
        }
        cout << "!";
        for(i=0;i<s.size();i++){
            cout << " " << s[i];
        }
        cout << endl;      
	}
}