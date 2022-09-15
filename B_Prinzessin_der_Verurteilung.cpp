//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vp vector<pair<int,int>>
#define vll vector<lli>
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli a,b,t,k,n,i,j,flag=0,length,flag1;
    cin >>t;
    while(t--){
        cin >>n;
        string s;
        cin >> s;
        length=1;
        string v="a";
        while(length<=n){ 
            flag=0;
            for(i=0;i+length<=n;i++){
                if(v==s.substr(i,length)){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                cout << v << endl;
                break;
            }
            flag1=0;
            for(i=v.length()-1;i>=0;i--){ 
                if(v[i]!='z'){
                    for(j=i+1;j<v.length();j++){
                        v[j]='a';
                    }
                    v[i]++;
                    flag1=1;
                    break;
                }
            }

            if(flag1==0){ 
                v.clear();
                length++;
                for(i=0;i<length;i++){
                    v.append("a");
                }
            }
        }
    }   
}
