#include<iostream>
using namespace std;
int main(){ 
    long long int n,b,i,a,t,flag;
    cin >> t;
    for(i=0;i<t;i++){ 
        cin >> n;
        flag=0;
        for(a=0;a<=n/2021;a++) { 
            for(b=0;b<=n/2020;b++){ 
                if ((2021*a)+(2020*b)==n){ 
                    flag=1;
                    break;
                }
            }
        if (flag==1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        }
    }
}