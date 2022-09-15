#include <iostream>
using namespace std;
int main() {
    int arr[10]={100,93,24,21,6,7,8,9,10,100};
    int flag=0;
    for(int i=0;i+1<10;i++){
        if(arr[i]<arr[i+1]){ // strictly increasing
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout << "Increasing" << endl;
        return 0;
    }
    flag=0;
    for(int i=0;i+1<10;i++){
        if(arr[i]>arr[i+1]){ // strictly decreasing
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout << "Decreasing" << endl;
        return 0;
    }
    flag=0;
    for(int i=0;i+1<10;i++){
        if(arr[i]>arr[i+1] && flag!=2){
            flag=1;
            continue;
        }
        if(arr[i]>arr[i+1] && flag==2){
            cout << "Fail" << endl;
            return 0;
        }
        if(arr[i]<arr[i+1] && flag==1){ 
            flag=2;
        }
    }
    if(flag==2){
        cout << "First strictly decreased and then strictly increased" << endl;
        return 0;
    }
    cout << "fail" << endl;
    return 0;
}
