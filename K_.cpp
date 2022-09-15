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
    lli a,b,c,d,e,f,k,g,sum=0;
    cin >> a >> b >> c >> d >> e >> f;
    int l1=a;
    int b1=b;
    int l2=c;
    int b2=d;
    int l3=e;
    int b3=f;
    if(l1<b1){
        swap(l1,b1);
    }
    if(l2<b2){
        swap(l2,b2);
    }
    if(l3<b3){
        swap(l3,b3);
    }
    if(l1==l2 && l2==l3 && b1+b2+b3==l1){
        cout << "YES" << endl;
        return 0;
    }
    vp v;
    v.pb({a,1});
    v.pb({b,2});
    v.pb({c,3});
    v.pb({d,4});
    v.pb({e,5});
    v.pb({f,6});
    vp s;
    for(int i=0;i<v.size();i=i+2){
        sum=sum+ v[i].first*v[i+1].first;
    }
    s=v;
    sa(v);
    if(v[5].second%2==0){
        k=v[5].second-1;
    }
    else{
        k=v[5].second+1;
    }
    int i,j;
    for(i=0;i<s.size();i++){ 
        if(k==s[i].second){ 
            s.erase(s.begin()+i,s.begin()+i+1);
            break;
        }
    }
    if(i%2==0){
        s.erase(s.begin()+i,s.begin()+i+1);
    }
    else{
        s.erase(s.begin()+i-1,s.begin()+i);
    }
    if(s[0].first +s[2].first==v[5].first){
        s.erase(s.begin(),s.begin()+1);
        s.erase(s.begin()+1,s.begin()+2);
    }
    else if(s[0].first + s[3].first==v[5].first){
        s.erase(s.begin(),s.begin()+1);
        s.erase(s.begin()+2,s.begin()+3);
    }
    else if(s[1].first + s[2].first == v[5].first){
        s.erase(s.begin()+1,s.begin()+3);
    }
    else if(s[1].first + s[3].first == v[5].first){
        s.erase(s.begin()+1,s.begin()+2);
        s.erase(s.begin()+2,s.begin()+3);
    }
    lli ans;    
    if(s[0].first == s[1].first){
        ans=sqrt(sum);
        if(ans== sqrt(sum)){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}
