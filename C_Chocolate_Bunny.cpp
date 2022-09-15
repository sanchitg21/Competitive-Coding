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
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,i,low,high,x,y,index,ans;
	cin >> n;
    //find highest number in O(n)
    // wrt highest find rest of the numbers in O(n)
    low=1;
    high=n;
    vll v(n+1);
    while(low<high){
        cout << "?" << " " << low << " " << high << endl;
        cin >> x;
        cout << "?" << " " << high << " " << low << endl;
        cin >> y;
        if(x>y){
            v[low]= x;
            low++;
        }
        else{
            v[high]=y;
            high--;
        }
    }
    index=low;
    v[index]=n;
    cout << "!";
    for(i=1;i<=n;i++){ 
        cout << " " << v[i];
    }
}
