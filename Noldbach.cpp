#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long int m,n,i,c,j,flag,a=2,b=1,p,s,k;
    cin >> n;
    cin >> m;
    c=0;
    for(i=3;i<=n;i++){ 
        flag=0;
        for(j=2;j*j<=i;j++){ 
            if(i%j==0){ 
                flag=1;
                break;
            }
        }
        if (flag!=1){ 
            if(a>b)
                b=i;
            else
                a=i;
        }
        s=0;
        p=a+b+1;
        for(k=2;k*k<=p;k++){ 
            if(p%k==0)
                s=1;
        }
        if(p<=n && flag!=1 && s!=1)
            c=c+1; 
    }
    if(c>=m)
        cout << "YES" << endl;
    else    
        cout << "NO" << endl;
}