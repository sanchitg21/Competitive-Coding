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
	lli n,t,i,j,k,flag;
	cin >> t;
	while(t--){
        flag=0;
		cin >> n >> k;
        if(n%2==0 && n>=2*k){
            flag=1;
        }
        if(n%2==0 && n>=k){
            if((n-k)%2==0){
                flag=2;
            }
        }
        if(n%2==1){
            if(k%2==1){
                if(k-1<n){
                    flag=3;
                }
            }
        }
        if(flag==0){
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" <<endl;
        
        if(flag==1){
            for(i=1;i<=k-1;i++){
                cout << 2 << " ";
            }
            cout << n-2*(k-1) << endl;
        }
        if(flag==2){
            for(i=1;i<=k-1;i++){
                cout << 1 << " ";
            }
            cout << n-1*(k-1) << endl;
        }
        if(flag==3){
            for(i=1;i<=k-1;i++){
                cout << 1 << " ";
            }
            cout << n-1*(k-1) << endl;
        }
        
	}
}
