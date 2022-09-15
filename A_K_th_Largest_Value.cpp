#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long int t,i,m,n,x,one,zero,ans,j;
    cin >> n;
    cin >> m;
    long long int arr[n];
    for(i=0;i<n;i++)
        cin >> arr[i];
    one=0;
    zero=0;
    for(j=0;j<n;j++){ 
        if(arr[j]==1)
            one = one +1;
        else
            zero=zero+1;
    }
    for(i=0;i<m;i++){ 
        cin >> t;
        cin >> x;
        if(t==1){ 
            arr[x-1]=1-arr[x-1];
            if(arr[x-1]==0){ 
                one=one - 1;
                zero= zero+1;
            } 
            else{  
                one=one+1;
                zero=zero-1;
            }
        } 
        else{ 
            if(x<=one)
                cout << 1 << endl;
            else 
                cout << 0 << endl;
        }
    }
}
