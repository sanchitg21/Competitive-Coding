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
	lli n,t,i,j,k,m,a,step;
	cin >> t;
	while(t--){
		cin >> n >> m;
        vll k(n);
        for(i=0;i<n;i++){
            cin >> k[i];
        }
        vll gifts(m);
        for(i=0;i<m;i++){
            cin >> gifts[i];
        }
        sa(k);
        //gifts from back;
        //money from starting;
        step=0;
        lli low=0,high=n-1,sum=0;
        while(low<=high){
            if(step<=k[high]-1){ 
                a=min(gifts[step],gifts[k[high]-1]);
            }
            else{
                a=gifts[k[low]-1];
            }
            if(step==m){
                sum=sum+ gifts[k[low]-1];
                low++;
                continue;
            }
            if(gifts[k[low]-1]>=a){
                sum=sum+a;
                step++;
                high--;
            }
            if(gifts[k[low]-1]<a){
                sum=sum+gifts[k[low]-1];
                low++;
            }
        }
        cout << sum << endl;
	}
}
