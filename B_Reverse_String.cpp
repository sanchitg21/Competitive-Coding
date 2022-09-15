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
	lli n,t,i,j,k,step,flag;
	cin >> t;
	while(t--){
        flag=0;
        string s;
        cin >> s;
        string target;
        cin >> target;
        n=s.length();
        for(i=0;i<n;i++){
            j=0;
            while(target[j]==s[i+j]){ 
                j++;
            }
            step=j;
            k=1;
            while(target[step]==s[i+j-k]){
                k++;
                step++;
            }
            if(j==target.length()){
                flag=1;
                break;
            }
        }
        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
	}
}
