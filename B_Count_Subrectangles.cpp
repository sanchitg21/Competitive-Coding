#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vp vector<pair<int,int>>
#define vll vector<lli>
#define vv vector<vll> 
#define rev(v) reverse(v.begin(),v.end())
#define lb lower_bound
#define ub upper_bound
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main() {
    lli n,m,k,i,j,sum=0;
    cin >> n >> m >> k;
    vll x(n);
    vll rows;
    for(i=0;i<n;i++){
        cin >> x[i];
        if(x[i]==1){
            sum++;
        }
        else{
            rows.pb(sum);
            sum=0;
        }
    }
    rows.pb(sum);
    vll y(m);
    vll cols;
    sum=0;
    for(i=0;i<m;i++){
        cin >> y[i];
        if(y[i]==1){
            sum++;
        }
        else{
            cols.pb(sum);
            sum=0;
        }
    }
    cols.pb(sum);
    int arx[40001]={0};
    for(i=0;i<rows.size();i++){
        for(j=1;j<=rows[i];j++){
            arx[j]=arx[j]+rows[i]-j+1;
        }
    }
    int ary[40001]={0};
    for(i=0;i<cols.size();i++){
        for(j=1;j<=cols[i];j++){
            ary[j]=ary[j]+cols[i]-j+1;
        }
    }
    sum=0;
    for(i=1;i*i<k;i++){
        if(k%i==0 && k/i<=40000){
            sum+= arx[i]*ary[k/i];
            sum+= arx[k/i]*ary[i];
        }
    }
    lli ex=sqrt(k);
    if(ex==sqrt(k)){
        sum+= arx[ex]*ary[ex];
    }
    cout << sum << endl;  
}
