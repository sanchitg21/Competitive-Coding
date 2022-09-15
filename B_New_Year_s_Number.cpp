#include <iostream>
using namespace std;
int main(){ 
    long long int n,b,i,a,t,flag;
    cin >> t;
    for(i=0;i<t;i++){ 
        cin >> n;
        flag=0;
        a=0;
        while(n>=2020*a) { 
            if ((n-2020*a)%2021==0) { 
                flag=1;
                break;
            }
            a=a+1;
        }
        if (flag==1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;     
    }
}