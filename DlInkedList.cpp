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
    TreeNode *next,*prev;
};

class DoublyLinkedList{
    public:
    void Node(TreeNode* root, TreeNode* leaf){
        root->next = newNode(30);
        root->next->next = newNode(50);
        root->next->next->next = newNode(80);
        leaf = root->next->next->next;
        leaf->prev = root->next->next;
        leaf->prev->prev = root->next;
        leaf->prev->prev->prev = root; 
        cout << root->val << " " << root->next->val << " " << root->next->next->val << " " << root->next->next->next->val << endl;
        cout << leaf->val << " " << leaf->prev->val << " " << leaf->prev->prev->val << " " << leaf->prev->prev->prev->val << endl;
        
        // Insert from beginning
        TreeNode* node1 = new TreeNode;
        node1->val = 10;
        node1->next = root;
        root->prev = node1;
        cout << node1->val << " " << node1->next->val << " " << node1->next->next->val << " " << node1->next->next->next->val << " " << node1->next->next->next->next->val << endl;
        cout << leaf->val << " " << leaf->prev->val << " " << leaf->prev->prev->val << " " << leaf->prev->prev->prev->val << " " << leaf->prev->prev->prev->prev->val <<  endl;
        
        // Insert in between
        TreeNode* node2= new TreeNode;
        node2->val = 70;
        node2->next = node1->next->next;
        node2->prev = node1->next;
        node1->next->next = node2;
        node1->next->next->next->prev = node2; // same as "leaf->prev->prev->prev = node2";
        cout << node1->val << " " << node1->next->val << " " << node1->next->next->val << " " << node1->next->next->next->val << " " << node1->next->next->next->next->val << " " << node1->next->next->next->next->next->val << endl;
        cout << leaf->val << " " << leaf->prev->val << " " << leaf->prev->prev->val << " " << leaf->prev->prev->prev->val << " " << leaf->prev->prev->prev->prev->val << " " << leaf->prev->prev->prev->prev->prev->val << endl;
        
        //Deletion
        TreeNode* remove= new TreeNode;
        remove= node1->next->next;
        remove->prev->next = remove->next;
        remove->next->prev = remove->prev;
        cout << node1->val << " " << node1->next->val << " " << node1->next->next->val << " " << node1->next->next->next->val << " " << node1->next->next->next->next->val  << endl;
        cout << leaf->val << " " << leaf->prev->val << " " << leaf->prev->prev->val << " " << leaf->prev->prev->prev->val << " " << leaf->prev->prev->prev->prev->val << endl;
        cout << remove->val << endl;
        free(remove);

        // Reverse
        TreeNode* low = new TreeNode;
        TreeNode* high = new TreeNode;
        low= node1;
        high=low;
        while(low!=NULL){
            high = low->next;
            low->next = low->prev;
            low->prev = high;
            low = high;
        }
        low = node1;
        node1 = leaf;
        leaf= low;
        cout << node1->val << " " << node1->next->val << " " << node1->next->next->val << " " << node1->next->next->next->val << " " << node1->next->next->next->next->val  << endl;
        cout << leaf->val << " " << leaf->prev->val << " " << leaf->prev->prev->val << " " << leaf->prev->prev->prev->val << " " << leaf->prev->prev->prev->prev->val << endl;
        
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
    TreeNode* leaf = new TreeNode;
    DoublyLinkedList g;
    g.Node(node,leaf);
}