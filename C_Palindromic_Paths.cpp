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
    long long int t,n,m,i,j,l,k,flag,a,b,sum;
    cin >> t;
    while(t--){
        cin >> n >> m;
        sum=0;
        lli arr[n][m];
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin >> arr[i][j];
            }
        }
        if(m>n){ 
        for(j=0;j<(n+m-1)/2;j++){
            a=0;
            b=0;
            k=j;
            i=0;
            while(i<n && k>=0){
                if(arr[i][k]){
                    a++;
                }
                else{
                    b++;
                }
                if(arr[n-i-1][m-k-1]){
                    a++;
                }
                else{
                    b++;
                }
                k--;
                i++;
            }
            sum=sum+min(a,b);
        }
        }
        else{ 
        for(i=0;i<(n+m-1)/2;i++){
            a=0;
            b=0;
            k=i;
            j=0;
            while(j<m && k>=0){
                if(arr[k][j]){
                    a++;
                }
                else{
                    b++;
                }
                if(arr[n-k-1][m-j-1]){
                    a++;
                }
                else{
                    b++;
                }
                k--;
                j++;
            }
            sum=sum+min(a,b);
        }
        }
        cout << sum << endl;
    }
}