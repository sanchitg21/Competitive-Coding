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
	lli n,m,t,i,j,k,mx,steps,count1,count2,flag;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		n=s.length();
		mx=0;
		for(i=0;i<=9;i++){
			for(j=0;j<=9;j++){
				steps=0;
				count1=0;
				count2=0; 
				for(k=0;k<n;k++){ 
					if(s[k]-'0'==i && steps%2==0){
						count1++;
						steps++;
					}
					else if(s[k]-'0'==j && steps%2==1){
						count2++;
						steps++;
					}
				}	
				if(i==j){
					mx=max(mx,count1+count2);
					continue;
				}
				if(count1==count2){
					mx=max(mx,count1+count2);
				}
				else{ 
					mx=max(mx,count1+count2-1);
				}
			}
		}
		cout << n-mx << endl;
	}
}
