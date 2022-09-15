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

bool sortbysecdesc(const pair<long long int,long long int> &a, const pair<long long int,long long int> &b)
{
    return a.second>b.second;
}
 
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    lli n,t,i,j,a,b;
    cin >> n;
    vpl v(n);
    for(i=0;i<n;i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(),v.end(),sortbysecdesc);
    lli low=0,high=n-1,count=0,sum=0;
    while(low<=high){
        if(v[high].second<=count){
            count=count+v[high].first;
            sum=sum+v[high].first;
            v[high].first=0;
            if(v[high].first==0){
                high--;
            }
            continue;
        }
        if(v[high].second>count){
            if(count+v[low].first<=v[high].second){
                count=count+v[low].first;
                sum=sum+ 2*v[low].first;
                v[low].first=0;
            }
            else{ 
                v[low].first-=(v[high].second-count);
                sum+=2*(v[high].second-count);
                count=count+(v[high].second-count);   
            }
            if(v[low].first==0){
                low++;
            }
        }
    }   
    cout << sum << endl;
}
