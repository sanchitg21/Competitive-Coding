#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long int m,n,i,c,j,flag,a=2,b=1;
    cin >> n;
    cin >> m;
    c=0;
    int arr[n+1]={0};
    flag=0;
    for(i=2;i<=n;i++){ 
        flag=0;
        for(j=2;j*j<=i;j++){ 
            if(i%j==0){ 
                flag=1;
                break;
            }
        }
        if(flag!=1)
            arr[i]=1;
    }
    for(i=3;i<=n;i++){ 
        if(a>b && arr[i]==1)
            b=i;
        else if (b>a && arr[i]==1)
            a=i;
        if(a+b+1<=n && arr[a+b+1]==1 && arr[i]!=0)
            c=c+1; 
    }
    if(c>=m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
