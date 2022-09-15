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
	lli n,m,t,i,j,k;
    vector<string> powers;
    for(i=0;i<63;i++){
        lli num=pow(2,i);
        powers.pb(to_string(num));
    }
	cin >> t;
	while(t--){
        string s;
		cin >> s;
        vll ans;
        // iterating over all powers of 2 upto 1e18
        // iterating over all above formed numbers from given number
        for(j=0;j<63;j++){ 
            i=0;
            k=0;
            lli count=0;
            while(i<s.length() && k<powers[j].length()){
                if(s[i]==powers[j][k]){
                    count++;
                    i++;
                    k++;
                }
                else{
                    i++;
                }
            }
            ans.pb(s.length()+powers[j].length()-2*count);
        }
        lli mn=ans[0];
        for(i=0;i<ans.size();i++){
            mn=min(mn,ans[i]);
        }
        cout << mn << endl;
	}
}
