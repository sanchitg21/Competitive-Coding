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
	lli n,t,i,j,k,mn,index,flag,count;
	cin >> t;
	while(t--){
        flag=0;
		cin >> n;
        lli arr[n][5];
        vll ans;
        for(i=0;i<n;i++){
            for(j=0;j<5;j++){
                cin >> arr[i][j];
            }
        }
        if(n==1){
            cout << 1 << endl;
            continue;
        }
        index=0;
        lli low=0,high=1;
        while(high<n){
            count=0;
            for(j=0;j<5;j++){
                if(arr[low][j]>arr[high][j]){
                    count++;
                }
            }
            if(count>=3){
                low=high;
                high++;
                
            }
            else{
                high++;
            }
        }
        for(i=0;i<n;i++){
            if(i==low){
                continue;
            } 
            count=0;
            for(j=0;j<5;j++){
                if(arr[low][j]<arr[i][j]){
                    count++;
                }
            }
            if(count<3){
                flag=1;
                break;
            }
        }
        if(flag){
            cout << -1 << endl;
        }
        else{
            cout << low+1 << endl;
            
        }
	}
}
