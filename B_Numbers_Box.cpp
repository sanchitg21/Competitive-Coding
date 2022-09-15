//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<lli>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpst map<string,lli>
#define ff first
#define ss second
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
#define endl '\n'
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,t,i,j,m,count,ans,flag,sum,mn;
    cin >> t;
    while(t--){
        cin >> n >>m;
        lli arr[n][m];
        flag=0;
        sum=0;
        mn=1e9;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin >> arr[i][j];
                sum=sum+abs(arr[i][j]);
                mn=min(mn,abs(arr[i][j]));
                if(arr[i][j]==0){
                    flag=1;
                }
            }
        }
        if(flag==1){
            cout << sum << endl;
            continue;
        }
        count=0;
        for(i=0;i<n;i++){
            ans=0;
            for(j=0;j<m;j++){
                if(arr[i][j]<0){
                    ans++;
                }
            }
            count+=(ans%2);
        }
        if(count%2==0){
            cout << sum << endl;
        }
        else{
            cout << sum - 2*mn << endl;
        }
    }
}