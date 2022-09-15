#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long int t,i,n,k,j;
    cin >> t;
    for(i=0;i<t;i++){ 
        cin >> n;
        long long int arr[n];
        long long int ans[n]={0};
        for(j=0;j<n;j++)
            cin >> arr[j];
        long long int p;

        int ctr=0;
        for(j=n-1;j>=0;j--){ 
            if(arr[j]>ctr)
               ctr=arr[j];
            if(ctr>0){ 
                ans[j]=1;
                ctr--;
            }
        }
        for(j=0;j<n;j++)
            cout << ans[j] << " ";
        cout << "" << endl;
    }
}
