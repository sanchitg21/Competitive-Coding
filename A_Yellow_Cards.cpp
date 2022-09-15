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
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=5e5+5;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,a,b,y,ansmin,ansmax;
	cin >> n >> m;
    cin >> a >> b;
    lli mn= (a-1)*n + (b-1)*m;
    cin >> y;
    if((y-mn)<=0){
        ansmin=0;
    }
    else{
        ansmin= min(y-mn,n+m);
    }
    if(a<=b){
        if(y-a*n>=0){ 
            ansmax= n;
            y=y-a*n;
        }
        else{
            ansmax= y/a ;
            y=y-(y/a)*a;
        }
        if(y-b*m>=0){ 
            ansmax+= m;
            y=y-b*n;
        }
        else{
            ansmax+= y/b ;
            y=y-(y/b)*b;
        }

    }
    else{
        if(y-b*m>=0){ 
            ansmax= m;
            y=y-b*m;
        }
        else{
            ansmax= y/b ;
            y=y-(y/b)*b;
        }
        if(y-a*n>=0){ 
            ansmax+= n;
            y=y-a*n;
        }
        else{
            ansmax+= y/a ;
            y=y-(y/a)*a;
        }
    }
    cout << ansmin << " " << ansmax << endl;
}
