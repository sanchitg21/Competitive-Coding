//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<lli>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpst map<string,lli>
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
	lli n,t,i,j,k,flag;
    cin >>t;
    while(t--){
        cin >> n >> k;
        string a;
        string b;
        cin >> a;
        cin >> b;
        map<char,lli> given;
        for(i=0;i<n;i++){
            given[a[i]]++;
        }
        map<char,lli> target;
        for(i=0;i<n;i++){
            target[b[i]]++;
        }
        sa(a);
        sa(b);
        flag=0;
        for(auto it=given.begin();it!=given.end();++it){
            if(given==target){
                break;
            }
            if(it->second-target[it->first]<0){
                flag=1;
                break;
            }
            else if((it->second-target[it->first])%k!=0){
                flag=1;
                break;
            }
            else if((it->second-target[it->first])%k==0){
                if(it->first=='z'){
                    flag=1;
                    break;
                }
                given[it->first+1]+= it->second-target[it->first];
                it->second-=(it->second-target[it->first]);
            }
        }
        if(flag){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }
    }
}