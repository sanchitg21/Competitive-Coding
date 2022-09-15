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
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli i,n,flag=0,l,r;
    cin >> n;
    r=l=-1;
    vll v(n);
    vll s(n);
    for(i=0;i<n;i++){
        cin >> v[i];
        s[i]=v[i];
    }
    for(i=0;i+1<n;i++){
        if(v[i]>v[i+1]){
            l=i;
            break;
        }
    }
    for(i=n-1;i>=1;i--){
        if(v[i]<v[i-1]){
            r=i;
            break;
        }
    }
    if(l==-1){  // or r== -1 
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
        exit(0);
    }
    reverse(v.begin()+l,v.begin()+r+1);
    sa(s);
    for(i=0;i<n;i++){
        if(s[i]==v[i]){
            flag=0;
        }
        else{
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout << "yes" << endl;    
        cout << l+1 << " " << r+1 << endl;
    }
    else{
        cout << "no" << endl;
    }
}
