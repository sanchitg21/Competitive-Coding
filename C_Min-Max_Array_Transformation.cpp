// //CODE BY Sanchit Gupta
// #define pb push_back
// #define db double
// #define lli long long int
// #define sa(v) sort(v.begin(),v.end())
// #define sd(v) sort(v.begin(),v.end(),greater<lli>())
// #define vpl vector<pair<lli,lli>>
// #define vll vector<lli>
// #define mps map<lli,lli>
// #define mpc map<char,lli>
// #define ff first
// #define ss second
// #define ordered_set tree<lli, null_type,less<lli>, rb_tree_tag,tree_order_statistics_node_update>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// #include<iostream>
// #include<cmath>
// #include<bits/stdc++.h>
// #include<algorithm>
// #pragma GCC optimize("Ofast")
// using namespace __gnu_pbds;
// using namespace std;
// #define gcd(a,b) __gcd(a,b)
// #define lcm(a,b) a*b/__gcd(a,b)
// #define endl '\n'
// const int mod=1e9+7;
// const int M=1e5+1;
// const int INF = INT_MAX;

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	cin >> t;
// 	while(t--){
// 		cin >> n;
//         vll a(n),b(n),v(n);
//         for(int i=0;i<n;i++){
//             cin >> a[i];
//         }
//         for(int i=0;i<n;i++){
//             cin >> b[i];
//         }
//         for(int i=0;i<n;i++){
//             cout << b[lower_bound(b.begin(),b.end(),a[i]) - b.begin()] - a[i] << " ";
//         }
//         cout << endl;

//         multiset<pair<int,int>>s;
//         for(int i=0;i<n;i++){
//             s.insert({b[i],i});
//         }
//         for(int i=n-1;i>=0;i--){
//             auto it = s.lower_bound({a[i],0});
//             v[(*it).second] = i;
//             s.erase(it);
//         }

//         vector<pair<int,int>>ans;
//         ans.pb({v[n-1],b[n-1]-a[v[n-1]]});
//         int index = 0;
//         for(i=n-2;i>=0;i--){
//             if(a[v[i]]<=a[v[i+1]]){
//                 ans.pb({v[i],b[i]-a[v[i]]});
//             }
//             else{
//                 index = i+1;
//                 break;
//             }
//         }
        
//         if(index){
//             for(;i>=0;i--){
//                 ans.pb({v[i],b[index] - a[v[i]]});
//             }
//         }

//         // auto cmp = [&ans](pair<int,int> &a,pair<int,int> &b){
//         //     if(a.second == b.second){
//         //         return a.first >  b.first;
//         //     }
//         //     return a.second < b.second;
//         // };

//         sort(ans.begin(),ans.end());

//         for(int i=0;i<n;i++){
//             cout << ans[i].second << " ";
//         }
//         cout << endl;
// 	}
// }

    #include<bits/stdc++.h>
    using namespace std;
    #define runtime() ((double)clock() / CLOCKS_PER_SEC)
    #define endl "\n"
    // #define int long long
    const unsigned int M = 1000000007;
    const int mxm=1e9+7;
    const int mx=2e5+5;
    #define pb(x) push_back(x)
    #define FAST cin.tie(0)->sync_with_stdio(0);
    
    int32_t main()
    {
        ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
      
        
     
      int t;
      cin >>t;
      while(t--)
      {
      int n;
      cin >>n;
      std::vector<int> a;
      for (int i = 0; i <n; ++i)
      {
        int x;
        cin >>x;
        a.pb(x);
      }
     
     
      map<int,int>m;
      std::vector<int> b;
      for (int i = 0; i <n; ++i)
      {
        int x;
        cin >>x;
        b.pb(x);
        m[x]++;
      }
     
      sort(b.begin(),b.end());
      vector<int>min_ans;
      for(int i=0;i<n;i++)
      {
        int x = a[i];
        int y = *lower_bound(b.begin(),b.end(),x);
     
        min_ans.pb(y-x);
      }
     
      vector<int>max_ans;
      set<int>s;
      for(int i=0;i<n;i++)
      {
        s.insert(b[i]);
      }
      for(int i=n-1;i>=0;i--)
      {
        
         auto it = s.end();
         it--;
         int x = *it;
         int y = *lower_bound(s.begin(),s.end(),a[i]);
         max_ans.push_back(x-a[i]);
         m[y]--;
         if(m[y]==0){
         s.erase(y);}
     
     
      }
     
      reverse(max_ans.begin(),max_ans.end());
        
      for(int i=0;i<n;i++)
      {
        cout<<min_ans[i]<<" ";
      }
      cout<<endl;
      for(int i=0;i<n;i++)
      {
        
       cout<<max_ans[i]<<" ";
     
      }
      cout<<endl;
     
      }
       
      return 0;
    }