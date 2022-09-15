//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
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
	lli n,t,i,j,ax,ay,bx,by,fx,fy;
    cin >> t;
    while(t--){
        cin >> ax >> ay >> bx >> by >> fx >> fy;
        if((ax==bx && bx==fx && ((ay<fy && fy<by) || (by<fy && fy<ay))) || (ay==by && by==fy && ((ax<fx && fx<bx) || (bx<fx && fx<ax)))){
            cout << abs(bx-ax)+abs(by-ay)+2 << endl;
        }
        else{
            cout << abs(bx-ax) + abs(by-ay) << endl;
        }
    }
}