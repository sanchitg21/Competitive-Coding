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
// using namespace std;
// const int mod=1e9+7;
// const int M=5e5+5;
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
//     lli t,n,i,sum,k,low,high,input,mid,count;
//     cin >> n >> t >> k; //length of array
//     low=1;
//     high=n;
//     if(high==low){
//         if(k==1){
//             cout << "! " << low << endl;
//             return 0;
//         }
//     }
    
//     if(high-low==1){
//         cout << "? " << 1 << " " << low << endl;
//         cin >> input;
//         count= low-input;
//         if(count==k){
//             cout << "! " << low << endl;
//         }
//         else{
//             cout << "! " << high << endl;
//         }
//         return 0;
//     }
//     for(i=1;i<=20;i++){
//         mid=(low+high)/2;
//         cout << "? " << 1 << " " << mid << endl;
//         cin >> input;
//         count= (mid) - input;
//         if(count<k){
//             low=mid;
//         }
//         else{
//             high=mid;
//         }
//         if(high-low==1){
//             cout << "? " << 1 << " " << low << endl;
//             cin >> input;
//             count= low-input;
//             if(count==k){
//                 cout << "! " << low << endl;
//             }
//             else{
//                 cout << "! " << high << endl;
//             }
//             break;
//         }
//     }
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
const int mod=1e9+7;
const int M=1e5+1;
const int INF = 2e9;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> n >> t >> k;
    lli low=1,high=n,mid,input;
    while(low<high){
        mid=(low+high)/2;
        cout << "? " << low << " " << mid << endl;
        cin >>  input;
        if((mid-low+1)-input>=k){
            high=mid;
        }
        else{
            k=k-(mid-low+1)+input;
            low=mid+1;
        }
    }
    cout << "! " << high << endl;
}
