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
	lli n,m,t,i,j,k,a;
	cin >> n >> t;
    string s1,s2;
    cin >> s1;
    cin >> s2;
    a=0;
    for(i=0;i<n;i++){
        if(s1[i]!=s2[i]){
            a++;
        }
    }
    string ans;
    ans.resize(n);
    if(t==0 && a>0){
        cout << -1 << endl;
        return 0;
    }
    if(t<a){
        lli count=t;
        if(a>2*count){
            cout << -1 << endl;
            return 0;
        } 
        lli total=2*(a%t),step=0;
        for(i=0;i<n;i++){
            if(s1[i]==s2[i]){
                ans[i]=s1[i];
                continue;
            }
            if(total==0){
                if(s1[i]!='z' && s2[i]!='z'){
                    ans[i]='z';
                    continue;
                }
                if(s1[i]=='z' && s2[i]=='a'){
                    ans[i]='b';
                    continue;
                }
                if(s1[i]=='a' && s2[i]=='z'){
                    ans[i]='b';
                    continue;
                }
                ans[i]='a';
                continue;
            }
            if(total>0 && step==0){
                ans[i]=s1[i];
                total--;
                step=1;
                continue;
            }
            if(total>0 && step==1){
                ans[i]=s2[i];
                total--;
                step=0;
                continue;
            }
            
        }
        cout << ans << endl;
        return 0;
    }
    // t>=a
    lli count=n-t;
    for(i=0;i<n;i++){
        if(s1[i]==s2[i]){
            if(count<=0){
                if(s1[i]=='z'){
                    ans[i]='a';
                }
                else{
                    ans[i]='z';
                }
            }
            else{
                ans[i]=s1[i];
            }
            count--;   
            continue;         
        }
        if(s1[i]!='z' && s2[i]!='z'){
            ans[i]='z';
            continue;
        }
        if(s1[i]=='z' && s2[i]=='a'){
            ans[i]='b';
            continue;
        }
        if(s1[i]=='a' && s2[i]=='z'){
            ans[i]='b';
            continue;
        }
        ans[i]='a';
    }
    cout << ans << endl;
}
