#include<iostream>
#include<cmath>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int mod=1e9+7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,n,i,num,sum,index,a,c;
    float mean,mini;
    cin >> t;
    while(t--){
        mini=100000000;
        cin >> n;
        string s;
        cin >> s;
        vector<int>v;
        c=0;
        for(i=0;i<n;i++){
            if(s[i]=='*'){
                v.push_back(i);
            }
        }
        c=v.size();
        if(c==0){
            cout << 0 << endl;
            continue;
        }
        sum=0;
        
        a=v[(c/2)]+1;
        for(i=c/2+1;i<v.size();i++){
            sum=sum+ (v[i]-a);
            a++;
        }
        a=v[c/2]-1;
        for(i=c/2-1;i>=0;i--){
            sum=sum+ (a-v[i]);
            a--;
        }
        cout << sum << endl;
    }
}

/*      mean=0;
        for(i=0;i<v.size();i++){
            mean=mean+v[i];
        }
        mean=mean/v.size();
        for(i=0;i<v.size();i++){
            if(v[i]>=mean){ 
                mini=min(mini,v[i]-mean);
            }
            else{
                mini=min(mini,mean-v[i]);
            }
        }
        for(i=0;i<v.size();i++){
            if(mean-mini==v[i]){
                num=-mini+mean;
            }
            if(mini+mean==v[i]){
                num=mini+mean;
            }
        }
        for(i=0;i<v.size();i++){
            if(v[i]==num){
                index=i;
                break;
            }
        }
        THIS BIG COMMENT TELLS US THE MISTAKE THAT WE HAVE TO TAKE HALF AND NOT MEAN VALUE
*/
