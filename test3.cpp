   //  #include <bits/stdc++.h> 
   //  using namespace std; 
     
   //  #define lli long long 
   //  #define MAX 1000006 
     
   //  lli A[MAX],cum[MAX]; 
     
   //  int main() 
   //  { 
   //      int l = 1, r = 2, st,en,n,k; 
         
   //      lli sum,ans; 
     
   //      cin >> n >> k; 
         
   //      for ( int i = 1; i <= n; i++ ){ 
   //          cin >> A[i]; 
   //      }
     
   //      sort(A+1, A+n+1); 
     
   //      cum[0] = 0; 
   //      for ( int i = 1; i <= n; i++ ) cum[i] = cum[i-1] + A[i]; 
         
   //      while ( r <= k ) { 
   //         sum += (A[r]*(r-l) - (cum[r-1] - cum[l-1])); 
   //         r++; 
   //      } 
     
   //      st = 1, en = k, ans = sum; 
     
   //      while ( r <= n ) { 
   //         sum -= (cum[r-1] - cum[l] - A[l]*(r-l-1)); 
   //         l++; 
   //         sum += (A[r]*(r-l) - (cum[r-1] - cum[l-1])); 
             
   //         if ( ans > sum ) { 
   //            ans = sum; 
   //            st = l; 
   //            en = r; 
   //         } 
   //         r++; 
   //      } 
   //      cout << sum << endl;
   //      return 0; 
   //  } 
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
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
   lli n,i,j,k;
   cin >> k;
   string s = "abcbdbdbbdcdabd";
   cin >> s;
   n=s.length();
   map<char,int> mp;
   map<char,int>::iterator it;
   int low,high=0;
   for(low=0;low<n-k;low++){
      while(high<k){
         mp[s[high]]++;
         high++;   
      }
      //print
      mp[s[high]]++;
      mp[s[low]]--;
      high++;
}
