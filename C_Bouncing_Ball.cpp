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
	lli n,t,i,j,k,p,count,x,y;
    cin >> t;
    while(t--){
        cin >> n >> p >> k;
        string s;
        cin >> s;
        cin >> x >> y;
        vll q(n,0);
        for(j=0;j<k;j++){ 
            count=0;
            for(i=j;i<n;i=i+k){
                if(s[i]=='0'){
                    count++;
                }
            }
            q[j]=count;
        }
        for(i=k;i<n;i++){
            if(i-k>=0){ 
                if(s[i-k]=='0'){ 
                    q[i]=q[i-k]-1;
                }
                else{
                    q[i]=q[i-k];
                }
            }
        }
        p--;
        lli mn=1e9;
        for(i=p;i<n;i++){
            mn=min(mn,(i-p)*y + q[i]*x);
        }
        cout << mn << endl;
    }
}