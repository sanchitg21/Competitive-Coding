#include<iostream>
using namespace std;
int pointer(int k, int arr[],int n){
    int start=0;
    int end=k-1; 
    int wsum=0;
    int ans[n-end]={0};

    while(k>0){ 
        k--;
        wsum = wsum + arr[k];
    }
    while(n-end>0){ 
        ans[n-end-1]=wsum;
        end++;
        wsum=wsum+ arr[end]-arr[start];
        start++;
    }
    int max=0;
    for(int i=0;i<start;i++){ 
        if(ans[i]>=max){ 
            max=ans[i];
        }
    }
    return max;
}

int main(){
    int k,ans,i;
    int arr[10]={1,2,3,4,4,5,6,7,7,9};
    int n=sizeof(arr)/sizeof(int);
    cin >> k;
    ans=pointer(k, arr,n);
    cout << ans << endl;   
}
