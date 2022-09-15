#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(){
    long long int h,l,n,i,j,k,flag;
    cin >> l;
    cin >> h;
    vector<long long int>v;
    int limit=ceil(sqrt(h-l+1));
    for(k=0;k<limit;k++){ 
    for(i=l;i<=l+limit;i++){ 
        flag=0;
        for(j=2;j*j<=i;j++){ 
            if(i%j==0){ 
                flag=1;
                break;
            }
        }
        if(flag==0){
            v.push_back(i);
        }
    }
    for(i=0;i<v.size();i++){ 
        cout << v[i] << endl;
    }
    v.clear();
    l=l+limit+1;
    }
}
