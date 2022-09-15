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
	lli n,t,i,j,count,m,s,v,p,q;
    cin >> t;
    while(t--){
        cin >> n;
        vll a(n);
        vll b(n);
        for(i=0;i<n;i++){
            cin >> a[i];
        }
        for(i=0;i<n;i++){
            cin >> b[i];
        }
        sa(a);
        sa(b);
        s=v=0;
        m=n/4;
        for(i=m;i<n;i++){
            s=s+a[i];
        }
        for(i=m;i<n;i++){
            v=v+b[i];
        }
        count=0;
        q=m;
        p=m;
        while(s<v){
            s+=100;
            count++;
            if((n+count)%4!=0){
                q--;
                if(q>=0){ 
                    v=v+b[q];
                }
            }
            else if((n+count)%4==0){
                if(p<n){ 
                    s=s-a[p];
                    p++;
                }
                else{
                    s=s-100;
                }
            }
        }
        cout << count << endl;
    }
}
