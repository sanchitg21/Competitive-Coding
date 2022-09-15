// //CODE BY CONFUZED CODER
// #define pb push_back
// #define lli long long int
// #define sa(v) sort(v.begin(),v.end())
// #define sd(v) sort(v.begin(),v.end(),greater<int>())
// #define vpl vector<pair<lli,lli>>
// #define vll vector<lli>
// #define mps map<lli,lli>
// #define mpst map<string,lli>
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
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,t,i,j,m,flag=0,index;
//     cin >> t;
//     while(t--){
//         cin >> n >> m;
//         vll a(n);
//         vll b(n);
//         vpl c(m);
//         vll d;
//         vll e;
//         flag=0;
//         for(i=0;i<n;i++){
//             cin >> a[i];
//         }
        
//         for(i=0;i<n;i++){
//             cin >> b[i];
//         }
        
//         for(i=0;i<m;i++){
//             cin >> c[i].first;
//             c[i].second=i+1;
//         }
//         lli ex=c[m-1].first;
//         for(i=0;i<n;i++){
//             if(a[i]!=b[i]){
//                 d.pb(b[i]);
//                 e.pb(i+1);
//             }
//         }
        
//         lli o=d.size();
//         vpl f(o);
//         for(i=0;i<d.size();i++){
//             f[i].first=d[i];
//             f[i].second=e[i];
//         }
//         sa(c);
//         if(d.size()==0){
//             sa(b);
//             j=m-1;
//             i=n-1;
//             while(j>=0 && i>=0){
//                 if(b[i]==c[j].first){
//                     index= c[j].second;
//                     flag=1;
//                     break;
//                 }
//                 else if(b[i]>c[j].first){
//                     i--;
//                 }
//                 else if(b[i]<c[j].first){
//                     j--;
//                 }
//             }
//             if(flag==0){
//                 cout << "NO" << endl;
//                 flag=2;
//             }
//         }
//         if(flag==2){
//             continue;
//         }
//         if(flag){
//             cout << "YES" << endl;
//             for(i=0;i<m;i++){
//                 cout << index << " ";
//             }
//             cout << endl;
//             continue;
//         }
//         sa(f);
//         vpl ans(m);
//         for(i=0;i<m;i++){
//             ans[i].first= c[i].second; 
//         }
        
//         // 2 pointer technique
//         lli low=0,high=0;
//         for(low=0;low<m;low++){  
//             while(high<o){  
//                 if(c[low].first==f[high].first){
//                     ans[low].second= f[high].second; 
//                     high++;
//                     break;
//                 }
//                 else if(c[low].first>f[high].first){
//                     flag=1;
//                     break;
//                 }
//                 else if(c[low].first<f[high].first){
//                     break;
//                 }
//             }
//             if(flag==1){
//                 break;
//             }
//         }
//         if(flag){
//             cout << "NO" << endl;
//             continue;
//         }
//         sa(ans);
//         if(ans[m-1].second==0){
//             flag=0;
//             for(i=0;i<o;i++){
//                 if(ex==f[i].first){
//                     cout << "NO" << endl;
//                     flag=1;
//                 }
//             }
//             if(flag){
//                 continue;
//             }
//             else{
//                 for(i=0;i<m;i++){
//             if(ans[i].second==0){
//                 ans[i].second=ex;
//             }
//         }
//             }
//         }
//         for(i=0;i<m;i++){
//             if(ans[i].second==0){
//                 ans[i].second=ans[m-1].second;
//             }
//         }
//         cout << "YES" << endl;
//         for(i=0;i<m;i++){
//             cout << ans[i].second << " ";
//         }
//         cout << endl;
//     }
// }
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
	lli n,t,i,j,k,m,flag,index;
	cin >> t;
	while(t--){
        cin >> n >> m;
        vpl a(n);
        mps x;
        for(i=0;i<n;i++){
            cin >> a[i].first;
            x[a[i].first]++;
        }
        for(i=0;i<n;i++){
            cin >> a[i].second;
        }
        vll b(m);  // colours we have
        for(i=0;i<m;i++){
            cin >> b[i];
        }        
        vll v;   // colours required
        for(i=0;i<n;i++){
            if(a[i].first!=a[i].second){
                v.pb(a[i].second);  
            }
        }
        mps mp;  // colours we have
        for(i=0;i<b.size();i++){
            mp[b[i]]++;
        }
        mps pm;  // colours required
        for(i=0;i<v.size();i++){
            pm[v[i]]++;
        }
        flag=0;
        for(auto it=pm.begin();it!=pm.end();++it){
            if(mp[it->first]>=it->second){

            }
            else{
                flag=1;
                break;
            }
        }
        
        if(pm[b[m-1]]==0 && x[b[m-1]]==0){
            flag=1;
        }
        if(flag==1){
            cout << "NO" << endl;
            continue;
        }
        else{
            cout << "YES" << endl;
        }
        for(i=0;i<n;i++){
            if(a[i].second==b[m-1]){
                index=i;
            }
        }
        vpl ans(m);
        for(i=0;i<m;i++){
            ans[i].first=b[i];
            ans[i].second=0;
        }
        for(i=0;i<m;i++){
            if(pm[b[i]]==0){
                ans[i].second=index+1; 
            }
        }
        vll s(n);
        lli low=0,high=0;
        // 2 pointers
        vpl p;
        for(i=0;i<n;i++){
           if(a[i].first==a[i].second){
               p.pb({a[i].first,i+1});
           } 
        }
        sa(p);
        for(i=0;i<m;i++){
            cout << ans[i].first << " ";
        }
        cout << endl;
	}
}
