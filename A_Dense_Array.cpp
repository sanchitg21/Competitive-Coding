#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long int i,j,t,n,a,b;
    long double c;
    cin >> t;
    for(i=0;i<t;i++) { 
        cin >> n;
        long long int arr[n];
        a=0;
        for(j=0;j<n;j++)
            cin >> arr[j];
        for(j=0;j+1<n;j++){ 
            b= min(arr[j],arr[j+1]);
            c= max(arr[j],arr[j+1])/2.0;
            while(b<c){ 
                b*=2;
                a=a+1;
            }
        }
        cout << a << endl;
    }
}
            


