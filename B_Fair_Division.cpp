#include<iostream>
#include <cmath> 
#include<algorithm>
using namespace std;
int main(){
    long long int t,i,j,n,a,b;
    cin >> t;
    for(i=0;i<t;i++){ 
        cin >> n;
        long long int arr[n];
        for(j=0;j<n;j++){ 
            cin >> arr[j];
        }
        a=0;
        b=0;
        for(j=0;j<n;j++){ 
            if(arr[j]==1)
                a=a+1;
            else
                b=b+1;
        }
        if(a==0 && b%2==1)
            cout << "NO" << endl;        
        else if((a%2==0 && b%2==0) || (a%2==0 && b%2==1))
            cout << "YES" << endl;
        else if((a%2==1 && b%2==1) || (a%2==1 && b%2==0))
            cout << "NO" << endl;
    }
}
