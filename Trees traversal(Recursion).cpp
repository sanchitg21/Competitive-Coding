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
    Node *left,*right;
};
Node* newNode(int data){
    Node* temp = new Node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

// Inorder traversal (left root right)
void Inorder(Node *node){
    if(node == NULL){
        return;
    }
    Inorder(node->left);

    cout << node->data << " ";
    
    Inorder(node->right);
}

// Preorder traversal
void Preorder(Node *node){
    if(node == NULL){
        return;
    }
    cout << node->data << " ";

    Preorder(node->left);

    Preorder(node->right);    
}

// Postorder traversal
void Postorder(Node *node){
    if(node == NULL){
        return;
    }
    Postorder(node->left);

    Postorder(node->right);

    cout << node->data << " ";
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

    Inorder(root);
    cout << endl;
    
    Preorder(root);
    cout << endl;
    
    Postorder(root);
    cout << endl;
}

// Time Complexity - O(N)