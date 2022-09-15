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
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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

// class Sanchit{
//     friend class Samarth;
//     friend class Luv;
//     private:
//     int name;
//     public:
//     int instructorInCharge;
//     int numberOfStudents;
//     int totalMarks;
    
//     Sanchit(){
//         // c=57;
//     }

//     Sanchit(int name,int instructorInCharge,int numberOfStudents,int totalMarks){
//         this->name = name;
//         this->instructorInCharge = instructorInCharge;
//         this->numberOfStudents = numberOfStudents;
//         this->totalMarks = totalMarks;
//     }
    
// };

// class Samarth : public Sanchit{
//     friend class Luv;
//     private:
//     int a;
//     int b;
//     public:
//     Samarth(){    
//         name = 69;
//     }
// };

// class Luv : Samarth{
//     friend class Saksham;
//     Luv(){
//         name = 3;
//         a=1;
//         b=2;
//         c=3;
//     }
//     int c;  
// };

// class Saksham: Luv{
//     Saksham(){
//         c=3;
//     }
// };

// int main(){
//     return 0;
// }










// class Sanchit{
//     public:
//     int name;
//     int instructorInCharge;
//     int numberOfStudents;
//     int totalMarks;
    
//     Sanchit(){}

//     Sanchit(int name,int instructorInCharge,int numberOfStudents,int totalMarks){
//         this->name = name;
//         this->instructorInCharge = instructorInCharge;
//         this->numberOfStudents = numberOfStudents;
//         this->totalMarks = totalMarks;
//     }
    
// };

// class Lab: public Sanchit{
//     vector<int> labMarks;
//     int solve();
// };

// int Lab :: solve(){
//     int f=69;
//     return f;
// } 









// #include <bits/stdc++.h>
// using namespace std;

// template<typename T>
// class List{
//     private:
//     int step;
//     public:
//     vector<T>v;
//     List(int length);
//     void insert(T s);
//     T prefixsum(T a,T b);
// };
// template<typename T>
// List<T>::List(int length){
//     v.resize(length);
//     step=0;
// }

// template<typename T> 
// void List<T>:: insert(T s){
//     v[step++]=s;
// }

// template<typename T>
// void merge(vector<T>&a,vector<T>&b,vector<T>&v){
//     int low=0;
//     int high=0;
//     int step=0;
//     int n= a.size();
//     int m = b.size();
//     while(low<n || high<m){
//         while(low<n && high<m){
//             if(a[low]<b[high]){
//                 v[step++]=a[low++];
//             }
//             else{
//                 v[step++]=b[high++];
//             }
//         }
//         while(low<n){
//             v[step++]=a[low++];
//         }
//         while(high<m){
//             v[step++]=b[high++];
//         }
//     }
// }

// template<typename T>
// T List<T>:: prefixsum(T low,T high){
//     return v[high]-v[low-1];
// }

// int main(){
//     List<string>l1(5);
//     List<string>l2(3);
//     l1.insert("aay");
//     l1.insert("aaz");
//     l1.insert("abx");
//     l1.insert("aby");
//     l1.insert("abz");
//     l2.insert("aax");
//     l2.insert("aazz");
//     l2.insert("az");

//     vector<string>v((l1.v).size()+(l2.v).size());
//     merge<string>((l1.v),(l2.v),v); 
    
//     for(int i=0;i<v.size();i++){
//         cout << v[i] << endl;
//     }

//     List<int>l(5);
//     l.insert(6);
//     l.insert(1);
//     l.insert(4);
//     l.insert(8);
//     l.insert(3);
//     // prefixsum
//     (l.v).insert((l.v).begin(),0);
//     for(int i=2;i<(l.v).size();i++){
//         (l.v)[i]=(l.v)[i]+(l.v)[i-1];
//     }
//     cout << l.prefixsum(1,3) << endl;
//     cout << l.prefixsum(1,5) << endl;
//     cout << l.prefixsum(4,5) << endl;
//     cout << l.prefixsum(1,1) << endl;
//     cout << l.prefixsum(2,4) << endl;
// }



// template<typename T>
// class node{
//     public:
//     node<T>* next;
//     node<T>* prev;
//     int val;
//     node<T>(T data){
//         val=data;       
//     }
// };

// template<typename T>
// class DLL{
//     public:
//     node<T>* head=NULL;
//     node<T>* temp=NULL;
    
//     void insertinlist(T data);
//     void display();
// };

// template<typename T> 
// void DLL<T>:: insertinlist(T data){
//     if(!head){
//         head= new node<T>(data);
//         return;
//     }
//     node<T>* temp=head;
//     while(temp->next){
//         temp=temp->next;
//     }
//     temp->next = new node<T>(data);
//     node<T>* a= temp;
//     temp=temp->next;
//     temp->prev=a;
// }

// template<typename T> 
// void DLL<T>:: display(){
//     node<T>* temp=head;
//     while(temp){
//         cout << temp->val << " ";
//         temp=temp->next;
//     }
//     cout << endl;
// }


// int main(){
//     DLL<int>a;
//     a.insertinlist(6);
//     a.insertinlist(3);
//     a.insertinlist(4);
//     a.insertinlist(5);
//     a.insertinlist(8);
//     a.display();
//     node<int>* temp = (a.head);
//     while(temp->next){
//         temp=temp->next;
//     }
//     while(temp){
//         cout << temp->val << " ";
//         temp=temp->prev;
//     }
//     cout << endl;
// }


// template<typename T>class SinglyLinkedNode{
//     public:
//     T val;
//     SinglyLinkedNode<T>* next;
// };

// template<typename T>class SinglyLinkedList{
//     public:
//     SinglyLinkedNode<T>* head;
//     lli n;
//     SinglyLinkedList();
//     SinglyLinkedNode<T>* newNode(T data);
//     void insertEndRecursive(const T &data, SinglyLinkedNode<T> *current);
//     void deleteEndRecursive(SinglyLinkedNode<T> *current);
//     void printForwardRecursive(SinglyLinkedNode<T> *current);
//     void printBackwardRecursive(SinglyLinkedNode<T> *current);
//     void moveNodeRecursive(int oldPosition, int newPosition, int count, SinglyLinkedNode<T> *current);
//     void insertEnd(const T &data);
//     void deleteEnd();
//     void printForward();
//     void printBackward(); 
//     void moveNode(T a,T b); 
//     void move(SinglyLinkedNode<T>* a,SinglyLinkedNode<T>* b,T c);
//     void reorder(SinglyLinkedNode<T>* a,T b);
// };

// template<typename T>
// SinglyLinkedNode<T>* SinglyLinkedList<T>::newNode(T data){
//     SinglyLinkedNode<T>* temp = new SinglyLinkedNode<T>;
//     temp->val = data;
//     return temp;
// }

// template<typename T>
// SinglyLinkedList<T>::SinglyLinkedList(){
//     head=NULL;
//     n=0;
// }

// template<typename T>
// void SinglyLinkedList<T>::insertEndRecursive(const T &data, SinglyLinkedNode<T> *current){
//     if(n==0){
//         head= newNode(data);
//         return;
//     }
//     if(!current->next){
//         current->next = newNode(data);
//         return;
//     }
//     insertEndRecursive(data,current->next);
// }

// template<typename T>
// void SinglyLinkedList<T>::deleteEndRecursive(SinglyLinkedNode<T> *current){
//     if(!current->next){
//         delete current;
//         return;
//     }
//     deleteEndRecursive(current->next);
// }   

// template<typename T>
// void SinglyLinkedList<T>::printForwardRecursive(SinglyLinkedNode<T> *current){
//     if(!current){
//         return;
//     }
//     cout << current->val << " ";
//     printForwardRecursive(current->next);
// }

// template<typename T>
// void SinglyLinkedList<T>::printBackwardRecursive(SinglyLinkedNode<T> *current){
//     if(!current){
//         return;
//     }
//     printBackwardRecursive(current->next);
//     cout << current->val << " ";
// }

// template<typename T>
// void SinglyLinkedList<T>::moveNodeRecursive(int oldPosition, int newPosition, int count, SinglyLinkedNode<T> *current){

// }

// template<typename T>
// void SinglyLinkedList<T>::insertEnd(const T &data){
//     insertEndRecursive(data,head);
//     n++;
// }

// template<typename T>
// void SinglyLinkedList<T>::deleteEnd(){
//     if(n>0){
//         deleteEndRecursive(head);
//         n--;
//     }
//     if(!n){
//         head=NULL;
//     }
// }

// template<typename T>
// void SinglyLinkedList<T>::printForward(){
//     printForwardRecursive(head);
// }

// template<typename T>
// void SinglyLinkedList<T>::printBackward(){
//     printBackwardRecursive(head);
// }

// template<typename T>
// void SinglyLinkedList<T>::moveNode (T oldPosition, T newPosition){
//     T n = oldPosition;
//     SinglyLinkedNode<T>* temp = head;
//     while(--n){
//         temp=temp->next;
//     }
//     move(temp,temp,newPosition-oldPosition);
// }

// template<typename T>
// void SinglyLinkedList<T>::move (SinglyLinkedNode<T>* node, SinglyLinkedNode<T>* root, T newPosition){
//     if(!newPosition){
//         T a=node->val;
//         node->val = root->val;
//         root->val = a;
//         return; 
//     }
//     move(node->next,root,newPosition-1);
// }

// template<typename T>
// void SinglyLinkedList<T>:: reorder(SinglyLinkedNode<T>* head,T step){
//     if(step2==0){
//         cout << head->val << endl;
//     }
//     solve()
// }
// int main(){
//     IOS
// 	lli n,m,t,i,j,k;
//     SinglyLinkedList<lli> g;
//     g.insertEnd(1);
//     g.insertEnd(2);
//     g.insertEnd(3);
//     g.insertEnd(4);
//     g.insertEnd(5);
//     g.insertEnd(6);
//     g.printForward();
//     cout << endl;
//     g.moveNode(2,4);
//     g.printForward();
//     g.reorder(g.head,1);
// }





// STACK ADT
// template<typename T>class Node{
//     public:
//     T val;
//     Node<T>* next;
// };

// template<typename T>
// class Stack{
//     public:
//     Node<T>* head;
//     Stack(){
//         head=NULL;
//     }
//     void pop(){
//         if(isEmpty()){
//             cout << "Stack is empty" << endl;
//             return;
//         }
//         head=head->next;
//     }
//     void push(T data){
//         Node<T>* temp = head;
//         head= new Node<T>;
//         head->val=data;
//         head->next=temp;
//     }
//     bool isEmpty(){
//         if(!head){
//             return true;
//         }
//         return false;
//     }
//     void showHead(){
//         if(!head){
//             return;
//         }
//         cout << head->val << endl;
//     }
//     bool validsequence(string a){
//         for(int i=0;i<a.length();i++){
//             if(a[i] == '('){
//                 push(a[i]);
//             }
//             else{
//                 if(isEmpty()){
//                     return false;
//                 }
//                 pop();
//             }
//         }
//         if(isEmpty()){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };

// int main(){
//     Stack<char>s;
//     string a;
//     cin >> a;
//     cout << s.validsequence(a) << endl;
// }



// QUEUE ADT
// template<typename T>class Node{
//     public:
//     T val;
//     Node<T>* next;
// };

// template<typename T>
// class Queue{
//     public:
//     Node<T>* head;
//     Node<T>* tail;
//     Queue(){
//         head=NULL;
//         tail=NULL;
//     }
//     void pop(){
//         if(isEmpty()){
//             cout << "Queue is empty" << endl;
//             return;
//         }
//         head=head->next;
//     }
//     void push(T data){
//         if(isEmpty()){
//             head= new Node<T>;
//             head->val =data;
//             tail = head;
//             return;
//         }
//         tail->next = new Node<T>;
//         tail=tail->next;
//         tail->val = data;
//     }
//     bool isEmpty(){
//         if(!head){
//             return true;
//         }
//         return false;
//     }
//     void showHead(){
//         if(!head){
//             return;
//         }
//         cout << head->val << endl;
//     }
// };

// // STACK ADT USING 2 QUEUES

// template<typename T>
// class Stack{
//     public:
//     Node<T>* head;
//     queue<T>q1;
//     queue<T>q2;
//     Stack(){
//     }
//     void pop(){
//         if(isEmpty()){
//             cout << "Stack is empty" << endl;
//             return;
//         }
//         q2.pop();
//     }
//     void push(T data){
//         q1.push(data);
//         while(!q2.empty()){
//             q1.push(q2.front());
//             q2.pop();
//         }
//         while(!q1.empty()){
//             q2.push(q1.front());
//             q1.pop();
//         }
//     }
//     bool isEmpty(){
//         if(q2.empty()){
//             return true;
//         }
//         return false;
//     }
//     void showHead(){
//         if(q2.empty()){
//             cout << "Empty" << endl;
//             return;
//         }
//         cout << q2.front() << endl;
//     }
// };
// int main(){
//     Stack<int>s;
//     cout << s.isEmpty() << endl;
//     s.showHead();
//     s.push(4);
//     s.showHead();
//     s.pop();
//     s.showHead();
// }

template<typename T>
class node{
    public:
    node<T>* next;
    node<T>* prev;
    int val;
    node<T>(T data){
        val=data;       
    }
};

template<typename T>
class Deque{
    public:
    node<T>* head=NULL;
    node<T>* tail=NULL;
    void insertfrombegin(T data);
    void insertfromend(T data);
    void deletefrombegin();
    void deletefromend();
    void displayfrombegin();
    void displayfromend();
    void findStockSpan();
};

template<typename T> 
void Deque<T>:: insertfrombegin(T data){
    if(!head){
        head= new node<T>(data);
        tail=head;
        return;
    }
    head->prev=new node<T>(data);
    head->prev->next = head;
    head->prev->prev =  NULL;
    head=head->prev;
}

template<typename T>
void Deque<T>:: insertfromend(T data){
    if(!head){
        head = new node<T>(data);
        tail=head;
        return;
    }
    tail->next = new node<T>(data);
    tail->next->next= NULL;
    tail->next->prev = tail;
    tail=tail->next;
}

template<typename T>
void Deque<T>:: deletefrombegin(){
    if(!head){
        return;
    }
    head=head->next;
    head->prev=NULL;
}

template<typename T>
void Deque<T>:: deletefromend(){
    if(!tail){
        return;
    }
    tail=tail->prev;
    tail->next=NULL;
}

template<typename T>
void Deque<T>:: displayfrombegin(){
    node<T>* temp=head;
    while(temp){
        cout << temp->val << " ";
        temp=temp->next;
    }
    cout << endl;
}


template<typename T>
void Deque<T>:: displayfromend(){
    node<T>* temp=tail;
    while(temp){
        cout << temp->val << " ";
        temp=temp->prev;
    }
    cout << endl;
}

template<typename T>
void Deque<T>:: findStockSpan (){  
    node<T>* temp = head;
    int count=-1;
    T mx=0;
    while(temp){
        if(temp->val > mx){
            mx=temp->val;
            count++;
        }
        else{
            count=0;
            mx=temp->val;
        }
        temp=temp->next;
        cout << count+1 << " ";
        
    }
    cout << endl;
}

    
int main(){
    Deque<int>a;
    a.insertfrombegin(6);
    a.insertfromend(3);
    a.insertfrombegin(4);
    a.insertfrombegin(5);
    a.insertfromend(8);
    a.displayfrombegin();
    a.findStockSpan();
    Deque<char>b;
    string s;
    cin >> s;
    for(int i=0;i<s.length();i++){
        b.insertfrombegin(s[i]);
    }
    b.displayfrombegin();

}
