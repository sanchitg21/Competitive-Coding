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
	lli n,t,i,j,flag;
    cin >> t;
    while(t--){
        flag=0;
        cin >> n;
        vll v(n);
        lli counts[100001][2]; 
        for(i=0;i<100001;i++){
            counts[i][0]=0;
            counts[i][1]=0;
        }
        for(i=0;i<n;i++){
            cin >> v[i];
            counts[v[i]][i%2]++;
        }
        sa(v);
        for(i=0;i<n;i++){
            counts[v[i]][i%2]--;
        }
        for(i=0;i<100001;i++){
            if(counts[i][0]!=0 || counts[i][1]!=0 ){
                flag=1;
                break;
            }
        }
        if(flag){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }           
}