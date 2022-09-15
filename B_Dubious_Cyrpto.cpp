// #include<bits/stdc++.h>
// #define int long long
// #define vll vector<long long>
// #define forn(i,n) for(int i=0;i<n;i++)
// #define forsn(i,s,n) for(int i=s;i<n;i++)
// #define sa(v) sort(v.begin(), v.end());
// #define sd(v) sort(v.begin(),v.end(), greater<int>())
// #define ff first
// #define ss second
// #define endl "\n"

// using namespace std;

// int32_t main(){
//     int t;
//     cin>>t;
//     while(t--){
        
//         int l,r,m;
//         cin>>l>>r>>m;
//         int a,b,c;
//         a=l;
//         int diff;
//         if(m<l){
//             diff=l-m;
//             if(diff<=r-l){
//                 cout<<a<<" "<<l<<" "<<l+diff<<endl;
//                 continue;
//             }
//         }

//         while(a<=r){
//             int d1=m%a;
//             int d2=a-d1;
//             if(d1<=r-l){
//                 cout<<a<<" "<<l+d1<<" "<<l<<endl;
//                 break;
//             }
//             else if(d2<=r-l){
//                 cout<<a<<" "<<l<<" "<<l+d2<<endl;
//                 break;
//             }
//             a++;
//         }
        
//     }
//     return 0;
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
	lli n,m,t,i,j,k,l,r,mx,mn,a,b,c;
	cin >> t;
	while(t--){
		cin >> l >> r >> m;
        mn=max((lli)1,m-(max(l,r)-min(l,r)));
        mx=m+(max(l,r)-min(l,r));

        for(i=l;i<=r;i++){
            if(ceil(mn*1.0/i)*i<=mx && ceil(mn*1.0/i)>=1){
                a=i;
                n=ceil(mn*1.0/i);
                break;
            }
        }
        lli dif= m-a*n;

        for(i=l;i<=r;i++){
            if(dif+i<=r && dif+i>=l){
                if(dif<0){ 
                    b= min(i,dif+i);
                    c= max(i,dif+i);
                }
                else{
                    b= max(i,dif+i);
                    c= min(i,dif+i);
                }
                break;
            }
        }

        cout << a << " " << b << " " << c << endl;
	}
}
