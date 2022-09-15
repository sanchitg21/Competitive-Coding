#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    map<int,int>mp;
    int flag=0;
    long long int n=s.length();
    mp[n-1]=0;
    for(int i=n-2;i>=0;i--){
        if(s[i]<s[i+1]){
            int mx=0;
            for(int j=i+1;j<n;j++){
                if(s[i]<s[j]){
                    mx=max(mx,mp[j]);
                }
            }
            mp[i]=mx+1;
        }
        else if(s[i]==s[i+1]){
            mp[i]=mp[i+1];
        }
        else{
            int mx=0;
            for(int j=i+1;j<n;j++){
                if(s[i]<s[j]){
                    mx=max(mx,mp[j]);
                    flag=1;
                }
            }
            if(flag==0){
                mp[i]=0;
            }
            else{
                flag=0;
                mp[i]=mx+1;
            }
        }
    }
    int mx=0;
    for(auto it=mp.begin();it!=mp.end();++it){
        mx=max(mx,it->second);
    }
    cout << 26-(mx+1) << endl;
}