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
#define endl '\n'
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,index=0,length,ind=0;
    char a;
	cin >> n >> k;
    string s;
    cin >> s;
    for(i=1;i<n;i++){
        if(s[i]>s[i-1]){
            lli flag=0;
            for(j=0;j<=i && j+i<n;j++){
                if(s[j]<s[j+i]){
                    flag=1;
                    break;
                }
                else if(s[j]==s[j+i]){
                    flag=1;
                }
                else if(s[j]>s[j+i]){
                    flag=0;
                    break;
                }
            }
            if(flag){
                string v=s;
                v.erase(v.begin()+i,v.end());
                flag=0;
                for(i=0;i<n;i++){
                    if(v[(i%v.length())]==s[i]){
                        flag=1;
                    }
                    else if(v[(i%v.length())]<s[i]){
                        flag=1;
                    }
                    else if(v[(i%v.length())]>s[i]) {
                        flag=0;
                        break;
                    }
                }
                if(flag==1){ 
                    s=v;
                    break;
                }
            }
        }
    }
    n=s.length();
    a=s[0];
    for(i=1;i<n;i++){
        if(s[i]>a){
            index=i;
            break;
        }
    }
    for(i=1;i<=k/n;i++){
        cout << s;
    }
    cout << string(s.begin(),s.begin()+(k%n)) << endl;
}