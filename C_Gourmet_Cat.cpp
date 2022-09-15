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
#define endl '\n'
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,a,b,c,sum,ans;
	t=1;
	while(t--){
		cin >> a >> b >> c;
        sum=min(min(a/3,b/2),c/2);
        a=a-sum*3;
        b=b-sum*2;
        c=c-sum*2;
        cout << a << b <<c << endl;
        ans=sum*7;
        if(a==3 && b==1 && c==1){
            
        }
        
        else if(a==1 && b==0 && c==0){ 
            ans++;
        }
        else if(a==1 && b==1 && c==1){ 
            ans=ans+3;
        }
        else if(a==1 && b==1 && c==0){ 
            ans=ans+2;
        }
        else if(a==1 && b==0 && c==1){ 
            ans=ans+2;
        }
        else if(a==0 && b==0 && c==1){ 
            ans++;
        }
        else if(a==0 && b==1 && c==0){ 
            ans++;
        }
        else if(a==0 && b==1 && c==1){ 
            ans=ans+2;
        }
        else if(a==0 && b==2 && c==1){ 
            ans=ans+2;
        }
        
        
        
        
        
        
	}
}
