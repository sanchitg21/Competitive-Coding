//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vp vector<pair<int,int>>
#define vll vector<lli>
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
const int mod=1e9+7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,c,ans,n,k,i,j,sum,mx;
    cin >> t;
    while(t--){
        sum=0;
        ans=0; 
        c=0;
        cin >> n >> k;
        j=k;
        while(sum!=k){ 
            ans+=log(k+1)/log(2);
            c=log(k+1)/log(2);
            sum+= (n<<c) -1;
            if(sum==j){
                cout << ans << endl;
                break;
            }
            if(sum<j){
                ans++;
                k=k-sum;
            }
        }
    }
}
