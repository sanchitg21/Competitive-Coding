#include<iostream>
using namespace std;
int main(){
    int i,j,n,t;
    int arr[11]={10,51,2,18,4,31,13,5,23,64,29};
    n=10;
    for(j=0;j<n;j++){ 
        for(i=0;i+1<n;i++){ 
            if(arr[i]>=arr[i+1]){ 
                t=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=t;
            }
        }
    }
    for(i=0;i<n;i++)
        cout << arr[i] << " ";
}
