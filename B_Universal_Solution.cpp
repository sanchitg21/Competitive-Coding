#include <iostream>
using namespace std;
int main() {
    long long int t,i,n,a,b,c;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        n=s.length();
        string ans;
        a=b=c=0;
        for(i=0;i<n;i++){
            if(s[i]=='P'){
                a++;
            }
            else if(s[i]=='S'){
                b++;
            }
            else{ 
                c++;
            }
        }
        if(a>=b && a>=c){ 
            for(i=0;i<n;i++){
                cout << "S";
            }
            cout << endl;
        }
        else if(b>=c && b>=a){ 
            for(i=0;i<n;i++){
                cout << "R";
            }
            cout << endl;
        }
        else{
            for(i=0;i<n;i++){
                cout << "P";
            }
            cout << endl;
        }
    }
}
