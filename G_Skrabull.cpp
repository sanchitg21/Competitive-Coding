//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
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
    lli t,i,j,n,m,ans,flag;
    cin >> t;
    while(t--){
        cin >> n >> m;
        string s;
        cin >> s;
        string v;
        cin >> v;
        string w;
        cin >> w;
        map<char,vll> mp;
        map<char,int> sum;
        ans=0;
        flag=0;
        for(i=0;i<n;i++){
            mp[s[i]].pb(v[i]-48);
        }
        for(auto it=mp.begin();it!=mp.end();++it){
            sort(it->second.begin(),it->second.end());
        }
        for(i=0;i<m;i++){
            sum[w[i]]++;
        }
        for(auto it=sum.begin();it!=sum.end();it++){
            if(sum[it->first]<=mp[it->first].size()){
                for(i=0;i<sum[it->first];i++){ 
                    ans=ans+ mp[it->first][i];
                }
            }
            else{
                cout << -1 << endl;
                flag=1;
                break;
            }
        }
        if(flag==0){ 
            cout << ans << endl;
        }
    }   
}