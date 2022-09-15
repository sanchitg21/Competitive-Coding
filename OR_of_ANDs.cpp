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
const int mod=1e9+7;
const int M=5e5+5;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli a,q,t,n,i,j,sum,ans,idx,num,s;
    cin >>t;
    while(t--){ 
        cin >> n >> q;
        vll v(n+1);
        vll bits(32,0);
        for(i=1;i<=n;i++){
            cin >> v[i];
            sum=v[i];
            while(sum>0){
                s=1;
                a=0;
                while(s<=sum){ 
                    s=s*2;
                    a++;
                }
                a--;
                sum=sum-(1<<a);
                bits[a]++;
            }
        }
        ans=v[1];
        for(i=1;i<=n;i++){
            ans=(ans|v[i]);
        }
        cout << ans << endl;
        for(j=0;j<q;j++){
            cin >> idx >> num;
            ans=0;
            sum=v[idx];
            while(sum>0){
                s=1;
                a=0;
                while(s<=sum){ 
                    s=s*2;
                    a++;
                }
                a--;
                sum=sum-(1<<a);
                bits[a]--;
            }
            sum=num;
            while(sum>0){
                s=1;
                a=0;
                while(s<=sum){ 
                    s=s*2;
                    a++;
                }
                a--;
                sum=sum-(1<<a);
                bits[a]++;
            }
            for(i=0;i<bits.size();i++){
                if(bits[i]){
                    ans=ans+ (1<<i);
                }
            }
            cout << ans << endl;
        }
    }
}
