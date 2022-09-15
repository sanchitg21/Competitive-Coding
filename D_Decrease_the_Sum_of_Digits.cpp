
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
	lli n,m,t,i,j,k,sum,index,num,flag,x;
	cin >> t;
	while(t--){
        string s;
        cin >> s >> k;
        x=stoll(s, nullptr, 10);
        n=s.length();
        sum=0;
        flag=0;
        for(i=0;i<n;i++){
            sum=sum+(s[i]-48);
            if(sum > k ){
                index=i;
                flag=1;
                break;
            }
            if(sum==k){
                index=i;
                flag=2;
                break;
            }
        }
        if(flag==0){
            cout << 0 << endl;
        }
        if(flag==2){ 
            flag=0;
            for(i=index+1;i<n;i++){
                if(s[i]!='0'){
                    flag=3;
                }
            }
            if(flag==0){
                cout << 0 << endl;
                continue;
            }
            for(i=index;i<n;i++){
                s[i]='0';
            }
            i=index-1;
            if(i==-1){
                s.insert(0,"1");
                cout << stoll(s, nullptr, 10)-x << endl;
                continue;
            }
            while(i>=0 && s[i]=='9'){
                s[i]='0';
                i--;
            }
            if(i!=-1){
                s[i]++;
            }
            else{
                s.insert(0,"1");   
            }
            cout << stoll(s, nullptr, 10)-x << endl;
        }
        if(flag==1){ 
            for(i=index;i<n;i++){
                s[i]='0';
            }
            i=index-1;
            if(i==-1){
                s.insert(0,"1");
                cout << stoll(s, nullptr, 10)-x << endl;
                continue;
            }
            while(i>=0 && s[i]=='9'){
                s[i]='0';
                i--;
            }
            if(i!=-1){
                s[i]++;
            }
            else{
                s.insert(0,"1");   
            }
            
            cout << stoll(s, nullptr, 10)-x << endl;    
        }
	}   
}
