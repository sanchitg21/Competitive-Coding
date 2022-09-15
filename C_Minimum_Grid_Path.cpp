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
	lli n,m=0,t,i,j,k,flag=0;
	cin >> t;
	while(t--){
		cin >> n;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        k=0;
        vpl x(v.size()-v.size()/2);
        for(i=0;i<n;i=i+2){
            x[k].ff=v[i];
            x[k].ss=i;
            k++;
        }
        k=0;
        vpl y(v.size()/2);
        for(i=1;i<n;i=i+2){
            y[k].ff=v[i];
            y[k].ss=i;
            k++;
        }
        vll presum_x(x.size()+1),presum_y(y.size()+1);
        presum_x[0]=0;
        presum_y[0]=0;
        for(i=1;i<presum_x.size();i++){
            presum_x[i]=x[i-1].ff+presum_x[i-1];
        }
        for(i=1;i<presum_y.size();i++){
            presum_y[i]=y[i-1].ff+presum_y[i-1];
        }
        lli mn=1e18,sum_x,sum_y;
        for(i=0;i<x.size();i++){
            if(i>0){ 
                sum_x= (n-i)*x[i].ff + presum_x[i];
                sum_y= (n-i+1)*y[i-1].ff + presum_y[i-1];
                mn=min(mn,sum_x + sum_y);
                if(i<y.size()){ 
                    sum_y= (n-i)*y[i].ff + presum_y[i];
                    mn=min(mn,sum_x + sum_y);
                }
            }
            else{
                sum_x= (n)*x[i].ff;
                sum_y= (n)*y[i].ff;
                mn=min(mn,sum_x + sum_y);   
            }
        }
        cout << mn << endl;
	}
}
