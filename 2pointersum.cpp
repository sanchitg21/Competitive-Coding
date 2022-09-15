#include<iostream>
using namespace std;
int *pointer(int target){
    int start=0;
    int end=0;
    int arr[10]={1,2,3,4,4,5,6,7,7,9};
    int n= sizeof(arr)/sizeof(int);
    static int result[10]={0};
    int sum=0;
    while(start<4){ 
        while(end<n && (sum + arr[end]<=target)){ 
            sum=sum +arr[end];
            end++;
        }
        start++;
        if((sum+arr[end]>target) && (sum + arr[end]-arr[start-1]<=target)){ 
            sum=sum-arr[start-1];
        }
        
    }  
    for(int i=start;i<=end;i++)
        result[i]= arr[i];
    return result;
}




int main(){
    int target,ans,i;
    int arr[10]={1,2,3,4,4,5,6,7,7,9};
    cin >> target;
    for(i=0;i<10;i++){ 
        ans=*(pointer(target)+i);
        if (ans!=0)
            cout << ans << endl;
    }
}
