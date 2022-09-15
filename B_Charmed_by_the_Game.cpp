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
	lli n,m,t,i,j,k,a,b,alice,bob;
	cin >> t;
	while(t--){
		cin >> a >> b;
        set<lli> ans;
        lli seats=a+b;

        // case 1 
        bob=seats/2;
        alice= seats-seats/2;
        
        lli mn=max(alice-a,a-alice);
        lli mx;
        if(a<=bob){
            mx=alice+a;
        }
        else{
            mx=alice-a+2*bob;
        }
        for(i=mn;i<=mx;i=i+2){
            ans.insert(i);
        }
        // case 2;
        alice=seats/2;
        bob=seats-seats/2;
        mn=max(alice-a,a-alice);
        if(a<=bob){
            mx=alice+a;
        }
        else{
            mx=alice-a+2*bob;
        }
        for(i=mn;i<=mx;i=i+2){
            ans.insert(i);
        }
        cout << ans.size() << endl;
        for(auto it=ans.begin();it!=ans.end();it++){
            cout << *it << " ";
        }
        cout << endl;
	}
}
