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
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,t,i,j,k,mid,low,high,num,a,b;
	cin >> n;
    low=1;
    high=n;
    if(n==1){
        cout << "!" << " " << (1) << endl; 
        return 0;
    }
	for(i=0;i<=100;i++){
        mid=(low+high)/2;
        cout << "?" << " " << mid << endl;
        cin >> num;
        cout << "?" << " " << mid+1 << endl; 
        cin >> a;
        if(a>num){
            high=mid;
        }
        else{
            low=mid+1;
        }
        if(low==high){
            cout << "!" << " " << (low) << endl; 
            break;
        }
    }
    
}