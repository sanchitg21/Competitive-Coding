// //CODE BY Sanchit Gupta
// #define pb push_back
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
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,one,zero;
// 	cin >> t;
// 	while(t--){
// 		cin >> n;
//         string s;
//         cin >> s;
//         if(!(s[0]=='1' && s[n-1]=='1')){
//             cout << "NO" << endl;
//             continue;
//         }
//         one=zero=0;
//         for(i=0;i<n;i++){
//             if(s[i]=='0'){
//                 zero++;
//             }
//             else{
//                 one++;
//             }
//         }
//         if(!(zero%2==0 && one%2==0)){
//             cout << "NO" << endl;
//             continue;
//         }
//         string a1,a2;
//         a1.resize(n);
//         a2.resize(n);
//         lli count=0;
//         for(i=0;i<n;i++){
//             if(count<one/2){
//                 if(s[i]=='1'){
//                     a1[i]='(';
//                     a2[i]='(';
//                     count++;
//                 }
//             }
//             else{
//                 if(s[i]=='1'){
//                     a1[i]=')';
//                     a2[i]=')';
//                     count++;
//                 }
//             }
//         }
//         count=0;
//         for(i=0;i<n;i++){
//             if(count%2==0){
//                 if(s[i]=='0'){
//                     a1[i]='(';
//                     a2[i]=')';
//                     count++;
//                 }
//             }
//             else{
//                 if(s[i]=='0'){
//                     a1[i]=')';
//                     a2[i]='(';
//                     count++;
//                 }
//             }
//         }
//         cout << "YES" << endl;
//         cout << a1 << endl;
//         cout << a2 << endl;
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
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n;
        string s,a,b;
        cin >> s;
        mpc mp;
        if(!(s[0]-'0') || !(s[n-1]-'0')){
            cout << "NO" << endl;
            continue;
        }
        for(i=0;i<n;i++){
            mp[s[i]]++;
        }
        if(mp['0']%2==1){
            cout << "NO" << endl;
            continue;
        }
        a.resize(n);
        b.resize(n);
        a[0]='(';
        b[0]='(';
        a[n-1]=')';
        b[n-1]=')';
        lli step1=0,step2=1;
        for(i=1;i<n;i++){
            if(step1%2==0 && s[i]=='0'){
                a[i]='(';
                b[i]=')';
                step1++;
                continue;
            }
            if(step1%2==1 && s[i]=='0'){
                a[i]=')';
                b[i]='(';
                step1++;
                continue;
            }
            if(step2<=mp['1']/2-1 && s[i]=='1'){
                a[i]='(';
                b[i]='(';
                step2++;
                continue;
            }
            a[i]=')';
            b[i]=')';
        }
        cout << "YES" << endl;
        cout << a << endl;
        cout << b << endl;
	}
}
