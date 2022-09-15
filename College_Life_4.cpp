#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long int t,n,c,a,b,e,h,x,y,z,flag,sum;
    cin >> t;
    while(t--){ 
        cin >> n >> e >> h >> a >> b >> c;
        long long int arr[n+1][3];
        flag=0;
        for(z=0;z<=n;z++){ //No of cake taken
            x=(e-z)/2; //No. of omelette taken
            y=(h-z)/3; //No. of chocolate shake taken
            if(x+y+z>=n){
                if(z>e || z>h) { 
                    arr[z][0]=arr[z][1]=arr[z][2]=0;
                    continue;
                }
                else {     
                    flag=1;
                    arr[z][0]=x;
                    arr[z][1]=y;
                    arr[z][2]=z;
                }
            }
            else
                arr[z][0]=arr[z][1]=arr[z][2]=0;
        }
        if(flag==0){ 
            cout << -1 << endl;
            continue;
        }
        //We have to find min cost. 
        long long int ans[n+1];
        for(z=0;z<=n;z++){ 
            if(arr[z][2]==0 && arr[z][1]==0 && arr[z][0]==0)
                sum=0;
            else if(a>=b ){ 
                if(n-z>arr[z][1])
                    sum= (n-arr[z][1]-z)*a + arr[z][1]*b + z*c;
                else 
                    sum= (n-z)*b + z*c;
            }
            else if(b>a)
                if(n-z>arr[z][0])
                    sum= arr[z][0]*a + (n-arr[z][0]-z)*b + z*c;
                else 
                    sum= (n-z)*a + z*c;
            ans[z]=sum;
        }
        long long int min=20000000000000;
        for(z=0;z<=n;z++){ 
            if(min >= ans[z] && ans[z]!=0)
                min=ans[z];
        }
        cout << min << endl;
    }
}
