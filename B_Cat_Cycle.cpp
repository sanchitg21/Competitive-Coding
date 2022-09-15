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
	lli n,t,i,j,k,sum,a,b,c;
	cin >> t;
	while(t--){
        cin >> n >> k;
        sum=-1;
        if(n%2==1){
            c=n/2;
            if(k<c+1){
                sum= k-1;
            }
            else{
            sum=-1+c+2;
            k=k-(c+1);
            if(k>0){ 
            c--;
            a= k/(c+1);
            b= k%(c+1);
            sum=sum+ (a)*(c+2) + b; 
            }}
            sum=sum%n;
        }
        else{
            sum=sum+ (k);
            sum=sum%n;
        }
        cout << sum+1 << endl;
	}
}
