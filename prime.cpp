#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long int x,i,n,ans=1,y=0;
    cin >> x;
    long long int arr[1000000]={0};
    for(i=2;i*i<=x;i++){ 
        if(x%i==0) { 
            x=x/i;
            arr[y]=i;
            y=y+1;
            i=1;
        }
    }
    if(x!=1)
        arr[y]=x;
    cout << "PRIME FACTORIZATION" << endl; 
    cout << 1 << "";
    for(y=0;arr[y]!=0;y++)
        cout << "x"<< arr[y];
}
