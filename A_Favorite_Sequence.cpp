#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long int t,i,j,n;
    cin >> t;
    for(i=0;i<t;i++){ 
        cin >> n;
        long long int arr[n];
        long long int fav[n]={0};
        for(j=0;j<n;j++)
            cin >> arr[j];
        for(j=0;2*j<n;j++){ 
            fav[2*j]=arr[j];
            fav[2*j+1]=arr[n-1-j];
        }

        for(j=0;j<n;j++)
            cout << fav[j] <<" ";
        cout << " " << endl;
    }
    
}
