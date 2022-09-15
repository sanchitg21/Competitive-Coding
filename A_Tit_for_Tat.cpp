#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define INF 1000000000000000000
#define llu unsigned long long int
#define pb push_back
#define ff first
#define vl vector<pair<lli,lli>>
#define ss second
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
lli t,n,i,k,start,end;
cin>>t;
while(t--)
{
    cin>>n>>k;
    lli a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    start=0;end=n-1;
    while(k--)
    {
        while(a[start]==0&&start<n)
        start++;
        if(start==n-1||start==n)
        break;
        a[start]--;
        a[end]++;
    }
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}
}