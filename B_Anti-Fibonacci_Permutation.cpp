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
#pragma GCC optimize("Ofast")
#include<algorithm>
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=1e5+1;
const int INF = INT_MAX;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n;
        vll v(n);
        for(i=0;i<n;i++){
            v[i]=n-(i);
        }
        lli step=0,index;
        while(step!=n){
            lli flag=0;
            for(j=0;j+2<n;j++){
                if(v[j]+v[j+1]==v[j+2]){
                    flag=1;
                    index=i;
                    break;
                }
            }
            // if(flag){
            //     v[index+2]=v[index+2]+1;
            //     sort(v.begin()+index+2,v.end());
            // }
            if(!flag){
                for(j=0;j<n;j++){
                    cout << v[j] << " ";
                }
                cout << endl;
                step++;
            }
            prev_permutation(v.begin(),v.end());
        }
	}
}
