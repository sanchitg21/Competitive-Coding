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

struct bst{
    lli val;
    bst *left,*right;
};

class BST{
    public:
    bst* node = new bst;
    bst* temp = new bst;
    BST(bst* root){
        node = root;
    }
    void display(){
        newnode(40);
        newnode(41);
        newnode(42);
        newnode(50);
        newnode(30);
        newnode(20);
        newnode(35);
        newnode(46);
        newnode(60);
        newnode(70);

        //bfs
        queue<bst*>q;
        q.push(node);
        while(!q.empty()){
            bst* temp = q.front();
            q.pop();
            cout << temp->val << endl;
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
    
    void newnode(lli data){
        temp = node;
        lli count=0;
        while(temp){
            count++;
            if(temp->val > data){
                if(temp->left == NULL){
                    temp->left = new bst;
                    temp= temp->left;
                    break;
                }
                temp= temp->left;
            }
            else{
                if(temp->right == NULL){
                    temp->right = new bst;
                    temp= temp->right;
                    break;
                }
                temp= temp->right;
            }
        }
        temp->val = data;
    }
    
};

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
	lli n,m,t,i,j,k;
    bst* root= new bst;
    root->val = 45;
    BST g(root);
    g.display();
}   
