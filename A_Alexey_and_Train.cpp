#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long int t,i,n,j,time;
    cin >> t;
    for(i=0;i<t;i++){ 
        cin >> n;
        long long int arra[n];
        long long int arrb[n+1]={0};
        long long int arrc[n];
        for(j=0;j<n;j++){ 
            cin >> arra[j];
            cin >> arrb[j+1];
        }
        for(j=0;j<n;j++){ 
            cin >> arrc[j];
        }
        time=0;
        for(j=0;j<n;j++){ 
            time=time + arra[j]-arrb[j]+ arrc[j];
            if(arrb[j+1]<= time + ceil((arrb[j+1]-arra[j])/2.0))
                time=time + ceil((arrb[j+1]-arra[j])/2.0);
            else if(j!=n-1)
                time =arrb[j+1];
        }
        if(time >= arrb[n]){ 
            long long int a=time-ceil((arrb[n]-arra[n-1])/2.0);
            cout << a << endl;
        }
        else 
            cout << time << endl;
    }
}
