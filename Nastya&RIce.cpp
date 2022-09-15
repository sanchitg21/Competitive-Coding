#include <iostream>
using namespace std;
int main() {
    int n,p,e,q,i,flag;
    float j,c,d,a,b;
    cin >> n;
    for(i=0;i<n;i++) {
        flag=0;
        cin >> e; 
        cin >> a;
        cin >> b;
        cin >> c;
        cin >> d;
        p=(c+d)/e;
        q=(c-d)/e;
        if (p==q) { 
            if ((c+d/e)>=(a-b) && (c+d/e)<=(a+b))
                cout << "Yes" << endl;
            else 
                cout << "No" << endl;
        }
        else { 
            for(j=q;j<=p;j++) { 
                if (j>=(a-b) && j<=(a+b)) { 
                    cout << "Yes" << endl;
                    flag=1;
                    break;
                }
                else 
                    continue;
            }
        
            if (flag!=1) { 
                cout << "No" << endl;
                continue;  
            }      
        }
    }
}
