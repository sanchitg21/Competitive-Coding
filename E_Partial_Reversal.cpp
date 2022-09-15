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

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    SinglyLinkedNode* head= new SinglyLinkedNode;
    SinglyLinkedNode* temp=head;
	lli n,m,i,j,k;
    cin >> n >> m;
    for(i=0;i<n;i++){
        cin >> j;
        temp->val=j;
        if(i!=n-1){
            temp->next = new SinglyLinkedNode; 
            temp=temp->next;
        }
    }
    SinglyLinkedNode* prev = NULL;
    SinglyLinkedNode* curr = head;
    SinglyLinkedNode* tail = head;
    temp= head->next;
    i=0;
    vector<pair<SinglyLinkedNode*,SinglyLinkedNode*>> v;
    lli count=0;
    while(true){
        if(i==m){
            v.pb({prev,tail});
            tail=curr;
            count++;
            i=0;
            if(count*m == (n/m)*m){
                break;
            }
            
            prev=NULL;
            continue;
        }
        i++;
        curr->next = prev;
        prev= curr;
        curr = temp;
        if(!temp){
            break;
        }
        temp= temp->next;
    }
    if(i==m){
        v.pb({prev,tail});  
        tail=curr; 
    }
    if(v.size()){
        head=v[0].ff;
        (v[v.size()-1].ss)->next = tail;
    }
    for(i=0;i+1<v.size();i++){
        (v[i].ss)->next = (v[i+1].ff);
    }
    while(head){
        cout << head->val << " ";
        head=head->next;
    }
}
