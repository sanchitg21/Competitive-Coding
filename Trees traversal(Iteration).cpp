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
const int M=5e5+5;
const int INF = 2e9;

struct Node{
    int data;
    Node *left, *right;
};
Node* newNode(int data){
    Node* temp = new Node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;    
    return temp;
}

void Preorder(Node* node){
    if(node == NULL){ 
        return;
    }
    stack<Node*>s;
    Node* curr = node;
    //run till stack is not empty or curr is not null
    while(!s.empty() || curr!=NULL){
        // push all left elements
        while(curr!=NULL){     
            cout << curr->data << " ";
            if(curr->right != NULL){
                s.push(curr->right);
            }
            curr = curr->left;
        }
        if(!s.empty()){ 
            curr= s.top();
            s.pop();
        }
    }
}

void Inorder(Node* node){
    if(node == NULL){
        return;
    }
    stack<Node*>s;
    Node* curr = node;
    while(!s.empty() || curr!=NULL){
        while(curr!=NULL){
            s.push(curr);
            curr = curr->left;
        }
        cout << s.top()->data << " ";
        curr = s.top()->right;
        s.pop();
    }
}


void Postorder(Node* node){
    if(node == NULL){
        return;
    }
    stack<Node*>s1,s2;
    s1.push(node);
    Node* curr;

    while(!s1.empty()){
        curr= s1.top();
        s1.pop();
        s2.push(curr);
        if(curr->left){
            s1.push(curr->left);
        }
        if(curr->right){
            s1.push(curr->right);
        }
    }

    while(!s2.empty()){
        curr=s2.top();
        s2.pop();
        cout << curr->data << " ";
    }
}

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	Node *root= newNode(25);
    root->left = newNode(15);
    root->left->left = newNode(10);
    root->left->right = newNode(22);
    root->left->left->left = newNode(4);
    root->left->left->right = newNode(12);
    root->left->right->left = newNode(18);
    root->left->right->right = newNode(24);
    root->right = newNode(50);
    root->right->left = newNode(35);
    root->right->right = newNode(70);
    root->right->left->left = newNode(31);
    root->right->left->right = newNode(44);
    root->right->right->left = newNode(66);
    root->right->right->right = newNode(90);

    Preorder(root);
    cout << endl;
    
    Inorder(root);
    cout << endl;

    Postorder(root);
    cout << endl;
}

// Time Complexity - O(N)