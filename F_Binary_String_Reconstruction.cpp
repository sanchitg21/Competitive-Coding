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
	lli n,t,i,a,b,c;
	cin >> t;
	while(t--){
		cin >> a >> b >> c;
        string s;
        if(b>=1){
            for(i=0;i<=a;i++){
                s.pb('0');
            }
            for(i=0;i<=c;i++){
                s.pb('1');
            }
            lli step=b-1;
            for(i=1;i<=step;i++){
                if(i%2==1){ 
                    s.pb('0');
                }
                else{
                    s.pb('1');
                }
            }
            cout << s << endl;
        }
        else{
            if(a>0){
                for(i=0;i<=a;i++){
                    cout << '0';
                }
                cout << endl;
            }
            else{
                for(i=0;i<=c;i++){
                    cout << '1';
                }
                cout << endl;
            }
        }
	}
}
