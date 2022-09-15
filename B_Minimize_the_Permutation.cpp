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
		cin >> n;
        vll v(n);
        lli steps=0;
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        vpl ans;
        for(i=0;i<n;i++){
            lli pos=v[i];
            for(j=i;j<n;j++){
                pos=min(pos,v[j]);
            }
            if(v[i]==pos){
                pos++;
                continue;
            }
            else{
                for(j=i+1;j<n;j++){
                    if(v[j]==pos){
                        steps+=j-i;
                        if(steps>n-1){
                            break;
                        }
                        ans.pb({i,v[j]});
                        swap(v[j],v[j-1]);
                        i=j-1;
                        break;
                    }
                }
            }
        }
        for(j=0;j<ans.size();j++){
            for(i=0;i<v.size();i++){
                if(ans[j].ss == v[i]){
                    v.erase(v.begin()+i,v.begin()+i+1);
                    break;
                }
            }
        }
        i=j=0;
        for(k=0;k<n;k++){
            if(i<ans.size() && k==ans[i].ff){
                cout << ans[i++].ss << " ";
            }
            else{
                cout << v[j++] << " ";
            }
        }
        cout << endl;
	}
}