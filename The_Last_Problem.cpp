//CODE BY CONFUZED CODER
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
    long long int a,b,c,d,i,j,t,x1,y1,x2,y2;
    cin >> t;
    j=1;
    a=1;
    vector<vll> v(1000);
    for(i=0;i<1000;i++){
        c=0;
        d=a;
        a--;
        b=j;
        while(c<1000){ 
            v[i].pb(j);
            c++;    
            a++;
            j=j+a;
            
        }
        a=d;
        a++;
        j=b+a;
    }
    while(t--){
        cin >> x1 >> y1 >> x2 >> y2;
        lli sum=0;
        for(i=x1;i<=x2;i++){
            sum+= v[i-1][y1-1];
        }
        for(i=y1+1;i<=y2;i++){
            sum+= v[x2-1][i-1];
        }
        cout << sum << endl;
    }
}