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
    lli t,i,k,j,n,sum=0,temp;
    cin >> t;
    int flag[10]={0};
    long long int count[10]={0};
    while(t--){
        string s;
        cin >> s;
        n=s.length();
        flag[s[0]-'a']=1;
        for(i=0;i<n;i++){
            count[s[i]-'a']+=pow(10,n-i-1);
        }
    }
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(count[j]>count[i]){
                temp=count[i];
                count[i]=count[j];
                count[j]=temp;
                temp=flag[i];
                flag[i]=flag[j];
                flag[j]=temp;
            }
        }
    }
    int c=0,pro=1;
    for(i=0;i<10;i++){
        if(count[i]==0){
            break;
        }
        if(flag[i]==0 && c==0){
            c=1;
        }
        else{ 
            sum+= count[i]*pro;
            pro++;
        }
    }
    cout << sum << endl;
    return 0;
}
