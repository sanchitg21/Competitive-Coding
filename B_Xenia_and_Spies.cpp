#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<int>())
#define vpl vector<pair<lli,lli>>
#define vp vector<pair<int,int>>
#define vll vector<lli>
#define vv vector<vll> 
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli i,j,n,m,s,f,t,l,r,flag=0,steps=1;
    vv v;
    cin >> n >> m >> s >> f;
    for(i=0;i<m;i++){ 
        cin >> t >> l >> r;
        v.pb({t,l,r});
    }
    for(i=0;i<m;i++){
        if(s==f){
            break;
        }
        if(v[i][0]==steps){
            steps++;
            if(s>=v[i][1] && s<=v[i][2]){ 
                flag=1;
            }
            if(((flag==1 || v[i][1]==s+1) && s<f) || ((flag==1 || v[i][2]+1==s) && s>f)){
                flag=0;
                cout << "X";   
            }
            else{
                (s<f)?(cout << "R",s++):(cout << "L",s--);  
            }
        }
        else{
            (s<f)?(cout << "R", s++):(cout << "L",s--);
            steps++;
            if(v[i][0]>=steps){
                i--;
            }
        }
    }
    while(f!=s){ 
        (f>s)?(cout << "R",s++):(cout << "L",s--);
    }
}
