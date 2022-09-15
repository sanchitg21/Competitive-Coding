//CODE BY Sanchit Gupta
#define pb push_back
#define db double
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<lli>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpst map<string,lli>
#define mpc map<char,lli>
#define ff first
#define ss second
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,a;
	cin >> n;
    lli arr[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            arr[i][j]=0;
        }
    }
    cin >> a;
    if(a==1){
        cout << 2 << " " << 1 << " " << 1 << endl;
    }
    else if(a==2){
        cout << 1 << " " << 1 << " " << 1 << endl;
    }
    if(a==3){
        cout << 1 << " " << 1 << " " << 1 << endl;
    }
    arr[0][0]=1;
    if(n==1){
        return 0;
    }
    for(i=1;i<n;i++){
        cin >> a;
        if((a==1 && arr[0][i]==2) || (a==2 && arr[0][i]==1)){
            cout << 3 << " " << 1 << " " << i+1 << endl; 
            arr[0][i]=3;
        }
        else if((a==1 && arr[0][i]==3) || (a==3 && arr[0][i]==1)){
            cout << 2 << " " << 1 << " " << i+1 << endl; 
            arr[0][i]=2;
        }
        else if((a==2 && arr[0][i]==3) || (a==3 && arr[0][i]==2)){
            cout << 1 << " " << 1 << " " << i+1 << endl; 
            arr[0][i]=1;
        }
    }

    for(i=1;i<n;i++){
        for(j=0;j+1<n;j++){
            cin >> a;
            if(arr[i-1][j]==1 && arr[i-1][j+1]==2 && (a==1 || a==3)){
                cout << 2 << " " << i+1 << " " << j+1 << endl;
                arr[i][j]=2;
            }
            else if(arr[i-1][j]==1 && arr[i-1][j+1]==2 && (a==2)){
                cout << 1 << " " << i+1 << " " << j+2 << endl;
                arr[i][j+1]=1;
                cin >> a;
                if(a==3 || a==1){
                    cout << 2 << " " << i+1 << " " << j+1 << endl;
                    arr[i][j]=2;
                }
                else{
                    cout << 3 << " " << i+1 << " " << j+1 << endl;
                    arr[i][j]=3;
                }
                j++;
            }
            else if(arr[i-1][j]==2 && arr[i-1][j+1]==1 && (a==2 || a==3)){
                cout << 1 << " " << i+1 << " " << j+1 << endl;
                arr[i][j]=1;
            }
            else if(arr[i-1][j]==2 && arr[i-1][j+1]==1 && (a==1)){
                cout << 2 << " " << i+1 << " " << j+2 << endl;
                arr[i][j+1]=2;
                cin >> a;
                if(a==3 || a==2){
                    cout << 1 << " " << i+1 << " " << j+1 << endl;
                    arr[i][j]=1;
                }
                else{
                    cout << 3 << " " << i+1 << " " << j+1 << endl;
                    arr[i][j]=3;
                }
                j++;
            }

            else if(arr[i-1][j]==1 && arr[i-1][j+1]==3 && (a==1 || a==2)){
                cout << 3 << " " << i+1 << " " << j+1 << endl;
                arr[i][j]=3;
            }
            else if(arr[i-1][j]==1 && arr[i-1][j+1]==3 && (a==3)){
                cout << 1 << " " << i+1 << " " << j+2 << endl;
                arr[i][j+1]=1;
                cin >> a;
                if(a==2 || a==1){
                    cout << 3 << " " << i+1 << " " << j+1 << endl;
                    arr[i][j]=3;
                }
                else{
                    cout << 2 << " " << i+1 << " " << j+1 << endl;
                    arr[i][j]=2;
                }
                j++;
            }
            else if(arr[i-1][j]==3 && arr[i-1][j+1]==1 && (a==3 || a==2)){
                cout << 1 << " " << i+1 << " " << j+1 << endl;
                arr[i][j]=1;
            }
            else if(arr[i-1][j]==3 && arr[i-1][j+1]==1 && (a==1)){
                cout << 3 << " " << i+1 << " " << j+2 << endl;
                arr[i][j+1]=3;
                cin >> a;
                if(a==3 || a==2){
                    cout << 1 << " " << i+1 << " " << j+1 << endl;
                    arr[i][j]=1;
                }
                else{
                    cout << 2 << " " << i+1 << " " << j+1 << endl;
                    arr[i][j]=2;
                }
                j++;
            }

            else if(arr[i-1][j]==2 && arr[i-1][j+1]==3 && (a==2 || a==1)){
                cout << 3 << " " << i+1 << " " << j+1 << endl;
                arr[i][j]=3;
            }
            else if(arr[i-1][j]==2 && arr[i-1][j+1]==3 && (a==3)){
                cout << 2 << " " << i+1 << " " << j+2 << endl;
                arr[i][j+1]=2;
                cin >> a;
                if(a==1 || a==2){
                    cout << 3 << " " << i+1 << " " << j+1 << endl;
                    arr[i][j]=3;
                }
                else{
                    cout << 1 << " " << i+1 << " " << j+1 << endl;
                    arr[i][j]=1;
                }
                j++;
            }
            else if(arr[i-1][j]==3 && arr[i-1][j+1]==2 && (a==1 || a==3)){
                cout << 2 << " " << i+1 << " " << j+1 << endl;
                arr[i][j]=2;
            }
            else if(arr[i-1][j]==3 && arr[i-1][j+1]==2 && (a==1 || a==2)){
                cout << 3 << " " << i+1 << " " << j+2 << endl;
                arr[i][j+1]=3;
                cin >> a;
                if(a==3 || a==1){
                    cout << 2 << " " << i+1 << " " << j+1 << endl;
                    arr[i][j]=2;
                }
                else{
                    cout << 1 << " " << i+1 << " " << j+1 << endl;
                    arr[i][j]=1;
                }
                j++;
            }
        }
        if(arr[i][n-1]==0){
            cin >> a;
            if(a!=arr[i-1][n-2]){
                cout << arr[i-1][n-2] << " " << i+1 << " " << j+1 << endl;
                arr[i][j]=arr[i-1][n-2];
            }
            else if(arr[i][n-2]==1 && arr[i-1][n-2]==2){
                cout << 3 << " " << i+1 << " " << j+1 << endl;
                arr[i][j]=3;
            }
            else if(arr[i][n-2]==2 && arr[i-1][n-2]==3){
                cout << 1 << " " << i+1 << " " << j+1 << endl;
                arr[i][j]=1;
            }
            else if(arr[i][n-2]==1 && arr[i-1][n-2]==3){
                cout << 2 << " " << i+1 << " " << j+1 << endl;
                arr[i][j]=2;
            }
        }
    }   
}

