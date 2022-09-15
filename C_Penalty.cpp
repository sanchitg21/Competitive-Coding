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
	lli n,t,i,j,k,a,b,c,d;
	cin >> t;
	while(t--){
		string s;
        cin >> s;
        n=s.length();
        i=0;
        a=b=c=d=0;
        lli count=0;
        while(i<n){
            count++;
            if(s[i]=='1' && i%2==0){
                a++;
            }
            else if(s[i]=='1' && i%2==1){
                b++;
            }
            else if(s[i]=='?' && i%2==0){
                c++;
            }
            else if(s[i]=='?' && i%2==1){
                d++;
            }
            if(i%2==0){ 
            if(a+c>b+5-i/2){
                break;
            }
            if(b+d>a+5-i/2-1){
                break;
            }
            }
            if(i%2==1){ 
            if(b+d>a+5-(i+1)/2){
                break;
            }
            if(a+c>b+5-(i+1)/2){
                break;
            }
            }              
            i++;
        }
        cout << count << endl;
	}
}