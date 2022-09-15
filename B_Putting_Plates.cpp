//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<lli>())
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
	lli n,t,i,j,m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        int arr[n][m];
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                arr[i][j]=0;
            }
        }
        i=0;
        for(j=0;j<m;j=j+2){
            arr[i][j]=1;
        }
        j=m-1;
        for(i=2;i<n;i=i+2){
            arr[i][j]=1;
        }
        i=n-1;
        for(j=m-3;j>=0;j=j-2){
            arr[i][j]=1;
        }
        j=0;
        for(i=n-3;i>=0;i=i-2){
            arr[i][j]=1;
        }
        if(arr[1][0]==1){
            arr[1][0]=0;
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cout << arr[i][j] ;
            }
            cout << endl;
        }
        cout << endl;
    }
}