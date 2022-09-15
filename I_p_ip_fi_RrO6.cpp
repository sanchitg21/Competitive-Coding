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
        lli arr[n][m];
        ans=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin >> arr[i][j];
            }
        }
        mps m1;
        for(j=0;j<m;j++){
            m1[arr[0][j]]++;
        }
        for(i=1;i<n;i=i+1){
            mps m2=m1;
            m1.clear();
            for(j=0;j<m;j++){
                m1[arr[i][j]]++;
            }
            for(auto it=m1.begin();it!=m1.end();++it){
                if(m1[it->first]>0 && m2[it->first]>0){
                    ans+= min(m1[it->first],m2[it->first]);
                }
            }
        }
        cout << ans << endl;
    }   
}