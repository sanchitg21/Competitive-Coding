#include <iostream>
using namespace std;
int main() {
    int n,i,j,k=-1,flag=0;
    string s;
    string t("hello");
    cin >> s;
    n=s.length();
    for(j=0;j<=4;j++) { 
        for(i=k+1;i<n;i++) { 
            if(s[i]==t[j]){ 
                k=i;
                flag=flag+1;
                if(flag==5)
                    break;
                break;
            }
        }
    }
    if (flag==5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}