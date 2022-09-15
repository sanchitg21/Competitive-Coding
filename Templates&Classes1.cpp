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


// A Class is a user defined data-type which has data members and member functions.
// Data members are the data variables and member functions are the functions used to 
//manipulate these variables and together these data members and member functions defines the properties and behavior of the objects in a Class.
template <class sanchit> //return-type function-name (parameter-list)
void swap(sanchit &a, sanchit &b){
    sanchit temp;
    temp=a;
    a=b;
    b=temp;
    cout <<a << " " << b << endl;
}

class Geeks{
    public:

    string geekname;
    string forname;
    

    void printname(){
        cout << geekname << " " << forname << endl;
    }
};

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);    
int a = 10, b = 20;

    Geeks c,d;
    c.geekname= "Sanchit";
    d.forname = "Varun";
    d.printname();
}


//Constructors are special class members which are called by the compiler every time an object of that class is instantiated. Constructors have the same name as the class and may be defined inside or outside the class definition.
// There are 3 types of constructors:

    // Default constructors
    // Parameterized constructors
    // Copy constructors


