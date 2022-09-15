#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x,i,n,flag;
    float a;
    cin >> x; //Enter number
    if(x==1)
        cout << "Neither" << endl;
    else if (x%2==0 && x!=2)
        cout << "Composite" << endl;
    else if (x%3==0 && x!=3)
        cout << "Composite" << endl;
    else if(x>4){ 
        a=pow(x,1/2.0);
        for(n=2;n<=(a+1)/3;n=n+2){  
            if(x%(3*n-1)==0 || x%(3*n+1)==0){ 
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout << "Composite" << endl;
        else 
            cout << "Prime" << endl;
    }
}


if(j!=1)
            arr[y]=j;
        // Array of prime factors for a particular J is created
        n=0;
        for(i=0;arr[i]!=0;i++){ 
            for(j=i+1;arr[j]!=0;j++){ 
                if(arr[i]!=arr[j])
                    n=n+1;
                    break;
            }
        }