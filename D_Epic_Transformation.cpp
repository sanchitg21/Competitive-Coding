#include<iostream>
#include<cmath>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int mod=1e9+7;
int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   long long int t,n,i;
   int maxi;   
   cin >> t;
   while(t--){
      cin >> n;
      vector<int>v(n);
      for(i=0;i<n;i++){
         cin >> v[i];
      }
      sort(v.begin(),v.end());
      map<int,int>mp;
      map<int,int>::iterator ix;
      for(int i=0;i<n;i++){
         mp[v[i]]++;
      }
      maxi=0;
      for(ix=mp.begin();ix!=mp.end();ix++){
         maxi=max(maxi,ix->second);
      }
      if(maxi<=n/2 && n%2==0){
         cout << 0 << endl;
         continue;
      }
      else if(maxi<=n/2 && n%2==1){
         cout << 1 << endl;
         continue;
      }  
      cout << 2*maxi - n << endl;
   }
}
