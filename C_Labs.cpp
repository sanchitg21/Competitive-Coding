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
    lli n,i,j,ans=1;
    cin >> n;
    long long int arr[n][n];
    for(j=0;j<n;j++){
        if(j%2==0){ 
            for(i=0;i<n;i++){
                arr[i][j]= ans++;
            }
        }
        else{
            for(i=n-1;i>=0;i--){
                arr[i][j]= ans++;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
