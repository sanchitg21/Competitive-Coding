#include<iostream>
using namespace std;
int main(){
    int t,i,n,k,m,flag;
    cin >> t;
    for(i=0;i<t;i++){
        cin >> n;
        cin >> m;
        string s;
        cin >> s;
        int x=m,j=0,k=n-1,y=0;
        flag=0;
        if(m==0){ 
            cout << "YES" << endl;
            continue;
        }
        if(s[j]==s[k]){ 
            while (s[j]=s[k] && k-j>0){ 
                j++;
                k--;
                y++;
            }
        }
        if(m>=1 && s[j]!=s[k]){ 
            flag=2;
            break;
        }
        else if (m==0 && k-j>=0){ 
            flag=1;
            break;
        }

        if(flag==1 && x<=y)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
}
