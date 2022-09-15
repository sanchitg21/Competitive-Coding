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
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    vll ans(n,-1);
    for(i=1;i<n;i++){
        if(v[i]!=v[i-1]){
            ans[i]=v[i-1];
        }
    }
    
    vll num(2*n+1);
    for(i=0;i<=2*n;i++){
        num[i]=1;
    }
  
    for(i=0;i<n;i++){
        if(v[i]<=2*n){ 
            num[v[i]]=0;
        }
    }
    j=0;

    for(i=0;i<n;i++){
        if(ans[i]==-1 && num[j]==1){
            ans[i]=j;
            j++;
        }
        else if(ans[i]==-1 && num[j]==0){
            j++;
            i--;
        }
    }

    for(i=0;i<n;i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}
