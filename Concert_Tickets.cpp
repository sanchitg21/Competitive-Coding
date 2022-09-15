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
	cin >> n >> m;
    // vll v(n);
	// for(i=0;i<n;i++){ 
    // 	cin >> v[i];
	// }
    // vll s(m);
    // for(i=0;i<m;i++){ 
    // 	cin >> s[i];
	// }
    // sa(v);
    // for(i=0;i<m;i++){
    //     lli index=lower_bound(v.begin(),v.end(),s[i])-v.begin();
    //     if(index<v.size() && v[index]==s[i]){
    //         cout << v[index] << endl;
    //         v.erase(v.begin()+index,v.begin()+index+1);
    //     }
    //     else if(index-1<v.size() && v[index-1]<s[i]){
    //         cout << v[index-1] << endl;
    //         v.erase(v.begin()+index-1,v.begin()+index);
    //     }
    //     else{
    //         cout << -1 << endl;
    //     }
    // }
    multiset<lli>v;
    for(i=0;i<n;i++){
        cin >> k; 
    	v.insert(k);
	}
    vll s(m);
    for(i=0;i<m;i++){ 
    	cin >> s[i];
	}
    for(i=0;i<m;i++){
        auto index=v.lower_bound(s[i]);
        if(v.size()==0){
            cout << -1 << endl;
            continue;
        }
        if(index!=v.end() && *index==s[i]){
            cout << *index << endl;
            v.erase(index);
        }
        else if(index!=v.begin() && *(--index)<s[i]){
            cout << *(index) << endl;
            v.erase(index);
        }
        else{
            cout << -1 << endl;
        }
    }
}