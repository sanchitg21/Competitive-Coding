//CODE BY Sanchit Gupta
#define pb push_back
#define db double
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<lli>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpc map<char,lli>
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
		cin >> n >> k;
        string s;
        cin >> s;
        lli index1=-1;
        lli index2=-1;
        lli count=0;
        for(i=0;i<n;i++){
            if(s[i]=='1'){
                count++;
            }
        }
        for(i=0;i<n;i++){
            if(s[i]=='1'){
                index1=i;
                break;
            }
        }
        for(i=n-1;i>=0;i--){
            if(s[i]=='1'){
                index2=i;
                break;
            }
        }
        if(index1==-1 && index2==-1){
            cout << 0 << endl;
            continue;;
        }
        else if(index1==index2){
            if(n-index1-1<=k){
                cout << 1 << endl;
            }
            else if(index1<=k){
                cout << 10 << endl;
            }
            else{
                cout << 11 << endl;
            }
            continue;
        }
        lli ans=(count-2)*11;
        if(n-index2-1 <=k){
            ans+=1;
            k=k-(n-index2-1);
        }
        else{
            ans+=11;
        }

        if(index1<=k){
            ans+=10;
        }
        else{
            ans+=11;
        }
        cout << ans << endl;
	}
}