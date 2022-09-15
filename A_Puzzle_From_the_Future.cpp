//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<lli>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpst map<string,lli>
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
	lli n,t,i,j;
    cin >> t;
    while(t--){
        cin >> n;
        string a;
        string b;
        cin >> b;
        lli sum=0;
        for(i=0;i<n;i++){
            if(b[i]=='0' && sum==0){
                a.append("1");
                sum=1;
            }
            else if(b[i]=='0' && sum==1){
                a.append("0");
                sum=0;
            }
            else if(b[i]=='1' && sum!=2){
                a.append("1");
                sum=2;
            }
            else if(b[i]=='1' && sum==2){
                a.append("0");
                sum=1;
            }
            else if(b[i]=='0' && sum==2){
                a.append("1");
                sum=1;
            }
        }
        cout << a << endl;
    }
}