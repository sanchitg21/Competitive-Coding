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
	lli n,t,i,j,k,m,flag,x,y;
	cin >> t;
	while(t--){
		cin >> n >> m;
        vector<string>v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        flag=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(v[i][j]!='.'){
                    x=i;
                    y=j;
                    flag=1;
                }
            }
        }
        if(flag==0){
            v[0][0]='W';
            x=0;
            y=0;
        }
        flag=0;
        for(i=x;i+1<n;i++){
            if(v[i][y]=='R'){
                if(v[i+1][y]!='R'){ 
                    v[i+1][y]='W';
                }
                else{
                    flag=1;
                    break;
                }
            }
            if(v[i][y]=='W'){
                if(v[i+1][y]!='W'){ 
                    v[i+1][y]='R';
                }
                else{
                    flag=1;
                    break;
                }
            }
        }
        for(i=x;i>=1;i--){
            if(v[i][y]=='R'){
                if(v[i-1][y]!='R'){ 
                    v[i-1][y]='W';
                }
                else{
                    flag=1;
                    break;
                }
            }
            if(v[i][y]=='W'){
                if(v[i-1][y]!='W'){ 
                    v[i-1][y]='R';
                }
                else{
                    flag=1;
                    break;
                }
            }
        }
        for(i=0;i<n;i++){ 
            for(j=y;j+1<m;j++){
            if(v[i][j]=='R'){
                if(v[i][j+1]!='R'){ 
                    v[i][j+1]='W';
                }
                else{
                    flag=1;
                    break;
                }
            }
            if(v[i][j]=='W'){
                if(v[i][j+1]!='W'){ 
                    v[i][j+1]='R';
                }
                else{
                    flag=1;
                    break;
                }
            }
            }
            for(j=y;j>=1;j--){
                if(v[i][j]=='R'){
                if(v[i][j-1]!='R'){ 
                    v[i][j-1]='W';
                    }
                else{
                    flag=1;
                    break;
                }
            }
            if(v[i][j]=='W'){
                if(v[i][j-1]!='W'){ 
                    v[i][j-1]='R';
                }
                else{
                    flag=1;
                    break;
                }
            }
            }
        }
        if(flag){
            cout << "NO" << endl;
            continue;
        }
        for(j=0;j<m;j++){
            for(i=0;i+1<n;i++){
                if(v[i][j]==v[i+1][j]){
                    flag=1;
                }
            }
        }
        if(flag){
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cout << v[i][j];
            }
            cout << endl;
        }
	}
}