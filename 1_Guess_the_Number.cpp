#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); 

    long long int t,i,n,a,b,c;
    string input;
    a=1;
    b=1000001;
    for(i=0;i<25;i++){ 
        c=(a+b)/2;
        cout << c << endl;
        cin >> input;
        if(input=="<") { 
            b=c;
        } else { 
            a=c;
        }

        if(b-a==1)
            break;
    }
    c=(a+b)/2;
    cout << "!" << " " << c << endl;
    return 0;
}
