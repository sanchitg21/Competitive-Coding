#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t,i,n,c,a,b,range;
    cin >> t;
    while(t--){ 
        cin >> c;
        range= 1 << int(ceil(log2(c)));
        string sc;
        while(c>0){
            int p=c%2;
            if (p==1)
                sc.insert(0,"1");
            else 
                sc.insert(0,"0");
            c=c/2;
        }
        string sa;
        string sb;
        sa.append("1");
        sb.append("0");
        for(i=1;i<sc.length();i++){ 
            if(sc[i]=='0'){ 
                sa.append("1");
                sb.append("1");
            }
            else { 
                sa.append("0");
                sb.append("1");
            }
        }
        a=b=0;
        int power=sc.length()-1;
        for(i=0;i<sc.length();i++){ 
            a= a+ (sa[i]-48)*pow(2,power);
            b=b + (sb[i]-48)*pow(2,power);
            power--;
        }
        cout << a*b << endl;
    }
}
