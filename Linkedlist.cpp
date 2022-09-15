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
const int INF = 2e9;

struct TreeNode{
    int val;
    TreeNode* next;
};

// class LinkedList{
//     public:
//     void Node(TreeNode* root){
//         root->next = newNode(30);
//         root->next->next = newNode(50);
//         root->next->next->next = newNode(80);
//         cout << root->val << " " << root->next->val << " " << root->next->next->val << " " << root->next->next->next->val << endl;
//         // Delete from beginning
//         TreeNode* node1 = newNode(0);
//         node1 = root;
//         root= root->next;
//         cout << root->val << " " << root->next->val << " " << root->next->next->val << endl;
//         TreeNode* node2 = newNode(0);
//         node2= root->next;
//         TreeNode* node3 = node2->next;
//         cout << node3->val << endl;
//         node2->next=NULL;
//         cout << root->val << " " << root->next->val << " "<< endl;
//         cout << node3->val << endl;
//         free(node1);
//         cout << node1->val << endl;
        
//     }
//     TreeNode* newNode(int data){
//         TreeNode* temp = new TreeNode;
//         temp->val = data;
//         temp->next = NULL;
//         temp->right = NULL;
//         return temp;
//     }
// };


class LinkedList{
    public:
    void Node(TreeNode* root){
        root->next = newNode(30);
        root->next->next = newNode(50);
        root->next->next->next = newNode(80);
        cout << root->val << " " << root->next->val << " " << root->next->next->val << " " << root->next->next->next->val << endl;
        // Insert from beginning
        TreeNode* node = new TreeNode;
        node->val = 10;
        node->next = root;
        cout << node->val << " " << node->next->val << " " << node->next->next->val << " " << node->next->next->next->val << " " << node->next->next->next->next->val << endl;
        
        // Insert in between
        TreeNode* node1= new TreeNode;
        node1->val = 70;
        node1->next = root->next->next;
        root->next->next = node1;
        cout << root->val << " " << root->next->val << " " << root->next->next->val << " " << root->next->next->next->val << " " << root->next->next->next->next->val << endl;
        
        // Insert at end
        TreeNode* node2= new TreeNode;
        node2->val = 90;
        root->next->next->next->next->next = node2;
        cout << root->next->next->next->next->val << " " << root->next->next->next->next->next->val << endl;

        // Reverse
        TreeNode* p1 = new TreeNode;
        TreeNode* p2 = new TreeNode;
        TreeNode* p3 = new TreeNode;
        p2= root;
        p1= NULL;
        p3=root->next;
        int flag=0;
        while(p3!=NULL){
            p2->next = p1;
            p1=p2;
            p2=p3;
            p3=p3->next;
            flag=1;
        }
        if(flag){
            p2->next = p1;
        }
        p1=p2;
        cout << p1->val << " " << p1->next->val << " " << p1->next->next->val << " " << p1->next->next->next->val << " " << p1->next->next->next->next->val << " " << p1->next->next->next->next->next->val << endl;  
    }
    TreeNode* newNode(int data){
        TreeNode* temp = new TreeNode;
        temp->val = data;
        temp->next = NULL;
        return temp;
    }
};

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
	TreeNode* node = new TreeNode;
    node->val = 100;
    LinkedList g;
    g.Node(node);
}
