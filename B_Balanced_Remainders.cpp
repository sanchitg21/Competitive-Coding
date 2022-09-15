#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long int t;
    cin >> t;
    for(long long int i = 0; i < t; i++){ 
        long long int n,c=0;
        cin >> n;
        long long int arr[n];
        long long int avg = n / 3;
        long long int rem[3] = {0};
        for(long long int j = 0; j < n; j++) {
            cin >> arr[j];
            rem[arr[j]%3]++;
        }
        long long int ans = 0;
        long long int largerIndex = 0;
        for (int i = 0; i < 3; i++) {
            if (rem[i] < avg) {
                c++;
            }
        }      
        if(c==2){
            for (int i = 0; i < 3; i++) {
                if (rem[i] > avg) {
                    largerIndex=i;
                }
            }
        }    
        else if(c==1){
            for (int i = 0; i < 3; i++) {
                if (rem[i] < avg) {
                    largerIndex=i;  //Here it is actually smaller index
                }
            }
        }
        if(c==2){ 
            ans = abs(avg - rem[(largerIndex+1) % 3]) * 1 + abs(avg - rem[(largerIndex+2) % 3]) * 2;
            cout << ans << endl;
        }
        else if(c==1){ 
            ans = abs(avg - rem[(largerIndex+1) % 3]) * 2 + abs(avg - rem[(largerIndex+2) % 3]) * 1;
            cout << ans << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
}