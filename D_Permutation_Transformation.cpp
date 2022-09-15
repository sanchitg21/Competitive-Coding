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
	lli n,t,i,j,mx,index,step=0,p;
    cin >>t ;
    while(t--){
        cin >> n;
        vpl v(n+1);
        for(i=0;i<n;i++){
            cin >> v[i].first;
            v[i].second=0;
        }
        v[n].first=0;
        n++;
        mx=0;
        for(i=0;i<n;i++){
            if(mx<v[i].first){
                mx=v[i].first;
                index=i;
            }
        }
        v[index].first=0;
        step=1;
        while(true){ 
            j=0;
            p=0;
            while(j<n){
                if(v[j].first==0){  
                mx=0;
                for(i=p;v[i].first!=0 && i<n;i++){
                    if(mx<v[i].first){
                        mx=v[i].first;
                        index=i;
                    }
                }
                if(mx!=0){
                    v[index].second=step;
                    v[index].first=0;
                }
                p=j+1;
                }
                j++;
            }
            step++;
            lli flag=0;
            for(i=0;i<n;i++){
                if(v[i].first!=0){
                    flag=1;
                }
            }
            if(flag==0){
                break;
            }
        }
        for(i=0;i+1<n;i++){
            cout << v[i].second << " ";
        }
        cout << endl;
    }
}