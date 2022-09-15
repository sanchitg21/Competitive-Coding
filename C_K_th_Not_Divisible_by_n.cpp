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
	lli n,t,i,j,k,ans,steps;
	cin >> t;
	while(t--){
		cin >> n >> k;
        
        //ans- ans/n ==k 
        
        //using binary search
        lli low=0,high=5000000000,mid;
        steps=0;
        while(low<=high){
            mid=(high+low)/2;
            if(mid-mid/n>k){
                high=mid;
            }
            else if(mid-mid/n<k){
                low=mid;
            }
            else{
                break;
            }
        }
        if(mid%n!=0){ 
            cout << mid << endl;
        }
        else{
            cout << mid-1 << endl;
        }
	}
}
