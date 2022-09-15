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
    int t,n,m,i,j,k,l;
    cin >> t;
    while(t--){
        string a;
        string b;
        cin >> a;
        cin >> b;
        m=a.length();
        n=b.length();
        int maxlength=0;
        int len;
        for(i=0;i<m;i++){
            for(j=i;j<m;j++){
                for(k=0;k<n;k++){
                    for(l=k;l<n;l++){
                        if(b.substr(k,l-k+1)==a.substr(i,j-i+1)){
                            len=l-k+1;
                            maxlength=max(len,maxlength);
                        }
                    }
                }
            }
        }
        cout << m+n-2*(maxlength) << endl;       
    }
}
