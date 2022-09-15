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
        vector<vll>v(n);
        vpl ans;
        for(i=0;i<n;i++){
            cin >>k;
            v[i].resize(k);
            for(j=0;j<k;j++){
                cin >> v[i][j];
            }
            lli mx=0;
            for(j=0;j<k;j++){
                mx=max(mx,v[i][j]-j+1);
            }
            ans.pb({mx,k});
        }
        sa(ans);
        // binary search
        lli low=ans[0].ff;
        lli high=ans[ans.size()-1].ff;
        lli mid;
        while(low<high){
            mid=(low+high)/2; // mid is the guessed number
            lli count=mid;
            for(i=0;i<ans.size();i++){
                if(ans[i].ff <= count){
                    count= count + ans[i].ss;
                }
                else{
                    break;
                }
            }
            if(i==ans.size()){
                high=mid;
            }
            else{
                low=mid;
            }
            if(high-low==1){
                break;
            }
        }
        lli count=low;
        for(i=0;i<ans.size();i++){
            if(ans[i].ff <= count){
                count= count + ans[i].ss;
            }
            else{
                break;
            }
        }
        if(i==ans.size()){
            cout << low << endl;
        }
        else{ 
            cout << high << endl;
        }
	}
}