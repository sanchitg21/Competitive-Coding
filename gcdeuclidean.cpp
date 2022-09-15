// recursive
#include<iostream>
using namespace std;
int gcd (int a, int b);
int main(){ 
    int a,b,ans;
    cin >> a;
    cin >> b;
    ans=a*b/gcd(a,b);
    cout << ans << endl;
}

int gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}

// non-recursive
#include<iostream>
using namespace std;
int gcd (int a, int b);
int main(){ 
    int a,b,ans;
    cin >> a;
    cin >> b;
    while(b){
        a=a%b;
        swap(a,b);
    }
    cout << a << endl;
}
