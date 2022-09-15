#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int t,i,n=0,arr[n],j,z;
    cin >> t;
    for(i=0;i<t;i++){ 
        cin >> n;
        z=0;
        for(j=0;j<n;j++)
            cin >> arr[j];
        for(j=0;j+1<n;j++){ 
            if (max(arr[j],arr[j+1])/min(arr[j],arr[j+1])<=2){ 
                continue;
            }
            else{ 
                if (arr[j]< arr[j+1])
                    arr[j]=2*arr[j];
                else
                    arr[j+1]=2*arr[j+1];
                z=z+1;
                j=j-1;
            }
        }
        cout << z << endl;
    }
} 