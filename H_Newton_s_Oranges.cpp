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
const int mod=1e9+7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli a,b,t,m,x,n,k,i,c,j,ans,sum,mn,index,flag;
    cin >> n >> k;
    char arr[n][k];
    char temp;
    for(i=0;i<n;i++){
        for(j=0;j<k;j++){
            cin >> arr[i][j];
        }
    }
    for(j=0;j<k;j++){
        while(true){ 
            flag=0;
        for(i=0;i+1<n;i++){
            if(arr[i][j]=='o' && arr[i+1][j]=='.'){
                flag=1;
                temp=arr[i][j];
                arr[i][j]=arr[i+1][j];
                arr[i+1][j]=temp;
            }
        }
        if(flag==0){
            break;
        }
        }
    }   
    for(i=0;i<n;i++){
        for(j=0;j<k;j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
}
