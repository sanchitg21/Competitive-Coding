#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long int t,i,j,k,n,p,c,y,ans;
    cin >> t;
    for(i = 0; i < t; i++){ 
        cin >> n;
        int arr[n];
        for(j=0;j<n;j++)
            cin >> arr[j];

            // Reducing the array
        for(j=0;j<n;j++){   
            if (arr[j]==1 && arr[j]==arr[j+1]){ 
                for(k=j+1;k+1<n;k++){ 
                    p=arr[k];
                    arr[k]=arr[k+1];
                    arr[k+1]=p;
                }
                if(j==n-1)
                    break;
                n=n-1;
                j=j-1;
            }
        }
        //array reduced :)

        c=0;
        for(j=0;j<n;j++)
            if(arr[j]==1)
                c=c+1;
        long long int arr1[c];
        
        y=0;
        for(j=0;j<n;j++){ 
            if(arr[j]==1){ 
                arr1[y]=j;
                y=y+1;
            }
        }
        // array of index values created

        ans=0;
        for(j=0;j+1<c;j++)
            ans= ans + (arr1[j+1]-arr1[j]-1);
        cout << ans << endl;
    }
}
