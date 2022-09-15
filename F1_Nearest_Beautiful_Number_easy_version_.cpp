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
	cin >> t;
	while(t--){
        string s;
		cin >> s >> k;
        n=s.length();
        if(k==1){
            lli flag=0;
            for(i=1;i<n;i++){
                if(s[i]>s[0]){
                    flag=1;
                }
            }
            if(flag){
                s[0]++;
                for(i=1;i<n;i++){
                    s[i]=s[0];
                }
            }
            else{
                for(i=1;i<n;i++){
                    s[i]=s[0];
                }
            }
            cout << s << endl;
            continue;
        }
        lli index;
        index=0;
        mpc mp;
        for(i=0;i<n;i++){
            mp[s[i]]++;
            if(mp.size()>2){
                break;
            }
        }
        while(s[index]==s[0]){
            index++;
        }
        if(mp.size()<=2){
            cout << s << endl;
            continue;
        }
        mp.clear();

        lli flag=0;
        if(s[index]<s[0]){ 
        lli flag=0;
        for(i=index+1;i<n;i++){
            if(s[i]>s[index]){
                flag=1;
            } 
        }
        if(flag){
            s[index]++;
            if(s[index]==s[0]){
                for(i=index+1;i<n;i++){
                    s[i]='0';
                }
            }
            else{ 
                for(i=index+1;i<n;i++){
                    s[i]=s[index];
                }
            }
        }
        else{
            for(i=index+1;i<n;i++){
                s[i]=s[index];
            }
        }
        cout << s << endl;   
        }    
        else if(s[index]>s[0]){ 
            lli flag=0;
            for(i=index+1;i<n;i++){
                if(s[i]>s[0]){
                    flag=1;
                } 
            }
            if(flag==0){
                for(i=index+1;i<n;i++){
                    s[i]=s[0];
                }
            }
            else{
                flag=0;
                for(i=index+1;i<n;i++){
                    if(s[i]>s[index]){
                        flag=1;
                    } 
                }
                if(flag==0){
                    for(i=index+1;i<n;i++){
                        s[i]=s[index];
                    }
                }
                else{
                    s[index]++;
                    for(i=index+1;i<n;i++){
                        s[i]=s[0];
                    }
                    
                }
            }
            cout << s << endl;  
        }     
	}   
}
