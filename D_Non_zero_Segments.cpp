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
	lli n,t,i,j,sum,count=0;
    cin >> n;
    vll v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }
    i=0;
    set<lli>s;
    while(i<n){ 
        s.insert(0);
        sum=0;
        for(i;i<n;i++){
            sum=sum+v[i];
            if(s.find(sum)!=s.end()){
                count++;
                s.clear();
                break;
            }
            s.insert(sum);
        }
    }
    cout << count << endl;
}
//damn 