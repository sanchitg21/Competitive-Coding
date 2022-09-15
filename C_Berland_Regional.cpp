// #define pb push_back
// #define lli long long int
// #define sa(v) sort(v.begin(),v.end())
// #define sd(v) sort(v.begin(),v.end(),greater<int>())
// #define vpl vector<pair<lli,lli>>
// #define vp vector<pair<int,int>>
// #define vll vector<lli>
// #include<iostream>
// #include<cmath>
// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     lli t;
//     cin >> t;

//     while (t--)
//     {
//         long long n, i, p, j, k;
//         p = 0;
//         cin >> n;
//         vector<vll> a(n);
//         vpl b(n);
//         vll c(n, 0);

//         for(i=0;i<n;i++){
//             cin >> b[i].first;
            
//         }
//         for(i=0;i<n;i++){
//             cin >> b[i].second;
//         }
//         for(i=0;i<n;i++){
//             a[b[i].first-1].pb(b[i].second);
//         }
//         for(i=0;i<n;i++){ 
//             sort(a[i].begin(),a[i].end(),greater <int>());
//         }
//         vll sum;
//         for(i=0;i<n;i++){
//             p=0;
//             for(j=0;j<a[i].size();j++){
//                 p= p + a[i][j];
//                 sum.pb(p);
//             }
//             for(k=1;k<=a[i].size();k++){
//                 c[k-1]=c[k-1]+ sum[a[i].size()-1-a[i].size()%k];
//             }
//             sum.clear();
//         }
//         for(i=0;i<c.size();i++){
//             cout << c[i] << " ";
//         }
//         cout << endl;   
//     }
// }

// //CODE BY Sanchit Gupta
// #define pb push_back
// #define db double
// #define lli long long int
// #define sa(v) sort(v.begin(),v.end())
// #define sd(v) sort(v.begin(),v.end(),greater<lli>())
// #define vpl vector<pair<lli,lli>>
// #define vll vector<lli>
// #define mps map<lli,lli>
// #define mpst map<string,lli>
// #define mpc map<char,lli>
// #define ff first
// #define ss second
// #include<iostream>
// #include<cmath>
// #include<bits/stdc++.h>
// #include<algorithm>
// #define endl '\n'
// using namespace std;
// const int mod=1e9+7;
// const int M=5e5+5;

// bool sortbychoice(const pair<int,int> &a,const pair<int,int> &b){
//     if(a.first !=b.first){ 
//         return a.first<b.first;
//     }
//     else{
//         return a.second>b.second;
//     }   
// }

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,index,sum;
// 	cin >> t;
// 	while(t--){
// 		cin >> n;
//         vpl v(n);
//         mps mp;
//         for(i=0;i<n;i++){
//             cin >> v[i].ff;
//             mp[v[i].ff]++;
//         }
//         for(i=0;i<n;i++){
//             cin >> v[i].ss;
//         }
    
//         sort(v.begin(),v.end(),sortbychoice);
//         for(i=0;i+1<n;i++){
//             if(v[i].ff == v[i+1].ff){
//                 v[i+1].ss += v[i].ss;
//             }
//         }
//         vll s(n);
//         for(i=0;i<n;i++){
//             s[i]=v[i].ff;
//         }
//         vll ans(n,0);
//         for(auto it=mp.begin();it!=mp.end();++it){
//             index=lower_bound(s.begin(),s.end(),it->first)-s.begin();
//             for(k=1;k<=it->second;k++){
//                 ans[k-1]+= v[index-1+((it->second)/k)*k].ss;
//             }    
//         }
//         for(i=0;i<n;i++){
//             cout << ans[i] << " " ;
//         }
//         cout << endl;
// 	}
// }


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
const int M=1e5+1;
const int INF = 2e9;

bool cmp(const pair<lli,lli> &a,const pair<lli,lli> &b){
    if(a.ff == b.ff){
        return b<a;
    }
    return a<b;
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n;
        vpl v(n);
        mps mp;
        for(i=0;i<n;i++){
            cin >> v[i].ff;
            mp[v[i].ff]++;
        }
        for(i=0;i<n;i++){
            cin >> v[i].ss;
        }
        sort(v.begin(),v.end(),cmp);
        
        //prefix sum;
        vll a(n+1,0);
        for(i=1;i<=n;i++){
            a[i]=a[i-1]+v[i-1].ss;
        }
        vll b(n+1,0);
        for(i=1;i<=n;i++){
            b[i]=v[i-1].ff;
        }
        vll ans(n+1,0);
        for(auto it=mp.begin();it!=mp.end();++it){
            for(k=1;k<=n;k++){
                if(it->ss < k){
                    break;
                }
                lli num= ((it->ss)/k)*k;
                lli index= lower_bound(b.begin(),b.end(),it->ff)-b.begin();
                ans[k]+= a[index+num-1]-a[index-1];
            }
        }
        for(i=1;i<=n;i++){
            cout << ans[i] << " ";
        }
        cout << endl;
	}
}
