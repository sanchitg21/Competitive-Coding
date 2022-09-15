//CODE BY Sanchit Gupta
#define pb push_back
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
#define endl '\n'
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,t,i,j,k,a,b,count,c,d,x,y;
	cin >> t;
	while(t--){
        // cin >> a >> b;
        // count=0;
        // for(i=3;i<=min(a,b+1);i++){
        //     count=count+min(a/i,i-2);
        // }
        // cout << count << endl;
        // c=sqrt(a+1);
        // d=sqrt(a+1);
        // c--;
        // d++;
        // for(i=1;i<=c;i++){
        //     k=b;
        //     if(i*(i+2)==a){
        //         count=count+ i*1 + (i-1)*1;
        //         break;
        //     }
        //     count=count+ i*(a/i -a/(i+1)) ;
        //     if(k<=a/i && k>a/(i+1)){
        //         count=i*(a/i - k+1);
                
        //     }  
        // } 
        
        // count=count+c*(c-1)/2;    
        // cout << count << endl;    
        cin >> x >> y;
        count=0;
        i=1;;
                while(i*(i+2)<=x && i<y){
                count+=min(x/i -1,y)-i;
                i++;
                }
        
        cout << count << endl;
        }   
}
