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
    lli t,i,n,integer,a,b,flag;
    cin >> t;
    while(t--){
        cin >> n;
        string s;
        cin >> s;
        mpc mp;
        flag=0;
        for(i=0;i<n;i++){
            mp[s[i]]++;
        }
        if(mp['T']!=2*mp['M']){
            cout << "NO" << endl;
            continue;
        }
        // a=0;
        // lli low=0,high=n-1;
        // while(low<=high){
        //     if(high==low && s[low]=='T'){
        //         break;
        //     }
        //     if(s[low]=='T' && s[high]=='T'){
        //         a++;
        //         low++;
        //         high--;
        //         continue;
        //     }
        //     if(s[low]=='M'){
        //         if(a>0){
        //             a--;
        //             if(low==high){
        //                 break;
        //             }
        //             low++;
        //         }
        //         else{
        //             flag=1;
        //             break;
        //         }
        //     }
        //     if(s[high]=='M'){
        //         if(a>0){
        //             a--;
        //             if(low==high){
        //                 break;
        //             }
        //             high--;
        //         }
        //         else{
        //             flag=1;
        //             break;
        //         }
        //     }
        // }
        // if(flag==1){
        //     cout << "NO" << endl;
        // }
        // else if(flag==0 && a!=0){
        //     cout << "NO" << endl;
        // }
        // else if(flag==0 && a==0){
        //     cout << "YES" << endl;
        // }
        lli count=0;
        a=0;
        flag=0;
        for(i=0;i<s.size();i++){
            if(s[i]=='T'){
                count++;
                s.erase(s.begin()+i,s.begin()+i+1);
                i--;
                if(count==mp['M']){
                    break;
                }
            }
            else if(s[i]=='M'){
                a++;
                if(a>count){
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1){
            cout << "NO" << endl;
            continue;
        }

        count=0;
        for(i=0;i<s.size();i++){
            if(s[i]=='M'){
                count++;
            }
            if(s[i]=='T' && count>0){
                count--;
                s.erase(s.begin()+i,s.begin()+i+1);
                i--;
            }
        }
        if(count!=0){
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }
}