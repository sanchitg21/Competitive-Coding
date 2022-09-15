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
	lli n,t,i,j,k,sum1,sum2;
    cin >> t;
    while(t--){
        cin >> n;
        vll a(n);
        sum1=0;
        sum2=0;
        vll b(n);
        vll c;
        vll d;
        for(i=0;i<n;i++){
            cin >> a[i];
            sum1=sum1+a[i];
        }
        for(i=0;i<n;i++){
            cin >> b[i];
            sum2=sum2+b[i];
        }
        if(sum1!=sum2){
            cout << -1 << endl;
            continue;
        }
        for(i=0;i+1<n;i++){
            while(a[i]>b[i]){
                for(j=i+1;j<n;j++){
                    if(a[j]<b[j] && a[i]>0){
                        a[j]++;
                        a[i]--;
                        c.pb(i+1);
                        d.pb(j+1);
                        
                    }
                }
            }
            while(a[i]<b[i]){
                for(j=0;j+1<n;j++){
                    if(a[j]>b[j] && a[j]>0){
                        a[j]--;
                        a[i]++;
                        c.pb(j+1);
                        d.pb(i+1);
                        j--;
                    }
                }
            }
        }
        cout << c.size() << endl;
        for(i=0;i<c.size();i++){
            cout << c[i] << " " << d[i] << endl;
        }
    }
}