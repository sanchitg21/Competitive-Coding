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

bool sortbysec(const pair<lli,lli> &a,const pair<lli,lli> &b)
{
    if(a.first!=b.first){
        return (a.first < b.first);
    }
    else{
        return (a.second < b.second);
    }   
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,t,i,j,k;
	cin >> t;
	while(t--){
		cin >> n;
        vpl v(n);
        for(i=0;i<n;i++){
            cin >> v[i].first >> v[i].second;
        }
        vpl a(n);
        for(i=0;i<n;i++){
            a[i].first=v[i].first;
            a[i].first=v[i].second;
        }
        sort(a.begin(),a.end(),sortbysec);
        vpl ans(n);
        for(i=0;i<n;i++){
            ans[i].first= v[i].first;
            ans[i].second= i;
        }
        // for(i=0;i<n;i++){
        //     cout << ans[i].first << " ";
        // }
        // cout << endl;
        sa(ans);
        
        for(i=0;i<n;i++){
            ans[i].first=-1;
        }
        sa(v);
        lli low=0,high=1;
        for(low=0;low<n;low++){
            while(high<n){ 
                if(((v[low].first < v[high].first) && (v[low].second < v[high].second)) || ((v[low].first < v[high].second) && (v[low].second < v[high].first))){
                    ans[high].first= ans[low].second+1;
                    high++;
                }  
                else if((v[low].first == v[high].first)){
                    high++;
                }
                else if((v[low].second >= v[high].second)){
                    high++;
                }
                else{
                    break;
                } 
            }
        }
        for(i=0;i<n;i++){
            swap(v[i].first,v[i].second);
        }
        // sa(v);
        
        // low=0,high=1;
        // for(low=0;low<n;low++){
        //     while(high<n){ 
        //         if(((v[low].first < v[high].first) && (v[low].second < v[high].second)) || ((v[low].first < v[high].second) && (v[low].second < v[high].first))){
        //             ans[high].first= ans[low].second+1;
        //             high++;
        //         }  
        //         else if((v[low].first == v[high].first)){
        //             high++;
        //         }
        //         else if((v[low].second >= v[high].second)){
        //             high++;
        //         }
        //         else{
        //             break;
        //         } 
        //     }
        // }

        for(i=0;i<n;i++){
            swap(ans[i].first,ans[i].second);
        }
        sa(ans);
        for(i=0;i<n;i++){
            cout << ans[i].second << " ";
        }
        cout << endl;
	}
}
