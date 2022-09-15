#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    long long int t,i,j,n,p;
    cin >> t;
    map<int,int>mp;
    while(t--){ 
        cin >> n;
        for(i=0;i<n;i++){
            cin >> j;
            mp[j]++;
        }
        cout << mp.size() << endl;
        mp.clear();
    }
    
}

        