// C++ program to demonstrate the use of std::unique
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include<cmath>
using namespace std;
int main(){
    int t;
    int arr[]={1,8,3,6,7,5,5,8,6,4};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n/2;i++){ 
        t=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=t;
    }
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;
    vector<int>v{3,4,5,8,9};
    n=v.size();
    for(int i=0;i<1;i++){
        for(int j=i;j<n;j++){
            v[j]=v[j]-v[i];
        }
    }
    for(int i=0;i<n;i++){
        cout << v[i] << " ";
    }
    cout << endl;

    set <int> s;
    set <int>::iterator it;
    s.insert(2);
    s.insert(1);
    s.insert(4);
    s.insert(3);
    for(it = s.begin();it != s.end();++it)
        cout << *it << ' ';
    cout << endl;
    n=10;
    vector<int>san(n);
    for(int i=0;i<n;i++){
        san[i]=i;
    }
    san.erase(san.begin()+7,san.end());
    for(int i=0;i<san.size();i++){
        cout << san[i] << " ";
    }
    cout << endl;

    int m=7;
    n=8;
    cout << (m+4)%n << endl;

    //BITWISE OPERATORS
    int f=64;
    f>>=3;
    bool h=true,g=false;
    cout << f << endl;
    cout << (53|28) << endl; 
    cout << (3<<29) << endl; 
    cout << (53^28) << endl; 
    cout << (53&28) << endl; 
    cout << (h&&h) << endl; 
    cout << endl;
    cout << (1ull<<63) << endl;
    cout << endl;
    int x=53;
    int y=x;
    int c=0;
    while(y>0){
        c++;
        y=y/2;
    }
    for(int i=c;i>=0;i--){
        if((x&(1<<i))!=0){
            cout << 1;
        }
        else{
            cout << 0;
        }
    }
    
    cout << endl;
    vector<int>q={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59};
    vector<int>::iterator ip;
    for(ip=q.begin();ip!=q.end();ip++){ 
    int flag=0;
    for(int i=sqrt(floor(*ip));i>=0;i--){
        if(*ip & 1<<i){
            flag=1; 
            cout << 1;
        }
        else if(flag==1){ 
            cout << 0;
        }
    }
    cout << endl;
    }
    cout << endl;
    int i,j;
    int sanc[2][5];
    for(i=0;i<2;i++){
        for(j=0;j<5;j++){ 
            cin >> sanc[i][j];
        }
    }
    sort(sanc[i],sanc[i]+5);
    for(i=0;i<2;i++){
        for(j=0;j<5;j++){
            cout << sanc[i][j] << " ";
        }
        cout << endl;
    }
}
