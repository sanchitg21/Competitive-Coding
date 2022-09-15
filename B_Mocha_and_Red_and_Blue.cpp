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
	lli n,m,t,i,j,k,index;
	cin >> t;
	while(t--){
		cin >> n;
        string s;
        cin >> s;
        lli flag=0,step=0;
        for(i=0;i<n;i++){
            if(s[i]!='?'){
                flag=1;
            }
        }
        if(flag==0){
            for(i=0;i<n;i++){
                if(step==0){
                    cout << 'R';
                    step=1;
                }
                else{
                    cout << 'B';
                    step=0;
                }   
            }
            cout << endl;
            continue;
        }
        flag=0;
        for(i=0;i<n;i++){
            if(s[i]!='?'){
                index=i;
                break;
            }
        }
        string v=s;
        step=0;
        if(s[index]=='R'){
            for(i=index-1;i>=0;i--){
                if(step==0){
                    v[i]='B';
                    step=1;
                }
                else{
                    v[i]='R';
                    step=0;
                }
            }
        }
        else if(s[index]=='B'){
            for(i=index-1;i>=0;i--){
                if(step==0){
                    v[i]='R';
                    step=1;
                }
                else{
                    v[i]='B';
                    step=0;
                }
            }
        }
        for(i=index+1;i<n;i++){
            j=i;
            step=0;
            if(s[i]=='?'){
                if(s[i-1]=='B'){ 
                    while(j<n && s[j]=='?'){
                        if(step==0){
                            v[j]='R';
                            step=1;
                        }
                        else{
                            v[j]='B';
                            step=0;
                        }
                        j++;
                    }
                }
                else if(s[i-1]=='R'){  
                    while(j<n && s[j]=='?'){
                        if(step==0){
                            v[j]='B';
                            step=1;
                        }
                        else{
                            v[j]='R';
                            step=0;
                        }
                        j++;
                    }
                }
            }
        }
        cout << v << endl;
	}
}
