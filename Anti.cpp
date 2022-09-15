#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int n,k,i,j,t;
    cin >> t;
    for(i=0;i<t;i++){ 
        cin >> n;
        cin >> k;
        cout << n-ceil(k/2.0) << endl;
        for(j=ceil(k/2.0);j<=n;j++){ 
            if(j==k)
                continue;
            else
                cout << j << " ";
        }
        cout << "" << endl;
    }
}
            
