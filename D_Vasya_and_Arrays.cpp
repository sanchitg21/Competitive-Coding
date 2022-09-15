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
    lli i,m,n,sum=0,sun=0;
    cin >> n;
    vll a(n);
    for(i=0;i<n;i++){
        cin >> a[i];
        sun=sun+a[i];
    }
    cin >> m;
    vll b(m);
    for(i=0;i<m;i++){
        cin >> b[i];
        sum=sum+b[i];
    }
    if(sum!=sun){
        cout << -1 << endl;
        return 0;
    }    

    lli l=0,r=0,c=0;
    sun=0;
    sum=0;
    for(l=0;l<n;l++){
        sun=sun+a[l];
        if(sun<sum){ 
            continue;
        }    
        if(sum==sun){
            c++;
            continue;
        }
        for(r;r<m;r++){
            sum=sum+b[r];
            if(sum==sun){
                c++;
                r++;   // do not forget
                break;
            }
            if(sum<sun){
                continue;
            }
            if(sum>sun){
                r++;   // do not forget
                break;
            }
        }
    }
    cout << c << endl;
}
