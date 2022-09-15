#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long int h,n,x,k,j;
    cin >> n;
    cin >> h;
    cin >> x;
    int arr[n];
    int flag=0;
    for(k=0;k<n;k++){ 
        cin >> arr[k];
        if(h-x<=arr[k]){ 
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
}