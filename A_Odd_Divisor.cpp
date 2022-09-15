#include<iostream>
using namespace std;
int main(){ 
    long long n,x,i,j,t,flag;
    cin >> t;
    for(i=0;i<t;i++) { 
        cin >> n;
        flag=0;
        if (n%2!=0) { 
            cout << "YES" << endl;
            continue;
        }
        else { 
            while(n%2==0){ 
                n=n/2;
            }
            if(n%2==1 && n>1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;

        }
    }
}