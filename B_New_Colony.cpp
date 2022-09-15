//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpst map<string,lli>
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
	lli n,t,i,j,k,l,sum,flag,index;
    cin >> t;
    while(t--){
        cin >> n >> k;
        vll v(n);
        flag=0;
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        for(i=0;i<k;i++){
            flag=0;
            for(j=0;j+1<n;j++){
                if(v[j]<v[j+1]){
                    flag=1;
                    v[j]++;
                    index=j+1;
                    break;
                }
            }
            if(flag==0){
                cout << -1 << endl;
                break;
            }
        }
        
        if(flag){
            cout << index << endl;
        }
        
    }
}
