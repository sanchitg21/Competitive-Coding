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
    lli t,n,i,sum,j,flag;
    cin >> t;
    while(t--){
        cin >> n;
        vpl v(n);
        flag=0;
        sum=0;
        for(i=0;i<n;i++){
            cin >> v[i].first;
            v[i].second=i;
        }
        sa(v);
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(v[i].first*v[j].first>=2*n){
                    flag=1;
                    break;
                }
                else{
                    if(v[i].first*v[j].first==v[i].second+v[j].second+2){
                        sum++;
                    }
                }
            }
        }
        cout << sum << endl;
    }
}
