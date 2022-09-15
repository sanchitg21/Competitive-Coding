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
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli t,n,i,low,high,mid,x,y;
	cin >> n;
    low=1;
    high=n;
    if(high-low+1==2){
            cout << "?" << " " << low << " " << high << endl; 
            cin >> x;
            if(x==low){
                cout << "!" << " " << high << endl;
            }
            else{
                cout << "!" << " " << low << endl;
            }
            return 0;
    }
    while(true){
        cout << "?" << " " << low << " " << high << endl; 
        cin >> x;
        mid=(low+high)/2;
        if(x<=mid){ 
            cout << "?" << " " << low << " " << mid << endl; 
            cin >> y;
            if(x==y){
                high=mid;
            }
            else{
                low=mid;
            }
        }
        else{
            cout << "?" << " " << mid << " " << high << endl;
            cin >> y;
            if(x==y){
                low=mid;
            }
            else{
                high=mid;
            }
        }
        if(high-low+1<=2){
            cout << "?" << " " << low << " " << high << endl; 
            cin >> x;
            if(x==low){
                cout << "!" << " " << high << endl;
            }
            else{
                cout << "!" << " " << low << endl;
            }
            break;
        }
    }
}



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
    
//     int n;
//     cin>>n;

//     int l=1,r=n;
//     int pos,p,mid;

//     while(l<r-1){

//         mid=(l+r)/2;

//         cout<<"? "<<l<<" "<<r<<endl;
//         cin>>pos;
        
//         if(pos<=mid){
//             cout<<"? "<<l<<" "<<mid<<endl;
//             cin>>p;
//             if(p==pos)
//                 r=mid;
//             else
//                 l=mid+1;
//         }

//         else{
//             cout<<"? "<<mid<<" "<<r<<endl;
//             cin>>p;
//             if(p==pos)
//                 l=mid;
//             else
//                 r=mid-1;
//         }
//     }

//     if(l==r-1){
//         cout<<"? "<<l<<" "<<r<<endl;
//         cin>>pos;
//         cout<<"! "<<((pos==l)?r:l)<<endl;
//         return 0;
//     }

//     cout<<"! "<<r<<endl;

//     return 0;
// }

//CODE BY Sanchit Gupta
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
// #pragma GCC optimize("Ofast")
// #include<algorithm>
// using namespace std;
// #define gcd(a,b) __gcd(a,b)
// #define lcm(a,b) a*b/__gcd(a,b)
// const int mod=1e9+7;
// const int M=1e5+1;
// const int INF = 2e9;
// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k,a,b,c;
// 	cin >> n;
//     lli low=1,high=n,mid;
//     cout << "? " << low << " " << high << endl;
//     cin >> c; // taking second max position
//     while(low+1<high){
//         mid=(low+high)/2;
//         cout << "? " << low << " " << mid << endl;
//         cin >> a; 
//         cout << "? " << mid << " " << high << endl;
//         cin >> b; 
        
//         if(a==c){
//             high=mid;
//         }
//         else if(b==c){
//             low=mid;
//         }
//         else{
//             if(low<=c && c<=mid){
//                 low=mid;
//                 c=b;
//             }
//             else{
//                 high=mid;
//                 c=a;
//             }
//         }
//     }
//     cout << "? " << low << " " << high << endl;
//     cin >> a;
//     if(a==low){
//         cout << "! " << high << endl;
//     }
//     else{
//         cout << "! " << low << endl;
//     }
// }
