#include<iostream>
#include<cmath>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,i,j,x,y;
    cin >> t;
    for(int k=1;k<=t;k++){ 
        cin >> x;
        cin >> y;
        if(y<(x-1) || y>((x*(x+1))/2)-1){ 
            cout << "Case #" << k <<": "<< "IMPOSSIBLE" << endl;
            continue;
        }
        vector<int>v;
        for(i=1;i<=x;i++){
            v.push_back(i);
        }
        long long int count=y-x+1;
        if(count<=x-1){
            cout << "Case #" << k <<":";
            reverse(v.begin(),v.begin()+count+1);
            for(i=0;i<v.size();i++){
                cout << " "<<v[i];
            }
            cout << endl;
            continue;  
        }
        else{
            count=y-2*(x-1);
        }
        int p=x-2;
        vector<int> w;
        for(i=0;i<x-2;i++){
            if(p>=count){ 
                w.push_back(count);
                break;
            }
            else{
                w.push_back(p);
                count=count-p;
                p--;
            }
        }
        int m=x-2;
        w.push_back(0);
        for(i=0;i<x-2;i++){ 
            if(w[i]==0) {
                m=i;
                break;
            }
        }
        for(i=0;i<m;i++){
            reverse(v.begin()+1,v.begin()+w[i]+1);
            if(v[i]==x-2-i){
                v.insert(v.begin()+x-i-1,v[0]);
                v.erase(v.begin());
            }
        }
        cout << "Case #" << k <<":";
        for(i=0;i<v.size();i++){
            cout << " "<< v[i];
        }
        cout << endl;
    }
}
