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
	lli n,m,t,i,j,k,step;
	t=1;
	while(t--){
		cin >> n >> m >> k;
        cout << (n+m-2)+(n-1)+n*(m-1) << endl;
        for(i=1;i<=n-1;i++){
            cout << "U";
        }
        for(i=1;i<=m-1;i++){
            cout << "L";
        }
        // everyone on (1,1). Now everyone moves together
        step=0;

        for(i=1;i<=n;i++){
            if(step%2==0){ 
                for(j=2;j<=m;j++){
                    cout << "R";
                }
            }
            else{
                for(j=2;j<=m;j++){
                    cout << "L";
                }
            }
            if(i==n){
                break;
            }
            cout << "D";
            step++;
        }
        cout << endl;
	}
}
