//CODE BY Sanchit Gupta
#define pb push_back
#define lb lower_bound
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
	lli n,i,j,k,m;
	cin >> n >> m;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    vll s=v;
    sa(v);
    for(i=0;i+2<n;i++){ 
        lli target=m-v[i];
        lli start=i+1;
        lli end=n-1;
        while(start<end){ 
            lli sum=v[start]+v[end];
            if(sum==target){ 
                lli a=i,b,c;
                for(j=0;j<n;j++){
                    if(v[i]==s[j]){
                        break;
                    }
                }
                a=j;
                for(j=0;j<n;j++){
                    if(v[start]==s[j] && a!=j){
                        break;
                    }
                }
                b=j;
                for(j=0;j<n;j++){
                    if(v[end]==s[j] && a!=j && b!=j){
                        break;
                    }
                }
                c=j;
                cout << a+1 << " " << b+1 << " " << c+1 << endl;
                return 0; 
            }
            else if(sum<target){ 
                start++;
            }
            else{ 
                end--;
            }    
        }   
    }
    cout << "IMPOSSIBLE" << endl;
}