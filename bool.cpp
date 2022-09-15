#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

bool hi(int x, int y, int z){
    if(x>y){ 
        return true;
    }
    else{  
        return false;
    }    
}

int main(){
    int x,y,z,i,ans;
    x=100;
    y=50;
    z=50;
    int arr[17]={34,5,6,78,765,43,5,6,7,8,98,7,65,44,567,865,43};
    sort(arr, arr + 15);
    ans=hi(x,y,z);
    if (ans==1)
        cout << "TRUE" << endl;
    else
        cout << "FALSE" << endl;

    for(i=0;i<17;i++)
        cout << arr[i] << " ";
}
