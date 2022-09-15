//CODE BY CONFUZED CODER
#define pb push_back
#define lli long long int
#define sa(v) sort(v.begin(),v.end())
#define sd(v) sort(v.begin(),v.end(),greater<lli>())
#define vpl vector<pair<lli,lli>>
#define vll vector<lli>
#define mps map<lli,lli>
#define mpst map<string,lli>
#define ff first
#define ss second
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<algorithm>
#define endl '\n'
// C++ program to find modular inverse of a under modulo m
// This program works only if m is prime.
using namespace std;
 
// To find GCD of a and b
int gcd(int a, int b);
 
// To compute x raised to power y under modulo m
int power(int x, unsigned int y, unsigned int m);
 
// Function to find modular inverse of a under modulo m
// Assumption: m is prime
void modInverse(int a, int m)
{
    int g = gcd(a, m);
    if (g != 1)
        cout << "Inverse doesn't exist";
    else
    {
        // If a and m are relatively prime, then modulo
        // inverse is a^(m-2) mode m
        int ans=((a%m)*(power(a, m - 2, m)%m))%m;
        cout << ans << endl;
    }
}
 
// To compute x^y under modulo m
int power(int x, unsigned int y, unsigned int m)
{
    if (y == 0)
        return 1;
    int p = power(x, y / 2, m) % m;
    p = (p * p) % m;
 
    return (y % 2 == 0) ? p : (x * p) % m;
}
 
// Function to return gcd of a and b
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
// Driver code
int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int n,i,j,a,b,c,d;
    int m =998244353;
    cin >> n;
    a=0;
    b=1;
    for(i=2;i<=n;i++){
        c=(a+b);
        a=(b)%m;
        b=(c);
    }
    d=1;
    for(i=1;i<=n;i++){ 
        d= (d*2)%m; 
    }
    // Function call
    modInverse(d, m);
    
}