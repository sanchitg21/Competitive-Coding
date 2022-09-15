#include<iostream>
#include<cmath>
#include <bits/stdc++.h> 
using namespace std;
int main(){
    long long int t,i,n,k,j,r,c,x;
    cin >> t;
    while(t--){ 
        cin >> r >> c >> x;
        long long int a[r][c];
        long long int b[r][c];
        for(i=0;i<r;i++){ 
            for(j=0;j<c;j++){ 
                cin >> a[i][j]; // Array a created
            }   
        }
        
        for(i=0;i<r;i++){ 
            for(j=0;j<c;j++){ 
                cin >> b[i][j]; // array b created
            }   
        }
        long long int diff=0;
        for(i=0;i<r;i++){ 
            for(j=0;j<c-x+1;j++){ 
                diff=b[i][j]-a[i][j];
                for(k=j;k<x+j;k++){ 
                    a[i][k]=a[i][k]+diff;
                }
            }  
        }
        for(j=c-x+1;j<c;j++){ 
            for(i=0;i<r-x+1;i++){ 
                diff=b[i][j]-a[i][j];
                for(k=i;k<x+i;k++){ 
                    a[k][j]=a[k][j]+ diff;
                }
                
            }   
        }
        int flag=0;
        for(i=r-x+1;i<r;i++){ 
            for(j=c-x+1;j<c;j++){ 
                if(a[i][j]!=b[i][j]){ 
                    flag=1;
                    break;
                }
            }
            if (flag==1)
                break;
        }
        if(flag==1)
            cout << "No" << endl;
        else 
            cout << "Yes" << endl;
    }
}
