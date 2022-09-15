//SELECTION SORT
#include<iostream>
using namespace std;
int main(){
    int i,p,j,k,n,t,min;
    n=11;
    int arr[n]={10,51,2,18,4,31,13,5,23,64,29};
 
    for(i=0;i<n;i++){ 
        min=100;
        for(j=i;j<n;j++){ 
            if(min>=arr[j]){
                min=arr[j];
                p=j;
            }
        }
        for(j=0;j<=i;j++){ 
            if(arr[j]>min){ 
                t=min;
                arr[p]=arr[j];
                arr[j]=t;
                break;
            }
        }
    }
    for(i=0;i<n;i++)
        cout << arr[i] << " ";
}
