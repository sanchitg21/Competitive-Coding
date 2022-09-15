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
#define endl '\n'
using namespace std;
const int mod=1e9+7;
const int M=5e5+5;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,speed;
	cin >> t;
	while(t--){
		cin >> n >> k;
        vll v(n);
        for(i=0;i<n;i++){
            cin >> v[i];
        }
        vector<pair<double,double>> time(n);
        speed=1;
        for(i=0;i<n;i++){
            if(i==0){
                time[i].ff= (db)v[i]/speed;
                speed++;
                continue;    
            }
            time[i].ff=(db)(v[i]-v[i-1])/speed;
            speed++;
        }
        speed=1;
        for(i=n-1;i>=0;i--){
            if(i==n-1){
                time[i].ss= (db)(k-v[i])/speed;
                speed++;
                continue;    
            }
            time[i].ss=(db)(v[i+1]-v[i])/speed;
            speed++;
        }
        //prefix sum
        for(i=1;i<n;i++){
            time[i].ff=time[i].ff+time[i-1].ff;
        }
        for(i=n-2;i>=0;i--){
            time[i].ss=time[i].ss+time[i+1].ss;
        }
        //2 pointer technique
        lli flag=0;
        lli low=0;
        double a;
        while(low+1<n){
            if ((time[low].ff == time[low].ss) || (time[low+1].ff == time[low+1].ss)){
                if ((time[low].ff == time[low].ss)){ 
                    a=time[low].ff;
                }
                else{
                    a=time[low+1].ff;
                }
                flag=1;
                break;
            }
            if(time[low].ff < time[low].ss && time[low+1].ff > time[low+1].ss){
                flag=2;
                break;
            }
            low++;
        }   
        if(flag==1){
            cout << a << endl;
            continue;
        }
        if(flag!=2){ 
            if(time[n-1].ff < time[n-1].ss){
                double ans= (db)(time[n-1].ff) + (db)(k-v[n-1]-(time[n-1].ff))/(n+2);
                cout << fixed << setprecision(15) << ans << endl;
                continue;
            }   
            double ans= (db)(time[0].ss) + (db)(v[0]-(time[0].ss))/(2+n);
            cout << fixed << setprecision(15) << ans << endl;
            continue;
        }
        lli s1= (low+1)+1;
        lli s2= (n-(low+1)+1);
        double ans= (db)(v[low+1]-v[low]-s1*(time[low+1].ss-time[low].ff))/(s1+s2) + time[low+1].ss;
        cout << fixed << setprecision(15) << ans << endl;
	}
}