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
	lli n,m,t,i,j,k,flag,count;
	cin >> t;
	while(t--){
        flag=0;
		cin >> n;
        if(n==1){
            cout << "FastestFinger" << endl;
            continue;
        }
        if(n==2){
            cout << "Ashishgup" << endl;
            continue;
        }
        if(n%2==1){
            cout << "Ashishgup" << endl;
        }
        else{
            n=n/2;
            count=0;
            for(i=2;i*i<=n;i++){
                if(n%i==0){
                    count=count+2;
                    if(i%2==1 || (n/i)%2==1){ 
                        flag=1;
                    }
                }
            }
            if(count>=2 && flag==1){
                cout << "Ashishgup" << endl;
            }
            else{
                cout << "FastestFinger" << endl;
            }
        }
	}
}
