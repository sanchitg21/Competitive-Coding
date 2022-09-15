//Birthday Paradox
#include<iostream>
using namespace std;
int main(){
    int n,i;
    float p=1,ans;
    cin >> ans;  //Enter required probability
    n=0;
    while(ans/100>=1-p) { 
        p=p*(365-n)/365;
        n=n+1;
    }
    cout << n << endl;

}    
