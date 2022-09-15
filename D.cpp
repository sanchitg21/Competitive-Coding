#include<iostream>
using namespace std;

int gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}

int main(){ 
    long long int a,m,t,i,j,c,ans;
    cin >> t;
    for(i=0;i<t;i++){ 
        cin >> a;
        cin >> m;
        c=0;
        for(j=0;j<m;j++){ 
            if(gcd(a+j,m)==gcd(a,m))
                c=c+1;
        }
        cout << c << endl;
    }
}
