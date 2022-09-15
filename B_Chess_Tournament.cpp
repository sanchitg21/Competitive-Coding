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
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=5e5+5;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n;
        string s;
        cin >> s;
        mpc mp;
        for(i=0;i<n;i++){
            mp[s[i]]++;
        }   
        if(mp['2']==1 || mp['2']==2){
            cout << "NO" << endl;
            continue;
        }
        string arr[n+1][n+1];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                arr[i][j]='0';
            }
            arr[i][i]='X';
        }
        vll v;
        for(i=0;i<n;i++){
            if(s[i]=='2'){
                v.pb(i);
            }
        }
        for(i=1;i<v.size();i++){
            arr[v[i]][v[i-1]]='+';
            arr[v[i-1]][v[i]]='-';
        }
        if(v.size()>0){ 
            arr[v[0]][v[v.size()-1]]='+';
            arr[v[v.size()-1]][v[0]]='-';
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(arr[i][j]=="0"){
                    arr[i][j]='=';
                }
            }
        }
        cout << "YES" << endl;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cout << arr[i][j];
            }
            cout << endl;
        }
	}
}
