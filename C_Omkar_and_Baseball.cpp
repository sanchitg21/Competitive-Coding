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
	lli n,m,t,i,j,k,sindex,lindex;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int>v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        lli count=0;
        for(i=0;i<n;i++){
            if(v[i]!=i+1){
                sindex=i;
                break;
            }
        }
        for(i=n-1;i>=0;i--){
            if(v[i]!=i+1){
                lindex=i;
                break;
            }
        }
        for(i=0;i<n;i++){
            if(v[i]==i+1){
                count++;
            }
        }
        if(count==n){
            cout << 0 << endl;
        }
        else if(count==0){
            cout << 1 << endl;
        }
        else{
            count=0;
            for(i=sindex;i<=lindex;i++){
            if(v[i]==i+1){
                count++;
            }
        }
            if(count==0){
                cout << 1 << endl;
            }
            else{
                cout << 2 << endl;
            }
        }
    }
}
