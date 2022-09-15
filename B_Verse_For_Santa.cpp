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
	lli n,m,t,i,j,k,flag,sum,index;
	cin >> t;
	while(t--){
		cin >> n >> k;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        flag=0;
        sum=0;
        for(i=0;i<n;i++){
            if(v[i]+sum<k){
                sum+=v[i];
            }
            else{
                sum=sum+v[i];
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout << 0 << endl;
            continue;
        }
        else if(sum==k && i==n-1){
            cout << 0 << endl;
            continue;
        }
        lli mx=0;
        for(j=0;j<=i;j++){
            if(mx<v[j]){
                mx=v[j];
                index=j;
            }
        }
        if(i+1<n){ 
        if(v[index]<=v[i+1]){
            cout << i+2 << endl;
            continue; 
        }
        }
        cout << index+1 << endl;
	}
}
