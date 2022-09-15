//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
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
	lli n,t,i,j,flag=0,ind;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        flag=0;
        n=s.length();
        if(n==1){
            if(s=="a"){ 
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
            continue;
        }
        lli low=0,high=n-1;
        while(low<high){
            if(s[low]>s[high]){ 
                if(s[low]-s[low+1]!=1 && s[low]-s[high]!=1){
                    flag=1;
                    break;
                }
                if(s[low]-s[low+1]==1){
                    low++;                
                }
                else if(s[low]-s[high]==1){
                    low++;
                }
            }
            else if(s[low]<s[high]){ 
                if(s[high]-s[high-1]!=1 && s[high]-s[low]!=1){
                    flag=1;
                    break;
                }
                if(s[high]-s[high-1]==1){
                    high--;
                }
                else if(s[high]-s[low]==1){
                    high--;
                }   
            }
            else{
                flag=1;
                break;
            }
        }
        if(flag){
            cout << "NO" << endl;
            continue;
        }
        else if(flag==0){
            sa(s);
            for(i=1;i<n;i++){
                if(s[i]-s[i-1]!=1){
                    flag=1;
                    break;
                }
            }
            if(flag==0 && s[0]=='a'){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
}