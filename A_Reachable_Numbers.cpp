#include <iostream>
using namespace std;
int main() {
    int n,x,i;
    int arr[n];
    cin >> x;
    arr[0]=x;
    if (x%10!=0) { 
        for (i=1;arr[i-1]!=arr[i-10];i++) { 
            if (x%10==0){
                while(x%10==0) {
                    x=x/10;}
                arr[i]=x;
            }
            else { 
                x=x+1;
                if (x%10==0)
                    continue;
                arr[i]=x;
            }
        }
    }
    else {
        x=x+1;
        arr[1]=x;
        for (i=2;arr[i-1]!=arr[i-10];i++) { 
            if (x%10==0){
                while(x%10==0) {
                    x=x/10;}
                arr[i]=x;
            }
            else { 
                x=x+1;
                if (x%10==0)
                    continue;
                arr[i]=x;
            }
        }

    }    
    n=i-1;
    cout << n << endl;
    for (i=0;i<=n;i++)
        cout << arr[i] << endl;
}