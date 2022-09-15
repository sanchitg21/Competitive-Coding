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
    long long int t,i,n,j,q,sum,min;
    cin >> t;
    for(int k=1;k<=t;k++){
        cin >> n;
        sum=0;
        vector <int > v;
        for(i=0;i<n;i++){ 
            cin >> q;
            v.push_back(q);
        }
        
        for(i=0;i<n-1;i++){
            min=*min_element(v.begin()+i,v.end());
            
            for(j=i;j<n;j++){ 
                if(v[j]==min){ 
                    break;
                }
            }
            reverse(v.begin()+i,v.begin()+j+1);
            
            sum=sum+(j-i+1);
            
        }
        cout << "Case #"<< k << ": "<< sum << endl;
    }
}
