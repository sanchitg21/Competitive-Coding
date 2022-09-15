#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long int t,i,j,n;
    cin >> t;
    for(i=0;i<t;i++){ 
        cin >> n;
        long long int arr[n];
        for(j=0;j+1<n;j++)
            arr[j]=j+2;
        arr[n-1]=1;
        for(j=0;j<n;j++) { 
            cout << arr[j] << " ";
        }
        cout << "" << endl;
    }
}