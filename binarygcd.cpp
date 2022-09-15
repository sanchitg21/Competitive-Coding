#include<iostream>
using namespace std;
int main(){ 
    int a,b,ans;
    cin >> a;
    cin >> b;
    while(a!=b){ 
        while(a%2==0)
            a=a/2;
        while(b%2==0)
            b=b/2;
        if(a>b)
            a=a-b;
        else if(b>a) 
            b=b-a;
        
        if(a%b==0 || b%a==0)
            break;
    }   
    if(a>b)
        cout<< a << endl;
    else    
        cout << b << endl;
}