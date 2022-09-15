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
	lli n,t,a,b,i,c,d,index;
	cin >> t;
	while(t--){
        cin >> a >> b >> n; 
        vpl v(n);
        for(i=0;i<n;i++){
            cin >> v[i].first;
        }   
        lli mx=0;
        for(i=0;i<n;i++){
            if(mx<v[i].first){
                mx=v[i].first;
                index=i;
            }
        }   
        for(i=0;i<n;i++){
            cin >> v[i].second;
        }   
        vll s(n-1);
        lli y=0;
        for(i=0;i<n;i++){
            if(index!=i){ 
                s[y] = ceil(v[i].second*1.0/a)*v[i].first;
                y++;
            }
        }
        lli sum=0;
        for(i=0;i+1<n;i++){
            sum=sum + s[i];
        }
        c=v[index].first;
        d=v[index].second;
        b=b-sum;
        if(b<=0){
            cout << "NO" << endl;
            continue;
        }
        if(d/a < b/c){
            cout << "YES" << endl;
        }
        else if(d/a - b/c==1 && (d%a==0 && b%c!=0)){
            cout << "YES" << endl;
        }
        else if(d/a == b/c && (b%c==0 && d%a==0)){
            cout << "YES" << endl;
        }
        else if(d/a == b/c && (b%c!=0 && d%a!=0)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
	}
}