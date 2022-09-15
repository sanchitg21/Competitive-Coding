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
    lli i,t,n,j,x,y,flag;
    cin >> t;
    while(t--){
        cin >> n;
        vll v(n);
        vector<vll>s;
        flag=0;
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        cout << n-1 << endl;
        lli mn= 1000000001,index;
        for(i=0;i<n;i++){
            if(mn>v[i]){
                mn=v[i];
                index=i;
            }
        }
        int a=1;
        for(i=index;i+1<n;i++){
            s.pb({index+1,i+2,mn,mn+a});
            a=1-a;
        }
        a=1;
        for(i=index;i>=1;i--){
            s.pb({index+1,i,mn,mn+a});
            a=1-a;
        }
        for(i=0;i<s.size();i++){
            for(j=0;j<4;j++){ 
                cout << s[i][j] << " ";
            }
            cout << endl;
        }

    }
}
