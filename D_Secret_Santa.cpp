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
	lli n,t,i,j,count,index;
    cin >> t;
    while(t--){
        count=0;
        cin >> n;
        vpl v(n);
        vll numbers(n+1);
        mps mp;
        for(i=0;i<n;i++){
            cin >> v[i].first;
            mp[v[i].first]++;
            v[i].second=0;
        }
        for(i=1;i<=n;i++){
            numbers[i]=-1;
        }
        for(i=0;i<n;i++){
            if(numbers[v[i].first]==-1 && v[i].first!=i+1){
                numbers[v[i].first]=i;
                v[i].second=v[i].first;
            } 
        }
        for(i=0;i<n;i++){
            if(v[i].second==0){
                count++;
            }
        }
        lli num;
        lli temp;
        if(count==1){
            for(i=1;i<=n;i++){
                if(numbers[i]==-1){
                    num=i;
                }
            }
            for(i=0;i<n;i++){
                if(i+1==num && v[i].second==0){ 
                if(mp[v[i].first]==1){
                    if(i==n-1){
                        temp=v[n-2].second;
                        v[n-2].second=num;
                        v[n-1].second=temp;
                    }
                    else{
                        temp=v[i+1].second;
                        v[i+1].second=num;
                        v[i].second=temp;
                    }
                }
                else if(mp[v[i].first]>1){
                    temp= v[numbers[v[i].first]].second;
                    v[numbers[v[i].first]].second=num;
                    v[i].second=temp;
                }
                }
                else if(v[i].second==0){
                        v[i].second=num;
                }
            }
        }
        else if(count>1){
            j=0;
            vll hi;
            for(i=1;i<=n;i++){
                if(numbers[i]==-1){
                    hi.pb(i);
                }
            }
            sd(hi);
            for(i=0;i<n;i++){
                if(v[i].second==0){
                    if(j+1!=hi.size() && hi[j]==i+1){
                        swap(hi[j],hi[j+1]);
                        v[i].second=hi[j];
                        j++;
                    }
                    else if(j+1==hi.size() && hi[j]==i+1){
                        v[i].second=hi[j];
                        swap(v[index].second,v[i].second);
                        break;
                    }
                    else{
                        v[i].second=hi[j];
                        j++;
                    }
                    count--;
                    if(count==1){
                        index=i;
                    }
                }
            }
        }
        lli total=0;
        for(i=0;i<n;i++){
            if(v[i].second==v[i].first){
                total++;
            }
        }
        cout << total << endl;
        for(i=0;i<n;i++){
            cout << v[i].second << " ";
        }
        cout << endl;
    }
}