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
	lli t,n,i,low,high,mid,x,y,z;
	cin >> n;
    low=1;
    high=n;
    cout << "?" << " " << low << " " << high << endl; 
    cin >> x;
    if(n==2){
        if(x==1){
            cout << "!" << " " << 2 << endl;
        }
        else{
            cout << "!" << " " << 1 << endl;
        }
        return 0;
    }
    cout << "?" << " " << x << " " << high << endl; 
    cin >> y;
    if(x==y){
        low=x;
        while(true){ 
            mid=(low+high)/2;
            cout << "?" << " " << x << " " << mid << endl;
            cin >> z;
            if(z==x){
                high=mid;
            }   
            else{
                low=mid;
            }
            if(high-low+1==2){
                cout << "?" << " " << x << " " << low << endl;
                cin >> z;
                if(z==x){   
                    cout << "!" << " " << low << endl;
                }   
                else{
                    cout << "!" << " " << high << endl;
                }
                break;
            }
        }
    }   
    else{
        high=x;
        while(true){ 
            mid=(low+high)/2;
            cout << "?" << " " << mid << " " << x << endl;
            cin >> z;
            if(z!=x){
                high=mid;
            }
            else{
                low=mid;
            }
            if(high-low+1==2){
                cout << "?" << " " << high << " " << x << endl;
                cin >> z;
                if(z!=x){   
                    cout << "!" << " " << low << endl;
                }
                else{
                    cout << "!" << " " << high << endl;
                }   
                break;
            }
        }
    }
}