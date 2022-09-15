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
    int t,i,n,flag,j;
    cin >> t;
     
    vector <long long int>s;
    vector<long long int>::iterator it;
    for(i=2;i*i<=2000000000;i++){
        flag=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            s.push_back(i);
        }
    }

    vector<int>v;
    for(it=s.begin();it!=s.end();it++){ 
        flag=0;
        for(i=sqrt(floor(*it));i>=0;i--){
            if((*it)&(1<<i)){
                flag=1;
                v.push_back(1);
            }
            else if(flag==1){
                v.push_back(0);
            }
        }
    }
    while(t--){
        cin >> n;
        long long int count=0;
        for(i=0;i<n;i++){
            if(v[i]==1){
                count++;
            }
        }
        cout << count << endl;

    }
}
