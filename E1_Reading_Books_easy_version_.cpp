//CODE BY Sanchit Gupta
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<lli>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpst map<string,lli>
#define mpc map<char,lli>
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
	lli n,m,t,i,j,k,low,high,ca,cb;
		cin >> n >> k;
        lli arr[n][3];
        for(i=0;i<n;i++){
            for(j=0;j<3;j++){
                cin >> arr[i][j];
            }
        }
        ca=cb=0;
        for(i=0;i<n;i++){
            if(arr[i][1]==1){
                ca++;
            }
        }
        for(i=0;i<n;i++){
            if(arr[i][2]==1){
                cb++;
            }
        }
        if(k>ca || k>cb){
            cout << -1 << endl;
            return 0;
        }
        vll a;
        for(i=0;i<n;i++){
            if(arr[i][2]==0 && arr[i][1]==1){ 
                a.pb(arr[i][0]);
            }
        }

        vll b;
        for(i=0;i<n;i++){
            if(arr[i][2]==1 && arr[i][1]==0){ 
                b.pb(arr[i][0]);
            }
        }
        
        sa(a);
        sa(b);

        vll ans;
        for(i=0;i<n;i++){
            if(arr[i][2]==1 && arr[i][1]==1){ 
                ans.pb(arr[i][0]);
            }
        }
        i=0;
        while(a.size()>i && b.size()>i){ 
            ans.pb(a[i]+b[i]);
            i++;
        }
        lli sum=0;
        sa(ans);
        for(i=0;i<k;i++){
            sum=sum+ans[i];
        }
        cout << sum << endl;	
}
