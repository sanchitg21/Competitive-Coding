#include<iostream>
using namespace std;
int main(){
    int i,j,n,t,p;
    int arr[11]={10,51,2,18,4,31,13,5,23,64,29};
    n=10;
    for(i=1;i<=n;i++){ 
        p=i;
        for(j=p-1;j>=0;j--){ 
            if(arr[p]<=arr[j]){ 
                t=arr[p];
                arr[p]=arr[j];
                arr[j]=t;
            }
            p=p-1;
        } 
    }
    for(i=0;i<=n;i++)
        cout << arr[i] << " ";
}
