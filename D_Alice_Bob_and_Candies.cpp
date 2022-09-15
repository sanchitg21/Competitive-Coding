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
	lli n,t,i,j,k,a,b;
	cin >> t;
	while(t--){
		cin >> n;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        //2 pointers
        
        lli low=1,high=n-1,bob=0,alice=v[0],steps=1;
        a=v[0];
        b=0;
        while(low<=high){
            while(bob<=alice && steps%2==1 &&low<=high){
                bob=bob+v[high];
                high--;
            }
            if(steps%2==1){
                alice=0;
            }
            while(bob>=alice && steps%2==0 &&low<=high){
                alice=alice+v[low];
                low++;
            }
            if(steps%2==0){
                bob=0;
            }
            b=b+bob;
            a=a+alice;
            steps++;
        }   
        cout << steps << " " << a << " " << b << endl;
	}
}
