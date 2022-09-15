#include <iostream>
using namespace std;
int main(){ 
    int i,x,y,z,t;
    cin >> t;
    for(i=0;i<t;i++) { 
        cin >> x;
        cin >> y;
        cin >> z;
        if (y+z==x || x+y==z || x+z==y)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
}