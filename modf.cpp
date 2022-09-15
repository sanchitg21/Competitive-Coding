#include <iostream>
using namespace std;

int rec(int x,int n, int p)
{   
    if (n==0)
        return 1;
    if(n%2==0) 
        return (rec(x,n/2,p)*rec(x,n/2,p))%p;
    else
        return (x*rec(x,(n-1)/2,p)*rec(x,(n-1)/2,p))%p;
}

int main(){ 
    long long int n,p,num,den,ans;
    cin >> num;
    cin >> den;
    cin >> p;
    n=p-2;
    ans=((num%p)*rec(den,n,p))%p;
    cout << ans << endl;
}

