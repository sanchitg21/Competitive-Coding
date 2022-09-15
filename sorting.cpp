//SORTING
#include<iostream>
using namespace std;
int main(){ 
    int i,j,m,n,mini,t;
    n=m=11;
    int arr[n]={10,51,2,18,4,31,13,5,23,64,29};
    int array[m];
    for(i=0;i<m;i++){
        mini=100; 
        for(j=0;j<n;j++){ 
            if(mini>=arr[j])
                mini=arr[j];
        }
        array[i]=mini;
        for(j=0;j+1<n;j++){ 
            if(arr[j]==mini){ 
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
        n=n-1;
    }
    cout << "ASCENDING ORDER :)" << endl;
    for(i=0;i<m;i++)
        cout << array[i] << " "; 
    cout << "" << endl;

    cout << "DESCENDING ORDER :)" << endl;
    for(i=m-1;i>=0;i--)
        cout << array[i] << " "; 
    cout << "" << endl;
    
}
