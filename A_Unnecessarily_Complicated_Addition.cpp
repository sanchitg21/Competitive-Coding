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

class SinglyLinkedNode {
public:
    int val;
    SinglyLinkedNode* next;
};

class Node{
    public:
    SinglyLinkedNode* newNode(int data){
        SinglyLinkedNode* temp = new SinglyLinkedNode;
        temp->val = data;
        return temp;
    }
    void createList(SinglyLinkedNode* num,string s){
        lli i=0,n=s.length();
        SinglyLinkedNode* temp = num;
        temp->val = s[i]-48;
        while(i+1<n){
            temp->next = newNode(s[i+1]-48);
            temp=temp->next;
            i++;
        }
    }
};
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,i,j,k;
    string s,t;
	cin >> s >> t;
    reverse(s.begin(),s.end());
    reverse(t.begin(),t.end());
    Node g;
    SinglyLinkedNode* num1= new SinglyLinkedNode;
    SinglyLinkedNode* num2= new SinglyLinkedNode;
    SinglyLinkedNode* ans= new SinglyLinkedNode;
    g.createList(num1,s);
    g.createList(num2,t);

    SinglyLinkedNode* p1=num1;
    SinglyLinkedNode* p2=num2;
    SinglyLinkedNode* head= ans;
    lli carry=0;
    while(true){
        lli sum= (p1)?(p1->val):(0);
        sum+=(p2)?(p2->val):(0);
        sum+=carry;
        head->val = sum%10;
        carry= sum/10;
        if(carry || p1 || p2){
            head->next = new SinglyLinkedNode;
            head=head->next;
            if(p1){
                p1=p1->next;
            }
            if(p2){
                p2=p2->next;
            }
        }
        else{
            break;
        }
    }
    string f;
    while(ans){
        f.insert(f.begin(),ans->val+48);
        ans=ans->next;
    }
    if(f[0]=='0'){
        f.erase(f.begin());
    }
    cout << f << endl;
}