#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vp vector<pair<int,int>>
#define vll vector<lli>
#define vv vector<vll> 
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli i,n,c=0,a,b,e=0;
    cin >> n >> a >> b;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];        
    }
    for(i=0;i<n;i++){
        if(v[i]==1){ 
            if(a){
                a--;
            }
            else if(a==0 && b>0){
            e++;
            b--;
            }
            else if(b==0 && e>0){
                e--;
            }
            else{
                c++;
            }
        }
        else{    
            if(b){
                b--;
            }   
            else{
                c=c+2;
            }
        }
    }
    cout << c << endl;
    return 0;
}
