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
lli t,n,i,x,j,y,f;
string s;
cin>>t;
while(t--)
{
    cin>>s;
    vpl v;
    n=s.size();x=0;y=0;
    for(i=0;i<n;i++)
    {
        if(s[i]=='U')
        y++;
        else if(s[i]=='D')
        y--;
        else if(s[i]=='R')
        x++;
        else
        x--;
        v.pb({x,y});
    }
    f=0;
    for(i=0;i<n;i++)
    {
        x=0;y=0;
        for(j=0;j<n;j++)
        {
            if(s[j]=='U')
            {
                y++;
                if(x==v[i].ff&&y==v[i].ss)
                y--;
            }
            else if(s[j]=='D')
            {
                y--;
                if(x==v[i].ff&&y==v[i].ss)
                y++;
            }
            else if(s[j]=='R')
            {
                x++;
                if(x==v[i].ff&&y==v[i].ss)
                x--;
            }
            else 
            {
                x--;
                if(x==v[i].ff&&y==v[i].ss)
                x++;
            }
        }
        if(x==0&&y==0)
        {
            f=1;
            cout<<v[i].ff<<" "<<v[i].ss<<endl;
            break;
        }
    }
    if(f==0)
    cout<<"0 0"<<endl;
}
}