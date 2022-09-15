//CODE BY Sanchit Gupta
#define pb push_back
#define db double
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
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=5e5+5;
const int INF = 2e9;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	lli n,m,t,i,j,k,x,y,f,tmax;
	cin >> t;
	while(t--){
		cin >> n >> m >> x >> y;
        vll s(m);
        for(i=0;i<m;i++){
            cin >> s[i];
        }
        if(y>x){
            tmax= y-1; //max amount of time available
        }
        else{
            tmax= n-y; 
        }
        sd(s); 
        vll v(m);
        for(i=0;i<m;i++){
            v[i]=i+1;
        }
        // 2 pointers
        lli low=0,high=0,count=0;
        for(high=0;high<m;high++){
            if(v[low]+s[high]<=tmax){
                count++;
                low++;
            }
        }
        cout << min(abs(y-x)-1,count) << endl;
        
	}
}