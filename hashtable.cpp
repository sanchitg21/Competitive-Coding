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
#pragma GCC optimize("Ofast")
#include<algorithm>
using namespace std;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/__gcd(a,b)
#define endl '\n'
const int mod=1e9+7;
const int M=1e5+1;
const int INF = INT_MAX;

class HashTable{
    private:
    int n;
    vector<vector<int>>table;
    int hashfunction(int e);

    public:
    HashTable(int tablesize);
    void insert(int e);
    bool remove(int e);
    bool retrieve();
    void showStructure();
};

HashTable::HashTable(int tablesize){
    n=tablesize;
    table.resize(tablesize);

}

int HashTable::hashfunction(int e){
    return e%n;
}

void HashTable::insert(int e){
    table[hashfunction(e)].pb(e);
}

bool HashTable::remove(int e){
    for(lli i=0;i<table[hashfunction(e)].size();i++){
        if(table[hashfunction(e)][i]==e){
            table[hashfunction(e)].erase(table[hashfunction(e)].begin()+i,table[hashfunction(e)].begin()+i+1);
            return true;
        }
    }
    return false;
}

bool HashTable::retrieve(){

}

void HashTable::showStructure(){
    
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	cin >> t;
	
}
