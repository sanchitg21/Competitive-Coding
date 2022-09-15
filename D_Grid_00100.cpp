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
#define endl '\n'
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,a,b,c,d,count;
	cin >> t;
	while(t--){
		cin >> n >> k;
        lli arr[n][n];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                arr[i][j]=0;
            }
        }
        i=0;
        count=0;
        while(k>0){
            arr[i][i]=1;
            count++;
            i++;
            k--;
            if(count==n){
                break;
            }
        }
        for(a=1;a<n;a++){ 
            i=0;
            j=a;
            count=0;
            while(k>0){
                arr[i][(j%n)]=1;
                i++;
                j++;
                count++;
                k--;
                if(count==n){
                    break;
                }
            }
            if(k==0){
                break;
            }
        }
        a=b=n;
        c=d=0;
        for(i=0;i<n;i++){
            count=0;
            for(j=0;j<n;j++){
                if(arr[i][j]==1){
                    count++;
                }
            }
            a=min(a,count);
            c=max(c,count);
        }
        for(i=0;i<n;i++){
            count=0;
            for(j=0;j<n;j++){
                if(arr[j][i]==1){
                    count++;
                }
            }
            b=min(a,count);
            d=max(d,count);
        }
        cout << (d-b)*(d-b) + (c-a)*(c-a) << endl;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cout << arr[i][j];
            }
            cout << endl;
        }
	}
}
