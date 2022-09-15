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
    lli i,j,n,r,c,k,mn=1e9,sum,ans=1e9;
    cin >> r >> c;
    int arr[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin >> arr[i][j];
        }
    }
    vll v(100004,0);
    int flag=0;
    for(i=2;i<=100003;i++){
        flag=0;
        for(j=2;j*j<=i;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            v[i]=i;
        }
    }
    //Col-wise
    for(i=0;i<r;i++){
        sum=0;
        for(j=0;j<c;j++){
            mn=1e9;
            for(k=arr[i][j];k<v.size();k++){
                if(v[k]-arr[i][j]>=0){
                    mn=v[k]-arr[i][j];
                    break;
                }                      
            }
            sum+= mn;
        }
        ans=min(ans,sum);
    }
    //Row-Wise
    for(j=0;j<c;j++){
        sum=0;
        for(i=0;i<r;i++){
            mn=1e9;
            for(k=arr[i][j];k<v.size();k++){
                if(v[k]-arr[i][j]>=0){
                    mn=v[k]-arr[i][j];
                    break;
                }                      
            }
            sum+= mn;
        }
        ans=min(ans,sum);
    }
    cout << ans << endl;
}
