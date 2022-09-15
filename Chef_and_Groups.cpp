#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long int t,i,n,k,j,ctr;
    cin >> t;
    for(i=0;i<t;i++){ 
        j=0;
        string s;
        cin >> s;
        n=s.length();
        for(k=0;k<n;k++){ 
            if(s[k]!=s[k+1]){ 
                j++;
            }
        }
        if(s[0]=='1' && s[n-1]=='1')
            cout << j/2 +1<< endl;
        else if(s[0]=='0' && s[n-1]=='0')
            cout << j/2 << endl;
        else if(s[0]!= s[n-1])
            cout << (j+1)/2 << endl;
    }
}