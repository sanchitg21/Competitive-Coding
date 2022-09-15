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
	lli n,t,i,j,k,high,low,sum,target,count;
	cin >> t;
	while(t--){
		cin >> n;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        count=0;
        v.pb(0);
        n=v.size();
        for(i=0;i<n;i++){   
            target=v[i];
            sum=0;
            high=0;
            low=0;
            while(high<n){
                if(sum<target){
                    sum=sum+v[high];
                    high++;
                }
                else if(sum>target){
                    sum=sum-v[low];
                    low++;
                }
                else{
                    if(high==low+1){
                        low++;
                        sum=0;
                    }
                    else{ 
                        count++;
                        break;
                    }
                }
            }
        }
        cout << count-1 << endl;
	}
}
