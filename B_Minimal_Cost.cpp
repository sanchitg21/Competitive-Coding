#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long int t,i,j,n,u,v,flag;
    cin >> t;
    for(i = 0; i < t; i++){ 
        cin >> n;
        cin >> u;
        cin >> v;
        long long int col[n];
        for(j=0;j<n;j++)
            cin >> col[j];
        flag=0;

        for(j=0;j+1<n;j++){ 
            if(col[j]-col[j+1]>=2 || col[j]-col[j+1]<=-2){ 
                flag=3;
                break;
            }
        }
        for(j=0;j+1<n;j++){ 
            if (flag==3)
                break;
            if(u<=v && col[j]==col[j+1]){ 
                flag=1;
            }
            else if(u>v && col[j]==col[j+1]){ 
                flag=2;
            }
            else if(u>=v && (col[j]-col[j+1]==1 || col[j]-col[j+1]==-1)){ 
                flag=4;
                break;
            }
            else if(v>u && (col[j]-col[j+1]==1 || col[j]-col[j+1]==-1)){ 
                flag=5;
                break;
            }
        }
        if(flag==1)
            cout << u+v << endl;
        else if(flag==2)
            cout << 2*v << endl;
        else if(flag==3)
            cout << 0 << endl;
        else if(flag==4)
            cout << v << endl;
        else if(flag==5)
            cout << u << endl;
    }
}
