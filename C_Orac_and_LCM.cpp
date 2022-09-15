#include<iostream>

using namespace std;
int gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}
int main(){
    long long int a,b,n,i,j,y,ans;
    cin >> n;
    long long int arr[n];
    for(i=0;i<n;i++){ 
        cin >> arr[i];
    }
    long long int lcm[(n-1)*n/2];
    y=0;
    for(i=0;i+1<n;i++){ 
        for(j=i+1;j<n;j++){ 
            lcm[y]=arr[i]*arr[j]/gcd(arr[i],arr[j]);
            y=y+1;
        }
    }
    a=lcm[0];
    for(i=1;i<y;i++){ 
        b=lcm[i];
        ans=gcd(a,b);
        a=ans;        
    }
    if(y==1)
        cout << a << endl;
    else 
        cout << ans << endl;
}  