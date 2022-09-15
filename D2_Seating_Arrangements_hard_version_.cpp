//CODE BY Sanchit Gupta
#define pb push_back
#define db double
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
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=5e5+5;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n >> m;
        vpl v(n*m);
        for(i=0;i<n*m;i++){
            cin >> v[i].ff;
            v[i].ss=i+1;
        }
        sa(v);
        k=0;
        vector<vll>ans(n,vll(m,0));
        vector<vll>index(n,vll(m,0));
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                ans[i][j]=v[k].ff; 
                index[i][j]=v[k++].ss;
            }
        }
        k=0;
        for(i=0;i<n;i++){
            j=1;
            k=0;
            while(j<m){ 
                while(j<m && ans[i][j]==ans[i][j-1]){
                    j++;
                }
                reverse(index[i].begin()+k,index[i].begin()+j);
                k=j++;
            }
        }
        lli total=0;
        for(k=0;k<n;k++){
            for(i=0;i<m;i++){
                lli count=0;
                for(j=0;j<i;j++){
                    if(index[k][j]<index[k][i]){
                        count++;
                    }
                }
                total=total+count;
            }
    	}
        cout << total << endl;
    }
}