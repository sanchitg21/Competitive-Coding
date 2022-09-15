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
	lli n,m,t,i,j,k,W,H,x1,y1,x2,y2,w,h,d1,d2;
    double d;
	cin >> t;
	while(t--){
		cin >> W >> H;
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> w >> h;
        if(W-(x2-x1)<w  &&  H-(y2-y1)<h){
            cout << -1 << endl;
            continue;
        }
        if(h<=y1){
            d1=0;
        }
        else if(h<=H-y2){
            d1=0;
        }
        else{
            d1=min(h-y1,h-(H-y2));
        }

        if(w<=x1){
            d2=0;
        }
        else if(w<=W-x2){
            d2=0;
        }
        else{
            d2=min(w-x1,w-(W-x2));
        }
        if(H-(y2-y1)<h){
            cout << fixed << setprecision(9) << (double)d2 <<endl;
        }
        else if(W-(x2-x1)<w){
            cout << fixed << setprecision(9) << (double)d1 <<endl;
        }
        else{
            cout << fixed << setprecision(9) << (double)(min(d1,d2)) <<endl;
        }
	}
}
