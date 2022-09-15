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
    int t,i,n,sum,oddPref=0,evenPref=0,oddSuf=0,evenSuf=0,count=0;
    cin >> n;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin >> v[i];
        if(i%2==0){ 
        evenSuf=evenSuf+v[i];
        }
        else{ 
        oddSuf=oddSuf+v[i];
        }
    }
    for(i=0;i<n;i++){
        if(i%2==0){
            evenSuf=evenSuf-v[i];
        }
        else{
            evenPref=evenPref-v[i];
        }
        if(evenSuf+oddPref==oddSuf+evenPref){
            count++;
        }
        if(i%2==0){ 
            evenPref=evenPref+v[i];
        }
        else{ 
            oddPref=oddPref+v[i];
        }
    }   
    cout << count << endl;
}
