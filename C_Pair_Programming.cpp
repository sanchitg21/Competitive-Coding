//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
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
	lli n,t,i,j,k,m,flag;
    cin >> t;
    while(t--){
        cin >> k >> n >> m;
        vll v(n);
        vll s(m);
        vll ans(n+m);
        flag=0;
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        for(i=0;i<m;i++){
            cin >> s[i];
        }
        lli low=0,high=0;
        lli step=0;
        while(low<n && high<m){
            if(v[low]==0){
                ans[step++]=0;
                low++;
                k++;
            }
            else if(s[high]==0){
                ans[step++]=0;
                high++;
                k++;
            }
            else if(v[low]<=s[high]){
                if(v[low]<=k){
                    ans[step++]=v[low];
                    low++;
                }
                else{
                    flag=1;
                    break;
                }
            }
            else if(v[low]>s[high]){
                if(s[high]<=k){
                    ans[step++]=s[high];
                    high++;
                }
                else{
                    flag=1;
                    break;
                }
            }
        }
        if(low!=n){
            while(low<n){ 
                if(v[low]==0){
                    ans[step++]=0;
                    low++;
                    k++;
                }
                else{
                    if(v[low]<=k){
                        ans[step++]=v[low];
                        low++;
                    }
                    else{
                        flag=1;
                        break;
                    }
                }   
            }
        }
        else if(high!=m){
            while(high<m){ 
                if(s[high]==0){
                    ans[step++]=0;
                    high++;
                    k++;
                }
                else{
                    if(s[high]<=k){
                        ans[step++]=s[high];
                        high++;
                    }
                    else{
                        flag=1;
                        break;
                    }
                }   
            }
        }
        if(flag==1){
            cout << -1 << endl;
            continue;
        }
        for(i=0;i<ans.size();i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}