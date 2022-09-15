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
	lli n,t,i,j,k,flag;
	cin >> t;
	while(t--){
        flag=0;
		cin >> n;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        //total
        lli total=0;
        for(i=1;i+1<n;i++){
            if(v[i]>v[i-1] && v[i]>v[i+1]){
                total++;
            }
        }
        for(i=1;i+1<n;i++){
            if(v[i]<v[i-1] && v[i]<v[i+1]){
                total++;
            }
        }
        if(is_sorted(v.begin(),v.end())){ 
            cout << total << endl;
            continue;
        }
        vll s=v;
        reverse(s.begin(),s.end());
        if(is_sorted(s.begin(),s.end())){
            cout << total << endl;
            continue;
        }
        flag=0;
        if(n>=5){
            for(i=0;i+4<n;i++){
                if((v[i]<v[i+1] && v[i+1]>v[i+2] && v[i+3]>v[i+2] && v[i+3]>v[i+4])  || (v[i]>v[i+1] && v[i+1]<v[i+2] && v[i+3]<v[i+2] && v[i+3]<v[i+4])){     
                    flag=1;
                    break;  
                }
            }
        }
        if(flag){
            cout << total -3 << endl;
            continue;
        }
        flag=0;
        if(n>=4){
            for(i=0;i+3<n;i++){
                if((v[i]<v[i+1] && v[i+1]>v[i+2] && v[i+3]>v[i+2]) || (v[i]>v[i+1] && v[i+1]<v[i+2] && v[i+3]<v[i+2])){
                    flag=1;
                    break;  
                }
            }
        }
        if(flag){
            cout << total -2 << endl;
            continue;
        }
        cout << total-1 << endl;
	}
}
