#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int i,j,n;
    float m,s;
    cin >> n;
    int array[2][n];
    for(i=0;i<=1;i++){ 
        for(j=0;j<n;j++){ 
            cin >> array[i][j];
        }
    }
    s=1;
    m=0;
    for(j=0;j<n;j++) { 
        if(array[0][j]<array[1][j]) { 
            s=s+1;
        }
        if(array[0][j]>array[1][j]) { 
            m=m+1;
        }

    }
    if (m>=1)
        cout << ceil(s/m) << endl;
    else 
        cout << -1 << endl;
    
}
