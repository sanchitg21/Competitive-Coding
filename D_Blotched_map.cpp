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
    lli m,x,n,k,i,j,sum=0,c=0,flag=0;
    cin >> n >> m;
    char arr[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    for(i=1;i<n-1;i++){
        for(j=1;j<m-1;j++){
            if(arr[i][j]=='C'){
                if(arr[i][j+1]=='L' || arr[i][j-1]=='L' || arr[i+1][j]=='L' || arr[i-1][j]=='L' ){
                    arr[i][j]='L';
                }
            }
        }
    }
    for(i=1;i<n-1;i++){
    if(arr[i][0]=='C' && (arr[i+1][0]=='L' || arr[i-1][0]=='L' || arr[i][1]=='L')){
        arr[i][0]='L';
    }
        
    if(arr[i][m-1]=='C' && (arr[i+1][m-1]=='L' || arr[i-1][m-1]=='L' || arr[i][m-2]=='L')){
        arr[i][m-1]='L';
    }
    }
    for(j=1;j<m-1;j++){
    if(arr[0][j]=='C' && (arr[0][j-1]=='L' || arr[0][j+1]=='L' || arr[1][j]=='L')){
        arr[0][j]='L';
    }
        
    if(arr[n-1][0]=='C' && (arr[n-1][j-1]=='L' || arr[n-1][j+1]=='L' || arr[n-2][j]=='L')){
        arr[i][0]='L';
    }
    }
    if(arr[0][0]=='C' && (arr[0][1]=='L' || arr[1][0]=='L' )){
        arr[0][0]='L';
    }
    if(arr[n-1][0]=='C' && (arr[n-2][0]=='L' || arr[n-1][1]=='L' )){
        arr[n-1][0]='L';
    }
    if(arr[0][m-1]=='C' && (arr[0][m-2]=='L' || arr[1][m-1]=='L' )){
        arr[0][m-1]='L';
    }
    if(arr[n-1][m-1]=='C' && (arr[n-1][m-2]=='L' || arr[n-2][m-1]=='L' )){
        arr[n-1][m-1]='L';
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(arr[i][j]=='C'){
                arr[i][j]='W';
            }
        }
    }
    if(n==1 && m==1){
        if(arr[0][0]=='L'){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
        return 0;
    }
    if(n==1 || m==1){
        if(n==1){
            for(i=0;i+1<n;i++){
                if(arr[i][0]=='L' && arr[i+1][0]=='W'){
                    sum++;
                }
            }
            if(arr[n-1][0]=='L'){
                sum++;
            }
            cout << sum << endl;
            return 0;
        }
        for(j=0;j+1<m;j++){
            if(arr[0][j]=='L' && arr[j+1][0]=='W'){
                    sum++;    
            }
            if(arr[0][m-1]=='L'){
                sum++;
            }
            cout << sum << endl;
            return 0;
        }
    }
    i=0;
    flag=0;
    for(j=0;j+1<m;j++){
        if(arr[i][j]=='L' && (arr[i][j+1]=='L' || arr[i+1][j]=='L')){
            flag=1;
            arr[i][j]='Z';
        }
        if(flag){ 
            sum++;
            flag=0;
        }
    }
    i=n-1;
    for(j=0;j+1<m;j++){
        if(arr[i][j]=='L' && (arr[i][j+1]=='L' || arr[i-1][j]=='L')){
            arr[i][j]='Z';
        }
        if(flag){ 
            sum++;
            flag=0;
        }
    }
    j=0;
    for(i=0;i+1<n;i++){
        if(arr[i][j]=='L' && (arr[i][j+1]=='L' || arr[i-1][j]=='L')){
            arr[i][j]='Z';
        }
    }
    for(i=1;i+1<n;i++){
        for(j=1;j+1<m;j++){
            if(arr[i][j]=='L' && (arr[i][j+1]=='W' || j+1==m) && (arr[i][j-1]=='W' || j-1==-1) && (arr[i+1][j]=='W' || i+1==n) && (arr[i-1][j]=='W' || i-1==-1)){
                c++;
            }   
            else if(arr[i][j]=='L' && (arr[i][j+1]=='Z' || arr[i][j-1]=='Z' || arr[i+1][j]=='Z' || arr[i-1][j]=='Z')){ 
                arr[i][j]='Z';
            }
            else if(arr[i][j]=='L'){
                c++;
                arr[i][j]='Z';
            }
        }
    }
    for(i=1;i+1<n;i++){
        if(arr[i][0]=='L' && (arr[i+1][j]=='Z' || arr[i-1][j]=='Z' || arr[i][1]=='Z')){
            arr[i][j]='Z';
        }
        else{
            arr[i][j]='Z';
            c++;
        }
    }
    for(i=1;i+1<n;i++){
        if(arr[i][m-1]=='L' && (arr[i+1][m-1]=='Z' || arr[i-1][j]=='Z' || arr[i][1]=='Z')){
            arr[i][j]='Z';
        }
        else{
            arr[i][j]='Z';
            c++;
        }
    }
    cout << c << endl;   
}