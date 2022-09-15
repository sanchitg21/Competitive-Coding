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
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    lli n,t,h,m,a,b,c,d,i,j,k,l,o,flag=0;
    cin >> t;
    while(t--){
        flag=0;
        cin >> h >> m;
        string s;
        cin >> s;
        a= s[0]-'0';
        b= s[1]-'0';
        c= s[3]-'0';
        d= s[4]-'0';
        vpl v(4);
        v[0].ff=a;
        v[1].ff=b;
        v[2].ff=c;
        v[3].ff=d;
        v[3].ss=(h-1)/10; 
        v[1].ss=(m-1)/10; 
        v[2].ss=(m-1)/10;
        v[0].ss=(h-1)/10;
        if(v[0].ss<5){
            v[0].ss=min((lli)1,v[0].ss);
        }
        if(v[1].ss<5){
            v[1].ss=min((lli)1,v[1].ss);
        }
        if(v[2].ss<5){
            v[2].ss=min((lli)1,v[2].ss);
        }
        if(v[3].ss<5){
            v[3].ss=min((lli)1,v[3].ss);
        }
        lli arr[]={0,1,2,5,8};
        for(i=v[0].ff;i<=v[0].ss;i++){
            for(j=v[1].ff;j<=v[1].ss;j++){
                for(k=v[2].ff;k<=v[2].ss;k++){
                    for(l=v[3].ff;l<=v[3].ss;l++){
                        for(o=0;o<5;o++){
                            if(arr[o]==i && flag==0){
                                flag=1;
                            }
                        }
                        for(o=0;o<5;o++){
                            if(arr[o]==j && flag==1){
                                flag=2;
                            }
                        }
                        for(o=0;o<5;o++){
                            if(arr[o]==k && flag==2){
                                flag=3;
                            }
                        }
                        for(o=0;o<5;o++){
                            if(arr[o]==l && flag==3){
                                flag=4;
                            }
                        }
                        if(flag==4){
                            
                        }
                        if(flag!=4){
                            flag=0;
                        }
                        else{
                            break;
                        }
                    }
                    if(flag==4){
                        break;
                    }
                }
                if(flag==4){
                    break;
                }
            }
            if(flag==4){
                break;
            }
        }
        if(flag==4){
            cout << i << j << ":" << k << l << endl;
        }
        else{
            cout << "00:00" << endl;
        }
    }
}
