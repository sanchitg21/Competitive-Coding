//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<lli>())
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
	lli n,t,i,j,m,count;
    cin >> t;
    while(t--){
        count=0;
        cin >> n >> m;
        lli arr[n][m];
        for(i=0;i<n;i++){
            string s;
            cin >> s;
            for(j=0;j<m;j++){    
                arr[i][j]=(lli)s[j]-48;
                if(s[j]=='1'){
                    count++;
                }
            }
        }
        cout << count*3 << endl;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){ 
                if(arr[i][j]==1 && i+1<n && j+1<m){
                    cout << i+1 <<" "<< j+1 <<" "<< i+2<<" " << j+1 <<" " << i+2 <<" " << j+2 << endl;
                    cout << i+2 <<" "<< j+1<< " "<< i+2<<" " << j+2 <<" " << i+1 <<" " << j+2 << endl;
                    cout << i+1 <<" "<< j+1<< " "<< i+2<<" " << j+1 <<" " << i+1 <<" " << j+2 << endl;
                }
                else if(arr[i][j]==1 && i+1<n && j+1==m){
                    cout << i+1 <<" "<< j+1<<" " << i+1 << " " << j << " " << i+2 << " " << j << endl;
                    cout << i+2 <<" "<< j << " "<<i+2 <<" "<< j+1 <<" "<< i+1 <<" "<< j+1 << endl;
                    cout << i+1 <<" "<< j <<" "<< i+1 <<" "<< j+1 <<" "<< i+2 << " "<<j+1 << endl;
                }
                else if(arr[i][j]==1 && i+1==n && j+1<m){
                    cout << i+1 <<" "<< j+1 <<" "<< i <<" "<< j+1 <<" "<< i <<" "<< j+2 << endl;
                    cout << i <<" "<< j+2 <<" "<< i+1 <<" "<< j+2 <<" "<< i+1 <<" "<< j+1 << endl;
                    cout << i+1 <<" "<< j+1 <<" "<< i <<" "<< j+1 <<" "<< i+1 <<" "<< j+2 << endl;
                }
                else if(arr[i][j]==1 && i+1==n && j+1==m){
                    cout << i <<" "<< j <<" "<< i <<" "<< j+1 <<" "<< i+1 <<" "<< j+1 << endl;
                    cout << i <<" "<< j <<" "<< i+1 <<" "<< j <<" "<< i+1 <<" "<< j+1 << endl;
                    cout << i+1 <<" "<< j+1 <<" "<< i <<" "<< j+1 << " "<<i+1 <<" "<< j << endl;
                }
            }
        }
    }
}
