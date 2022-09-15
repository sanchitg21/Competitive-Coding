
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
// #define gcd(a,b) __gcd(a,b)
// #define lcm(a,b) a*b/__gcd(a,b)
// using namespace std;
// const int mod=1e9+7;
// const int M=5e5+5;
// const int INF = 2e9;
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,a,flag,count;
// 	cin >> t;
// 	while(t--){
// 		cin >> n;
//         vll v(n);
//         for(i=0;i<n;i++){
//             cin >> v[i];
//         }
//         lli low,high=n-1;
//         lli ff=0,ss=0;
//         flag=0;
//         for(high=n-1;high>=1;high--){
//             ss=(ss^v[high]);
//             ff=0;
//             count=0;
//             for(low=0;low<high;low++){
//                 ff=(ff^v[low]);
//                 if(ff==ss){
//                     count++;
//                     ff=0;
//                 }
//             }
//             if(ff==ss || (ff==0 && count>0)){
//                 cout << "YES" << endl;
//                 flag=1;
//                 break;
//             }
//         }   
//         if(flag==0){ 
//             cout << "NO" << endl;
//         }
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
	lli n,m,t,i,j,k,a,b,c;
	cin >> t;
	while(t--){
		cin >> n;
		vll v(n);
		lli x=0;
		for(i=0;i<n;i++){
			cin >> v[i];
			x=x^v[i];
		}
		a=0;
		j=0;
		b=0;
		lli flag=0;
        for(i=0;i<n;i++){
			a=a^v[j];
			j++;
			b=x^a;
			if(b==a){
				flag=1;
			}
			else if(b==0){
				k=j;
				c=0;
				while(k<n && c!=a){
					c=c^v[k];
					k++;
				}
				if(c==a && (x^c^a)==c){
					flag=1;
				}
			}
		}
		if(flag){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
    }
}