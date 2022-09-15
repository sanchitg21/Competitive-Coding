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
	lli n,t,i,j,k,a,b,c;
	cin >> t;
	while(t--){
        cin >> n;

        if(n%2==1){ 
        int arr[n][2];
        for(i=0;i<n;i++){
            for(j=0;j<2;j++){
                arr[i][j]=0;
            }
        }
        for(i=0;i+1<n;i++){
            a=n/2-arr[i][0];
            b=n/2-arr[i][1];
            for(j=0;j<a;j++){
                cout << 1 << " ";
            }
            for(j=0;j<b;j++){
                cout << -1 << " ";
            }
            for(j=i+1;j<i+1+a;j++){ 
                arr[j][1]++;
            }
            for(j=i+1+a;j<i+1+a+b;j++){ 
                arr[j][0]++;
            }
        }
        cout << endl;
        continue;
        }
        int arr[n][3];
        for(i=0;i<n;i++){
            for(j=0;j<3;j++){
                arr[i][j]=0;
            }
        }
        for(i=0;i+1<n;i++){
            a=(n-1)/2-arr[i][0];
            b=(n-1)/2-arr[i][1];
            c=1-arr[i][2];
            for(j=0;j<a;j++){
                cout << 1 << " ";
            }
            for(j=0;j<c;j++){
                cout << 0 << " ";
            }
            for(j=0;j<b;j++){
                cout << -1 << " ";
            }
            for(j=i+1;j<i+1+a;j++){ 
                arr[j][1]++;
            }
            for(j=i+1+a;j<i+1+a+c;j++){ 
                arr[j][2]++;
            }
            for(j=i+1+a+c;j<i+1+a+b;j++){ 
                arr[j][0]++;
            }
        }
        cout << endl;
	}
}
