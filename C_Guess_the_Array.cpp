#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); 
    int n,a,b,c,i;
    cin >> n;
    int arr[n+1]={0};
    cout << "?" <<" " << 1 << " " << 2 << endl;
    cin >> a;
    cout << "?" <<" " << 2 << " " << 3 << endl;
    cin >> b;
    cout << "?" <<" " << 1 << " " << 3 << endl;
    cin >> c;

    arr[2]= (a-c+b)/2;
    arr[1]= a-arr[2];
    arr[3]= c-arr[1];

    for(i=4;i<=n;i++){
        cout << "?" <<" " << i-1 << " " << i << endl;
        cin >> arr[i];
        arr[i]=arr[i]-arr[i-1];
    }

    cout << "!";
    for(i=1;i<=n;i++){ 
        cout << " " << arr[i];
    }
}
