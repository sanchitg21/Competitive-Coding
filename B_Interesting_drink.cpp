//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vp vector<pair<int,int>>
#define vll vector<lli>
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,q,i,j;
    cin >> n;
    vector<long long> v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
    }   
    cin >> q;
    vector<long long> m(q);
    for(i=0;i<q;i++){
        cin >> m[i];
    }
    sort(v.begin(),v.end());
    // BINARY SEARCH
    long long int high,low,mid;
    for(i=0;i<q;i++){
        high=n;
        low=0;
        while(low<high || high==0){
            mid=(high+low)/2;
            if(m[i]>=v[mid]){
                low=mid;
            }
            else if(m[i]<v[mid]){
                high=mid;
            }
            if(m[i]<v[0]){
                cout << 0 << endl;
                break;
            }
            if(m[i]>=v[n-1]){
                cout << n << endl;
                break;
            }
            if((m[i]>=v[mid] && m[i]<v[mid+1])){
                cout << mid+1 << endl;
                break;
            }      
        }
    }
}
// ALWAYS TAKE BINARY CODES LIKE THIS