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

// struct Node{
//     int data;
//     Node *left, *right;
// };
// Node* newNode(int data){
//     Node* temp = new Node;
//     temp->data = data;
//     temp->left = NULL;
//     temp->right = NULL;    
//     return temp;
// }


// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// 	lli n,m,t,i,j,k;
// 	Node *root= newNode(25);
//     root->left = newNode(15);
//     root->left->left = newNode(10);
//     root->left->right = newNode(22);
//     root->left->left->left = newNode(4);
//     root->left->left->right = newNode(12);
//     root->left->right->left = newNode(18);
//     root->left->right->right = newNode(24);
//     root->right = newNode(50);
//     root->right->left = newNode(35);
//     root->right->right = newNode(70);
//     root->right->left->left = newNode(31);
//     root->right->left->right = newNode(44);
//     root->right->right->left = newNode(66);
//     root->right->right->right = newNode(90);

// }


struct Node{
    lli val;
    Node* left;
    Node* right;
};

Node* newNode(lli data){
    Node* node = new Node;
    node->val = data;
    node->left = NULL;
    node->right = NULL;
    return node;
};

void preorder(Node* root){
    if(!root){
        return;
    }
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}


void inorder(Node* root){
    if(!root){
        return;
    }
    
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

void postorder(Node* root){
    if(!root){
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}

lli height(Node* root){
    lli l=0,r=0;
    if(root->left){
        l = height(root->left);
    }
    if(root->right){
        r = height(root->right);
    }
    if(root->left == NULL && root->right == NULL){  //Leaf
        return 0;
    }
    lli height = 1 + max(l,r);
    return height;
}

void depth(Node* root,lli h){
    if(!root){
        return;
    }
    cout << root->val << " " << h << endl;
    depth(root->left,h+1);
    depth(root->right,h+1);
}

Node* createTree(vll& v,Node* node,lli i){
    node->val = v[i];
    Node* l=NULL;
    Node* r=NULL;
    if(2*i+1<v.size() && v[2*i+1]!=-1){
        node->left = new Node;
        l = createTree(v,node->left,2*i+1); 
    }
    if(2*i+2<v.size() && v[2*i+2]!=-1){
        node->right = new Node;
        r = createTree(v,node->right,2*i+2);
    }
    node->left = l;
    node->right = r;
    return node;
}


int main(){
    Node* root = newNode(5);
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


    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    cout << endl;

    //Finding height of all nodes
    cout << "Height of tree: " << height(root) << endl;
    depth(root,0);

    lli n=20;
    vll v(n);
    for(lli i=0;i<n;i++){
        cin >> v[i];
    }
    Node* node = new Node;
    createTree(v,node,0);

    preorder(node);
    cout << endl;
    inorder(node);
    cout << endl;
    postorder(node);
    cout << endl;
}
