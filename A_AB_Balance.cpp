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
#pragma GCC optimize("Ofast")
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
	cin >> t;
	while(t--){
        string s;
		cin >> s;
        n=s.length();
        if(s[0]=='a' && s[n-1]=='a'){
            cout << s << endl;
            continue;
        }
        else if(s[0]=='b' && s[n-1]=='b'){
            cout << s << endl;
            continue;
        }
        lli count1=0,count2=0;
        for(i=1;i<n;i++){
            if(s[i]==s[i-1]){
                count1++;
            }
            else{
                break;
            }
        }
        for(i=n-1;i>=1;i--){
            if(s[i]==s[i-1]){
                count2++;
            }
            else{
                break;
            }
        }
        if(count1 <= count2){
            for(i=0;i<count1;i++){
                if(s[i]=='a'){
                    s[i]='b';
                }
                else{
                    s[i]='a';
                }
            }
        }
        else{
            for(i=n-1;i>=n-count2;i--){
                if(s[i]=='a'){
                    s[i]='b';
                }
                else{
                    s[i]='a';
                }
            }
        }
        cout << count1 << " " << count2 << endl;
        cout << s << endl;
	}
}
