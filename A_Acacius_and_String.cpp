// //CODE BY Sanchit Gupta
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
	lli n,t,i,flag,count;
	cin >> t;
	while(t--){
		cin >> n;
        string s;
        cin >> s;
        string v="abacaba";
        flag=0;
        count=0;
        for(i=0;i+6<n;i++){
            if(v==s.substr(i,7)){
                count++;
                flag=1;
            }
        }
        if(flag){
            if(count>1){
                cout << "No" << endl;
                continue;
            }
            cout << "Yes" << endl;
            for(i=0;i<n;i++){
                if(s[i]=='?'){
                    s[i]='z';
                }
            }
            cout << s << endl;
            continue;
        }
        for(i=4;i+6<n;i++){
            if(s[i-4]=='a' && s[i-3]=='b' && s[i-2]=='a' && s[i-1]=='c' && s[i+3]=='c' && s[i+4]=='a' && s[i+5]=='b' && s[i+6]=='a'){
                if((s[i]=='a' || s[i]=='?') && (s[i+1]=='b' || s[i+1]=='?') && (s[i+2]=='a' || s[i+2]=='?')){
                    if(s[i]=='?'){
                        s[i]='z';
                    }
                    if(s[i+1]=='?'){
                        s[i+1]='z';
                    }
                    if(s[i+2]=='?'){
                        s[i+2]='z';
                    }
                }
            }
        }
        for(i=0;i+6<n;i++){
            if((s[i]=='a' || s[i]=='?') && (s[i+1]=='b' || s[i+1]=='?') && (s[i+2]=='a' || s[i+2]=='?') && (s[i+3]=='c' || s[i+3]=='?') && (s[i+4]=='a' || s[i+4]=='?') && (s[i+5]=='b' || s[i+5]=='?') && (s[i+6]=='a' || s[i+6]=='?') ){
                if(i+10<n && s[i+7]=='c' && s[i+8]=='a' && s[i+9]=='b' && s[i+10]=='a' ){
                    continue;
                }
                else{ 
                if(s[i]=='?'){
                    s[i]='a';
                }
                if(s[i+1]=='?'){
                    s[i+1]='b';
                }
                if(s[i+2]=='?'){
                    s[i+2]='a';
                }
                if(s[i+3]=='?'){
                    s[i+3]='c';
                }
                if(s[i+4]=='?'){
                    s[i+4]='a';
                }
                if(s[i+5]=='?'){
                    s[i+5]='b';
                }
                if(s[i+6]=='?'){
                    s[i+6]='a';
                }
                break;
                }
            }   
        }
        for(i=0;i<n;i++){
            if(s[i]=='?'){
                s[i]='z';
            }
        }
        flag=0;
        count=0;
        for(i=0;i+6<n;i++){
            if(v==s.substr(i,7)){
                count++;
                flag=1;
            }
        }
        if(count!=1){
            cout << "No" << endl;
            continue;
        }        
        cout << "Yes" << endl;
        cout << s << endl;
	}
}