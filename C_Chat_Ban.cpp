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
#pragma GCC optimize("Ofast")
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
		cin >> n >> k;
        lli initial=0;
        if(n*(n+1)/2 <k){
            initial = 2*n-1;
            k=n*n-k;
            n=n-1;
            // binary search
            lli low=0,high=n,mid;
            while(low+1<high){
                mid=(low+high)/2;
                if(mid*(mid-1)/2 >=k){
                    high=mid;
                }
                else if(mid*(mid+1)/2<k){
                    low=mid;
                }
                else{
                    break;
                }
            }
            mid=(low+high)/2;
            if(mid*(mid+1)/2 > k && mid*(mid-1)/2 < k){
                cout << initial - (mid-1) << endl;
            } 
            else{
                cout << initial - (mid) << endl;
            }
            continue;
        }
        // binary search
        lli low=0,high=n,mid;
        while(low+1<high){
            mid=(low+high)/2;
            if(mid*(mid-1)/2 >=k){
                high=mid;
            }
            else if(mid*(mid+1)/2<k){
                low=mid;
            }
            else{
                break;
            }
        }
        mid=(low+high)/2;
        
        if(mid*(mid+1)/2 >= k && mid*(mid-1)/2 < k){
            cout << mid << endl;
        } 
        else{
            cout << mid+1 << endl;
        }
	}
}