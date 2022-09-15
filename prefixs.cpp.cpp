#include<iostream>
using namespace std;
int prefix(int arr[],int x){
    if (x==0)
        return arr[0];
    else 
        return arr[x] + prefix(arr,x-1);
}

int main(){
    int i,ans;
    int prefixsum[10];
    int arr[10]={2,4,5,10,13,18,23,31,51,64};
    for(i=0;i<10;i++){ 
        prefixsum[i]=prefix(arr,i);
    }

    for(i=0;i<10;i++){ 
        cout << prefixsum[i] << endl;
    }
}
