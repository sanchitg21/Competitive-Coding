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
    lli i,n,t,k,j,d,flag=0,even1,even0,odd0,odd1;
    cin >> t;
    while(t--){
        even1=0;
        even0=0;
        odd0=0;
        odd1=0;
        cin >> n;
        vector<string> v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        for(i=0;i<n;i++){
            if(v[i].length()%2==0){
                for(j=0;j<v[i].length();j++){
                    if(v[i][j]=='1'){ 
                        even1++;
                    }
                    else{
                        even0++;
                    }
                }
            }
            else{
                for(j=0;j<v[i].length();j++){
                    if(v[i][j]=='1'){ 
                        odd1++;
                    }
                    else{
                        odd0++;
                    }
                }
            }
        }
        if(even1%2==0){
            cout << n << endl;
            continue;
        }
        if((even1%2==1 && odd1!=0) || (even0%2==1 && odd0!=0)){
            cout << n << endl;
            continue;
        }
        cout << n-1 << endl;
    }
}
