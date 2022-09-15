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
    int t,i,n,k;
    cin >> t;
    while(t--){ 
        cin >> n;
        cin >> k;

        for(i=0;i<k-3;i++)
            cout << "1" << " ";
        n=n-k+3;
        if(n%2==0){
            if((n/2)%2==0)
                cout << n/4 << " " << n/4 << " " << n/2 << endl; 
            else
                cout << (n/2)-1 << " " << (n/2)-1 << " " << 2 << endl;
        }
        else{ 
            cout << n/2 << " " << n/2 << " " << 1 << endl;
        }
    }

   
}