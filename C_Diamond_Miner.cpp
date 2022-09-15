#include<iostream>
#include <bits/stdc++.h> 
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    long long int t,i,j;
    cin >> t;
    for(i=0;i<t;i++){ 
        long long int n;
        cin >> n;
        long long int x,y;
        long long int arrx[2*n]={0};
        long long int arry[2*n]={0};
        for(j=0;j<2*n;j++){ 
            cin >> x;
            cin >> y;
            if(x==0){ 
                if(y<0)
                    arry[j]= -y;
                else 
                    arry[j]=y;
            }
            else if(y==0){ 
                if(x<0)
                    arrx[j]= -x;
                else 
                    arrx[j]= x;
            }  
        } // values of coordinates taken
        sort(arrx, arrx + 2*n); 
        sort(arry, arry + 2*n); 
        
        double sum=0;
        for(int j=n;j<2*n;j++){ 
            sum= sum + sqrt(arrx[j]*arrx[j] + arry[j]*arry[j]);
        }
        cout << fixed;
        cout << setprecision(15); 
        cout << sum << endl;
    }
}
