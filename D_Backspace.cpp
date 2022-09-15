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
	lli n,t,i,j,k,flag,x,y,count,index;
	cin >> t;
	while(t--){
        flag=0;
        string s;
        cin >> s;
        string v;
        cin >> v;
        if(v.length()>s.length()){
            cout << "NO" << endl;
            continue;
        }
        for(i=0;i+v.length()<=s.length();i++){
            if(v==s.substr(i,v.length())){
                index=i;
                flag=1;
                break;
            }   
        }
        if(flag==1 && (s.length()-(index+v.length()))%2==0){
            cout << "YES" << endl;
            continue;
        }
        flag=0;
        // 2 pointer technique
        // backspace in starting to reach first character
        vll start;
        for(i=0;i<s.length();i++){
            if(s[i]==v[0]){
                start.pb(i);
            }
        }
        for(i=0;i<start.size();i++){
        lli low=start[i],high=0;
        x=s.length();
        y=v.length();
        count=0;
        while(high<y && low<x){
            if(s[low]==v[high]&& count%2==0){
                low++;
                high++;
                count=0;
            } 
            else if(s[low]==v[high] && count%2==1){
                count++;
                low++;
            }
            else if(s[low]!=v[high]){
                count++;
                low++;
            }
            if(high==y && (x-low)%2==0){
                flag=1;
                break;
            }
        }
        if(flag){
            break;
        }
        }
        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
	}
}