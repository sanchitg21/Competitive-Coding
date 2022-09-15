//CODE BY Sanchit Gupta
#define pb push_back
#define db double
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<lli>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define ff first
#define ss second
#define ordered_set tree<lli, null_type,less<lli>, rb_tree_tag,tree_order_statistics_node_update>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
#pragma GCC optimize("Ofast")
using namespace __gnu_pbds;
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=1e5+1;
const int INF = INT_MAX;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n;
        set<string>s;
        vector<vector<string>>v(3,vector<string>(n));
        for(int i=0;i<3;i++){
            for(int j=0;j<n;j++){
                cin >> v[i][j];
                s.insert(v[i][j]);
            }
        }
        map<string,int>mpa;
        map<string,int>mpb;
        map<string,int>mpc;

        i=0;
        j=1;
        k=2;
        for(int l=0;l<n;l++){
            mpa[v[i][l]]++;
        }
        for(int l=0;l<n;l++){
            mpb[v[j][l]]++;
        }
        for(int l=0;l<n;l++){
            mpc[v[k][l]]++;
        }
        
        int sa=0,sb=0,sc=0;
        for(auto it=s.begin();it!=s.end();it++){
            int count=0;
            int p=0,q=0,r=0;
            if(mpa.find(*it)!=mpa.end()){
                count++;
                p=1;
            }
            if(mpb.find(*it)!=mpb.end()){
                count++;
                q=1;
            }
            if(mpc.find(*it)!=mpc.end()){
                count++;
                r=1;
            }
            if(count == 1){
                if(p==1){
                    sa+=3;
                }
                else if(q==1){
                    sb+=3;
                }
                else{
                    sc+=3;
                }
            }
            else if(count ==2){
                if(!p){
                    sb+=1;
                    sc+=1;
                }
                else if(!q){
                    sa+=1;
                    sc+=1;
                }
                else if(!r){
                    sa+=1;
                    sb+=1;
                }
            }
        }

        cout << sa << " " << sb << " " << sc << endl;
	}
}
