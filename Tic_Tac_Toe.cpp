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
int mod=1e9+7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int x,o,t,j,n,i,flag,cx,co;
    cin >> t;
    while(t--){ 
        char arr[3][3];
        x=0;
        o=0;
        cx=0;
        co=0;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                cin >> arr[i][j];
                if(arr[i][j]=='X'){
                    cx++;
                }
                else if(arr[i][j]=='O'){
                    co++;
                }
            }
        }
        j=0;
        for(i=0;i<3;i++){
            if(arr[i][j]==arr[i][j+1] && arr[i][j+1]==arr[i][j+2]){
                if(arr[i][j]=='X'){
                    x++;
                }
                if(arr[i][j]=='O'){
                    o++;
                }
            }
        }
        i=0;
        for(j=0;j<3;j++){
            if(arr[i][j]==arr[i+1][j] && arr[i+1][j]==arr[i+2][j]){
                if(arr[i][j]=='X'){
                    x++;
                }
                if(arr[i][j]=='O'){
                    o++;
                }
            }
        }
        i=j=0;
        if(arr[i][j]==arr[i+1][j+1] && arr[i+1][j+1]==arr[i+2][j+2]){
            if(arr[i][j]=='X'){
                x++;
            }
            if(arr[i][j]=='O'){
                o++;
            }
        }
        i=0;
        j=2;
        if(arr[i][j]==arr[i+1][j-1] && arr[i+1][j-1]==arr[i+2][j-2]){
            if(arr[i][j]=='X'){
                x++;
            }
            if(arr[i][j]=='O'){
                o++;
            }
        }
        if(x>1 || o>1){
            cout << 3 << endl;
            continue;
        }
        if(x==1 && o==1){
            cout << 3 << endl;
            continue;
        }
        if(co>cx || cx>co+1){
            cout << 3 << endl;
            continue;
        }
        if((x==1 && o==0 && cx!=co+1) || (x==0 && o==1 && cx!=co)){
            cout << 3 << endl;
            continue;
        }
        if((x==1 && o==0 && cx==co+1) || (x==0 && o==1 && cx==co)){
            cout << 1 << endl;
            continue;
        }
        if(co+cx==9){
            cout << 1 << endl;
            continue;
        }
        else{
            cout << 2 << endl;
        }
    }
}