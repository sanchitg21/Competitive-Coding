#include<iostream>
#include <cmath>
using namespace std;
int main() {
    long long int t,i,j,k,flag,d,arr[3];
    long double p,x;
    cin >> t;
    for(i=0;i<t;i++) { 
        cin >>p;
        for(j=0;j<3;j++) { 
            cin >> x;
            d=ceil(p/x);
            arr[j]= d*x - p;
        }
        if ((arr[0] <= arr[1]) && (arr[0] <= arr[2])) { 
            cout << arr[0] << endl;
            continue;
        } else if ((arr[1] <= arr[0]) && (arr[1] <= arr[2])) { 
            cout << arr[1] << endl;
            continue;
        } else ((arr[2] <= arr[0]) && (arr[2] <= arr[1]));{
            cout << arr[2] << endl;
        }
        
    }
}
