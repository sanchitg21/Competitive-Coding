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
	lli n,t,i,j,sum;
    cin >> t;
    while(t--){
        sum=0;
        cin >> n;
        vpl v(n);
        for(i=0;i<n;i++){
            cin >> v[i].first;
            sum=sum+v[i].first;
            v[i].second=i+1;
        }
        sa(v);
        for(i=n-1;i>=0;i--){
            sum=sum-v[i].first;
            if(sum>=v[i].first){
                continue;
            }
            else{
                break;
            }
        }
        vll tot;
        for(j=i;j<n;j++){
            tot.pb(v[j].second);
        }
        sa(tot);
        cout << tot.size() << endl;
        for(i=0;i<tot.size();i++){
            cout << tot[i] << " ";
        }
        cout << endl;
    }
}