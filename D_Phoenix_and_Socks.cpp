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
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=5e5+5;
const int INF = 2e9;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k,l,r,count;
	cin >> t;
	while(t--){
        count=0;
		cin >> n >> l >> r;
        mps left;
        mps right;
        vll v(n);
        j=0;
        for(i=0;i<n;i++){
            cin >> v[i];
            if(j<l){ 
                left[v[i]]++;
            }
            else{
                right[v[i]]++;
            }
            j++;
        }
        // 2 pointers
        auto it= left.begin(); 
        auto ip= right.begin();
        while(it!=left.end() && ip!=right.end()){
            if(it->ff == ip->ff){
                it->ss = it->ss -min(it->ss,ip->ss);
                ip->ss = ip->ss -min(it->ss,ip->ss);
                it++;
                ip++;
            }
            else if(it->ff < ip->ss){
                it++;
            }
            else if(it->ff > ip->ss){
                ip++;
            }
        }
        lli lsum=0;
        for(auto it=left.begin();it!=left.end();++it){
            lsum=lsum+(it->ss);
        }
        lli rsum=0;
        for(auto it=right.begin();it!=right.end();++it){
            rsum=rsum+(it->ss);
        }
        if(rsum>lsum){ 
            for(auto it=right.begin();it!=right.end();++it){
                lli temp=min((rsum-lsum)/2,it->ss-(it->ss)/2);
                it->ss=it->ss - temp;
                left[it->ff]+= temp;
                lsum= lsum + temp;
                rsum= rsum - temp;
                count+=temp;
                if(lsum==rsum){
                    break;
                }
            }
        }
        else if(lsum>rsum){
            for(auto it=left.begin();it!=left.end();++it){
                lli temp=min((lsum-rsum)/2,it->ss-(it->ss)/2);
                it->ss=it->ss - temp;
                right[it->ff]+= temp;
                lsum= lsum - temp;
                rsum= rsum + temp;
                count+=temp;
                if(lsum==rsum){
                    break;
                }
            }
        }
        it= left.begin(); 
        ip= right.begin();
        while(it!=left.end() && ip!=right.end()){
            if(it->ff == ip->ff){
                it->ss = it->ss -min(it->ss,ip->ss);
                ip->ss = ip->ss -min(it->ss,ip->ss);
                it++;
                ip++;
            }
            else if(it->ff < ip->ss){
                it++;
            }
            else if(it->ff > ip->ss){
                ip++;
            }
        }
        lsum=rsum=0;
        for(auto it=left.begin();it!=left.end();++it){
            lsum=lsum+(it->ss);
        }
        for(auto it=right.begin();it!=right.end();++it){
            rsum=rsum+(it->ss);
        }
        cout << (lsum+rsum)/2+count << endl;
	}
}
