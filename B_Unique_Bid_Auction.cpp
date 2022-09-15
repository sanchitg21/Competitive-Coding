#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long int t,n,i,j,y,flag;
    cin >> t;
    for(i=0;i<t;i++){ 
        cin >> n;
        long long int arr[n+1]={0};
        long long int count[n+1]={0};
        long long int ans[n]={0};
        for(j=1;j<=n;j++) { 
            cin >> arr[j];
            count[arr[j]]=count[arr[j]]+1;
        }
        y=0;
        for(j=1;j<=n;j++){ 
            if (count[j]==1){ 
                ans[y]=j;
                y=y+1;
            }
        }
        int mini=200000;
        for(j=0;j<y;j++){ 
            if(mini>=ans[j])
                mini=ans[j];
        }
        flag=0;
        for(j=1;j<=n;j++){ 
            if (mini==arr[j]){ 
                flag=1;
                break;
            }
        }
        if (flag==1)
            cout << j << endl;
        else 
            cout << -1 << endl;
    }
}
            