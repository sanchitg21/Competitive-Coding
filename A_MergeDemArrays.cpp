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

int Q(int a[],int b[],int n1, int n2){  
    int l1=0;
    int l2=0;
    int arr[n1+n2];
    int index=0;
    while(l1<n1 || l2<n2){  // we can also put condition as "index<n1+n2"
        if(l1==n1){
            arr[index++]=b[l2++];
            continue;
        }
        if(l2==n2){
            arr[index++]=a[l1++];
            continue;
        }
        if(a[l1]>=b[l2]){
            arr[index++]=b[l2++];
        }
        if(a[l1]<b[l2]){
            arr[index++]=a[l1++];
        }
    }
    for(int i=0;i<n1+n2;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,ans;
    cin >> n >> m;
    int a[n];
    int b[m];
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    for(i=0;i<m;i++){
        cin >> b[i];
    }
    ans=Q(a,b,n,m);
}
