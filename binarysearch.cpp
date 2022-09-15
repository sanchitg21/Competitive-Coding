#include<iostream>
using namespace std;
int binary(int x){
    int arr[11]={2,4,5,10,13,18,23,31,51,64};
    int low=0;
    int high=19;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>x)
            high= mid-1;
        else if(arr[mid]<x)
            low= mid+1;
        else     
            return mid;    
    }
    return -1;
}

int main(){
    int x,ans;
    cin >> x;
    ///Question is to find index of x in the given array
    ans=binary(x);
    cout << ans << endl;
}
