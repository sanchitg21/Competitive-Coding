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
	lli n,t,i,j,k,x,count,steps;
	cin >> t;
	while(t--){
		cin >> n;
        x=n;
        count=0;
        steps=0;
        while(x>0){
            if(x%10!=0){
                count++;   
            }
            x=x/10;
            steps++;
        }
        cout << count << endl;
        lli digits=0;
        while(digits!=steps){
            if(n%10!=0){
                cout << (n%10)*pow(10,digits) << " ";
            }
            n=n/10;
            digits++;
        }
        cout << endl;
	}
}
