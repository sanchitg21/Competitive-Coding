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
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n >> m >> k;
        if(n%2==1 && m%2==0){
            if(2*k>=m){
                k=k-m/2;
            }
            else{
                cout << "NO" << endl;
                continue;
            }
        }
        else if(n%2==0 && m%2==1){
            k=n*m/2 -k;
            if(2*k>=n){
                k=k-n/2;
            }
            else{
                cout << "NO" << endl;
                continue;
            }
        }
        if(k%2==1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
	}
}
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
// 	lli n,t,i,j,k,m,hor,ver,p,flag;
// 	cin >> t;
// 	while(t--){
// 		cin >> n >> m >> k;
//         lli arr[n][m];
//         for(i=0;i<n;i++){
//             for(j=0;j<m;j++){
//                 arr[i][j]=0;
//             }
//         }
//         hor=k;
//         ver=n*m/2 -k;
//         p=0;

//         for(i=0;i<n;i++){
//             flag=0;
//             for(j=0;j+1<m;j=j+2){
//                 if(hor>0 && j+1<m && arr[i][j]==0 && arr[i][j+1]==0){ 
//                     arr[i][j]=1;
//                     arr[i][j+1]=1;
//                     hor--;
//                     p++;
//                     flag=1;
//                 }
//                 if((n%2==0 && p%2==1 && flag==1) || (n%2==1 && p%2==0 && flag==1)){
//                     break;
//                 }
//                 if((n%2==1 && p%2==1 && flag==1) || (n%2==0 && p%2==0 && flag==1)){
//                     i=-1;
//                     break;
//                 }   
                
//             }
//         }
        
//         for(j=0;j<m;j++){
//             for(i=0;i+1<n;i=i+2){
//                 if(ver>0 && i+1<n && arr[i][j]==0 && arr[i+1][j]==0){ 
//                     arr[i][j]=1;
//                     arr[i+1][j]=1;
//                     ver--;
//                 }
//                 else if(ver>0 && arr[i][j]==1){
//                     i--;
//                 }
//             }
//         }
//         // for(i=0;i<n;i++){
//         //     for(j=0;j<m;j++){
//         //         cout << arr[i][j] << " ";
//         //     }
//         //     cout << endl;
//         // }
        
//         if(ver>0 || hor>0){
//             cout << "NO" << endl;
//         }
//         else{
//             cout << "YES" << endl;
//         }
// 	}
// }