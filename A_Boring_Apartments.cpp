#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long int t,i,j,n,x,y,z,a;
    cin >> t;
    for(i = 0; i < t; i++){ 
        cin >> n;
        a=n;
        y=0;
        while(n>0){ 
            y=y+1;
            n=n/10;
        }
        z=0;
        for(j=1;j<=y;j++)
            z=z+j;
        x= ((a%10)-1)*10 + z;
        cout << x << endl;
    }
}
