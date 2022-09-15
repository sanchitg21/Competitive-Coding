#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

int *pointer(int x){
    int arr[10]={1,-2,3,-4,4,5,-6,7,-7,9};
    sort(arr,arr+10);
    static int result[3]={0};
    int target,i;
    for(i=0;i<10;i++){ 
        int target=x-arr[i];
        int start=1;
        result[0]=arr[i];
        int end=sizeof(arr)/sizeof(int) -1;
        while(start<end){ 
            int sum=arr[start] + arr[end];
            if(sum==target){ 
                result[1]=arr[start];
                result[2]=arr[end];
                break;
            }
            else if(sum<target){ 
                start++;
                if(i==start)
                    start++;
            }
            else { 
                end--;
                if(i==end)
                    end--;
            }
        }
        if (result[0]+result[1]+result[2]==x)
            break;
    }
    return result;
}
int main(){
    int ans,x,i;
    cin >> x;
    for(i=0;i<3;i++){ 
        ans=*(pointer(x)+i);
        cout << ans << endl;
    }
}
