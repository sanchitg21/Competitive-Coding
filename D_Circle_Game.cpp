//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<lli>())
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
	lli n,t,i,j,steps,x,y,d,k,count,flag;
    cin >>t;
    while(t--){ 
        flag=0;
        cin >> d >> k;
        steps=d/sqrt(2);
        steps=(steps/k)*k;
        if(steps*steps + (steps+k)*(steps+k) <= d*d){
            cout << "Ashish" << endl;
        }
        else{
            cout << "Utkarsh" << endl;
        }
    }
}
//         vll mp(d+1);
//         vll pm(d+1);
//         for(i=0;i<=d;i++){
//             x= sqrt(d*d - i*i);
//             x=x/k;
//             mp[i]= x + (i/k);
//         }
//         pm=mp;
//         for(i=0;i<=d;i++){
//             mp[i]+=(lli)sqrt((d*d) - ((mp[i]- i/k)*k*(mp[i]- i/k)*k))/k - (lli)i/k;
//         }
//         // Odd steps means Ashish wins
//         // Even steps means Utkarsh wins
//         steps=1;
//         i=0;
//         count=1;
//         while(count!=mp[i]){    
//             if(count%2==1 && (mp[i]-steps)%2==1){   // Utkarsh's turn and he moves straight
//                 steps++;
//             }
//             else if(count%2==1 && (mp[i]-steps)%2==0){   // Utkarsh's turn and he takes a turn
//                 steps++;
//                 i=i+k;
//             }
//             else if(count%2==0 && (mp[i]-steps)%2==1){  // Ashish's turn and he moves straight
//                 steps++;
//             }
//             else if(count%2==0 && (mp[i]-steps)%2==0){  // Ashish's turn and he takes a turn
//                 steps++;
//                 i=i+k;
//             }
//             else if(pm[i]==count || flag==1){
//                 flag=1;
//                 i=i+k;
//                 steps++;
//                 if(mp[i]==count){
//                     break;
//                 }
//             }
//             count++;
//         }   
//         if(count%2==1){
//             cout << "Ashish" << endl;
//         }
//         else{
//             cout << "Utkarsh" << endl;
//         }
//     }
// }
