#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long int t,i,j,k,n;
    cin >> t;
    for(i=0;i<t;i++){ 
        cin >> n;
        string arr;
        cin >> arr;
        if(arr[0]=='2' && arr[1]=='0' && arr[2]=='2' && arr[3]=='0'){ 
            cout << "YES" << endl;
        }
        else if(arr[n-4]=='2' && arr[n-3]=='0' && arr[n-2]=='2' && arr[n-1]=='0'){ 
            cout << "YES" << endl;
        }
        else if(arr[0]=='2' && arr[1]=='0' && arr[2]=='2' && arr[n-1]=='0'){ 
            cout << "YES" << endl;
            
        }
        else if (arr[0]=='2' && arr[1]=='0' && arr[n-2]=='2' && arr[n-1]=='0'){ 
                cout << "YES" << endl;
            
        }
        else if (arr[0]=='2' && arr[n-3]=='0' && arr[n-2]=='2' && arr[n-1]=='0' ){ 
                cout << "YES" << endl;
        }
        else 
            cout << "NO" << endl;
    }
}
