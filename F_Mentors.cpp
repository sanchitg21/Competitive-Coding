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
    lli n,m,t,i,j,k;
    cin >> n >> m;
    vpl s(n);
    vpl v(n);
    mps mp;
    for(i=0;i<n;i++){
        cin >> s[i].first;
        s[i].second=i+1;
        mp[i+1]=s[i].first;
    }
    for(i=0;i<n;i++){
        v[i].first=i+1;
    }
    sa(s);
    vll sup(n);
    for(i=0;i<n;i++){
        sup[i]= s[i].second;
        s[i].second=0;
    }
    for(i=0;i<n;i++){
        v[i].second=lower_bound(s.begin(),s.end(),s[i])-s.begin();
        
    }
    for(i=0;i<n;i++){
        v[i].first=sup[i];   
        s[i].second=sup[i];
    }
    sa(v);
    vpl hate(m);
    for(i=0;i<m;i++){
        cin >> hate[i].first >> hate[i].second ; 
    }
    for(i=0;i<m;i++){
        if(mp[hate[i].second]>mp[hate[i].first]){
            swap(hate[i].second,hate[i].first);
        }
    }
    mp.clear();
    sa(hate);

    //2 pointer technique
    lli low,high=0;
    for(low=0;low<n;low++){
        while(high<m && v[low].first==hate[high].first){
            v[low].second--;
            high++;
        }
    }
    for(i=0;i<n;i++){
        if(v[i].second>0){ 
            cout << v[i].second << " ";
        }
        else{
            cout << 0 << " ";
        }
    }
    cout << endl;
}
