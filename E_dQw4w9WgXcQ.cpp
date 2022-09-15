#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n" 
#define PI (3.141592653589793238)
#define inc(i,a,b) for(int i=a;i<=b;i++)
#define dec(i,b,a) for(int i=b;i>=a;i--)
#define ff first
#define ss second
#define pb push_back
const int INF = 2e9, MOD = 1e9+7;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int nod(int n)
{
int sum=0;
while (n>0)
{
sum+=1;
n/=10;
}
return sum;
}
int32_t main(){
IOS;
int a[6],b[6];
float t=0;
cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5];
cin>>b[0]>>b[1]>>b[2]>>b[3]>>b[4]>>b[5];
float  ans=0;
inc(i,0,5)
{
    inc(j,0,5)
    {
        if(a[j]>b[i])
        {
            ans=ans+1;
        }
        if(a[j]!=b[i])
        {
            t=t+1;
        }
    }
}
float anss=ans/t;
printf("%0.5f",anss);
return 0;
}
