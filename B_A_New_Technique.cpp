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
	lli n,t,i,j,k,m,index;
	cin >> t;
	while(t--){
		cin >> n >> m;
        lli row[n][m];
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin >> row[i][j];
            }
        }

        lli col[n][m];
        for(j=0;j<m;j++){
            for(i=0;i<n;i++){
                cin >> col[i][j];
            }
        }
        
        lli arr[n][m];
        for(j=0;j<m;j++){
            mps mp;
            for(i=0;i<n;i++){
                mp[col[i][j]]++;
            }
            
            for(i=0;i<m;i++){
                mps pm;
                for(k=0;k<n;k++){
                    pm[row[k][i]]++;
                }
                if(mp==pm && row[0][i]!=0){
                    index=i;
                    // cout << index << endl;
                    row[0][i]=0;
                    break;
                }
            }

            for(k=0;k<n;k++){ 
                arr[k][index]=col[k][j];
            }
        } 
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
	}
}
