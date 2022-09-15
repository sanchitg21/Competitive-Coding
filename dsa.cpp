#include <bits/stdc++.h>
using namespace std;

// STACK IMPLEMENTATION USING LINKED LIST

class node{ 
    public: 
    int val;
    node* next;
    node(int data){
        val = data;
    }
};

class Stack{
    node* head;
    public:
    Stack(){
        head=NULL;
    }
    
    void push(int data){    
        node* temp = head;
        head = new node(data);
        head->next = temp;
    }

    int pop(){
        if(!head){
            cout << "Stack is empty" << endl;
            return 0;
        }
        int head_val = head->val;
        head = head->next;
        return head_val;
        
    }
    
    bool is_empty(){
        if(!head){
            return true;
        }
        return false;
    }
};

class Queue2Stacks{
    public:
    Stack g1;
    Stack g2;
    
    void push(int data){
        g1.push(data);
        while(!g2.is_empty){
            g1.push(g2.pop());
        }
        while(!g1.is_empty){
            g2.push(g1.pop());
        }
    }
    void pop(){
        g2.pop();
    }

    int top(){
        return g2.head->val;  
    }
};
int main(){
    Queue2Stacks q;
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(6);
    
}







// QUEUE IMPLEMENTATION USING LINKED LIST
// template<typename T>
// class Queue{
//     node<T>* head;
//     public:
//     Queue(){
//         head=NULL;
//     }
//     void push(int data){    
//         node<T>* temp = head;
//         head = new node<T>(data);
//         head->next = temp;
//     }

//     void pop(){
//         if(!head){
//             cout << "Queue is empty" << endl;
//             return;
//         }
//         if(!head->next){
//             cout << head->val << endl;
//             head=NULL;
//             return;
//         }
//         node<T>* temp = head;
//         while(temp->next->next){
//             temp=temp->next;
//         }
//         cout << temp->next->val << endl;
//         temp->next = NULL;
//     }
    
//     bool is_empty(){
//         if(!head){
//             return true;
//         }
//         return false;
//     }
// };

// int main(){
//     Queue<int> g;
//     cout << g.is_empty() << endl;
//     g.push(3);
//     g.push(7);
//     g.push(9);
//     g.push(8);
//     g.push(0);
//     cout << g.is_empty() << endl;
//     g.pop();
//     g.pop();
//     g.push(4);
//     g.pop();
// }








// DEQUE IMPLEMENTATION USING LINKED LIST
// template<typename T>
// class node{  
//     public:
//     T val;
//     node* next;
//     node* prev;
//     node(T data){
//         val = data;
//     }
// };

// template<typename T>
// class Deque{
//     node<T>* head;
//     node<T>* tail;
//     public:
//     Deque();
//     bool empty();
//     void addFront(T data);
//     void addBack(T data);
//     void removeFront();
//     void removeBack();
//     void reverse();
//     T front();
//     T back();
// };

// template<typename T>
// Deque<T>::Deque(){
//     head= NULL; 
//     tail = NULL;
// }

// template<typename T>
// bool Deque<T>::empty(){
//     if(!head){
//         return true;
//     }
//     return false;
// }

// template<typename T>
// void Deque<T>::addFront(T data){
//     if(!head){
//         head = new node<T>(data);
//         tail = head;
//         head->next= NULL;
//         head->prev= NULL;
//     }
//     else{
//         node<T>* temp = head;
//         head =  new node<T>(data);
//         head->next = temp;
//         head->prev = NULL;
//         temp->prev = head;
//     }
// }

// template<typename T>
// void Deque<T>::addBack(T data){
//     if(!tail){
//         head = new node<T>(data);
//         tail = head;
//         head->next= NULL;
//         head->prev= NULL;
//     }
//     else{
//         tail->next = new node<T>(data);
//         tail->next->prev =tail;
//         tail=tail->next;
//         tail->next=NULL;
//     }
// }

// template<typename T>
// void Deque<T>::removeFront(){
//     head = head->next;
//     cout << head->prev->val;
//     delete head->prev;
//     head->prev = NULL;
// }

// template<typename T>
// void Deque<T>::removeBack(){
//     tail = tail->prev;
//     cout << tail->next->val;
//     delete tail->next;
//     tail->next = NULL;
// }   

// template<typename T>
// void Deque<T>::reverse(){
//     node<T>* temp1 = head;
//     node<T>* temp2 = tail;
//     while(temp2->next!=temp1 && temp2!=temp1){
//         T temp = temp1->val;
//         temp1->val = temp2->val;
//         temp2->val = temp;
//         temp1=temp1->next;
//         temp2=temp2->prev;
//     }
// }

// template<typename T>
// T Deque<T>::front(){
//     return head->val;
// }

// template<typename T>
// T Deque<T>::back(){
//     return tail->val;
// }

// int main(){
//     Deque<int>d;
//     d.addBack(3);
//     d.addFront(5);
//     d.addFront(7);
//     d.addFront(8);
    
//     cout << d.front() << endl;
//     cout << d.back() << endl;
//     d.reverse();
//     cout << d.front() << endl;
//     cout << d.back() << endl;
// }








// Vector ADT using extendable array
// class ArrayVector{
//     int capacity;
//     int n;
//     int* a;

//     public:
//     ArrayVector();
//     int size();
//     bool empty();
//     int at(int i);
//     void erase(int i);
//     void insert(int i, int data);
//     void reserve(int N);
// };

// ArrayVector:: ArrayVector()
// : capacity(0), n(0), a(NULL){}

// int ArrayVector::at(int i){
//     if(i<0 || i>=n){
//         cout << "INDEX OUT OF BOUNDS" << endl;
//         return INT_MIN;
//     }
//     return a[i];
// }

// bool ArrayVector::empty(){
//     return n==0;
// }

// int ArrayVector::size(){
//     return n;
// }

// void ArrayVector::erase(int i){
//     if(i<0 || i>=n){
//         cout << "INDEX OUT OF BOUNDS" << endl;
//     }
//     for(int j=i;j+1<n;j++){
//         a[j]=a[j+1];
//     }
//     n--;
// }

// void ArrayVector::insert(int i, int data){
//     if(n >= capacity){
//         reserve(max(1,2*capacity));
//     }
//     for(int j=n-1;j>=i;j--){
//         a[j+1]=a[j];
//     }
//     a[i]=data;
//     n++;
// }

// void ArrayVector::reserve(int N){
//     if(capacity >= N){
//         return;
//     }
//     int* b= new int[N]; 
//     for(int i=0;i<n;i++){
//         b[i]=a[i];
//     }   
//     a=b;
//     capacity =  N;
// }

// int main(){
//     int n;
//     ArrayVector a;
//     cout << a.empty() << endl;
//     a.insert(0,23);
//     a.insert(0,45);
//     a.insert(0,765);
//     a.insert(0,24);
//     a.insert(0,3456);
//     a.insert(0,3453);
//     a.insert(0,78);
//     a.insert(0,5678);
//     a.insert(0,532);
//     a.insert(0,1);
    
//     cout << a.size() << endl;
// }   








// typedef int Elem;
// class NodeList{
//     private:
//         struct Node{
//             int elem;
//             Node* next;
//             Node* prev;
//         };
//     public:
//         class Iterator { //nested class
//             Node* v; //pointer to node
//             Iterator(Node* x); //create from node
//             public:
//                 int& operator*();
//                 //comparison operator to check if two iterators pointing/not pointing to same object (not just value)
//                 bool operator==(const Iterator& p) const;
//                 bool operator!=(const Iterator& x) const; //to same object (not just value)
//                 Iterator& operator++(); 
//                 Iterator operator++(int);
//                 Iterator& operator--(); 
//                 //only Node list can access private memers and create new operator
//                 friend class NodeList;
//         }; //end of Iterator class
//     private:
//         Node* header; //head of the list
//         Node* trailer; //tail of the list
//         int n; //node counter
//     public:
//         NodeList(); //constructor
//         NodeList(NodeList& L);
//         ~NodeList(); //destructor
//         int size() const;
//         bool empty() const;
//         Iterator begin() const; //beggining position
//         Iterator end() const; //position after last node
//         void operator=(NodeList& L);
//         void insertFront(int value); //invoke insert(begin(), value)
//         void insertBack(int value); //invoke insert(end(), value)
//         void insert(const Iterator& p, int value); //insert Element before position p
//         void eraseFront(); //invoke erase(begin())
//         //invoke erase(--end()), have to decrement to position backwards one node
//         void eraseBack();
//         void erase(const Iterator& p); //remove element at position p
//         int getFront();
//         int getBack();
// };
// int NodeList::getFront(){
//     if(empty()) 
//         return INT_MIN;
//     return header->next->elem;
// }
// int NodeList::getBack(){
//     if(empty()) 
//         return INT_MIN;
//     return trailer->prev->elem;
// }
// NodeList::NodeList() { // constructor
//     n = 0; // initially empty
//     header = new Node; // create sentinels
//     trailer = new Node;
//     header->next = trailer; // have them point to each other
//     trailer->prev = header;
// }
// NodeList::NodeList(NodeList& L)
// {
    
// }
// NodeList::~NodeList() {
//     while (!empty()) {
//         eraseFront();
//     }
//     delete header;
//     delete trailer;
// }
// int NodeList::size() const // list size
// { 
//     return n; 
// }
// bool NodeList::empty() const // is the list empty?
// { 
//     return (n == 0); 
// }
// NodeList::Iterator NodeList::begin() const // begin position is first item
// { 
//     return Iterator(header->next);
// }
// NodeList::Iterator NodeList::end() const // end position is just beyond last
// { 
//     return Iterator(trailer); 
// }
// NodeList::Iterator::Iterator(Node* u) // constructor from Node*
// { 
//     v = u; 
// }
// Elem& NodeList::Iterator::operator*() // reference to the element
// { 
//     return v->elem; 
// }
// bool NodeList::Iterator::operator==(const Iterator& p) const // compare positions
// { 
//     return v == p.v; 
// }
// bool NodeList::Iterator::operator!=(const Iterator& p) const
// { 
//     return v != p.v; 
// }
// NodeList::Iterator& NodeList::Iterator::operator++() // move to next position
// { 
//     v = v->next; return *this; 
// }
// NodeList::Iterator& NodeList::Iterator::operator--() // move to previous position
// { 
//     v = v->prev; 
//     return *this; 
// }
// void NodeList::insert(const Iterator& p, int value) { //insert element before p
//     Node* position = p.v; //pointer to p's node
//     Node* predecessor = position->prev; //u is a pointer to p's previous node
//     Node* newNode = new Node; //new node to insert
//     newNode->elem = value;
//     //newNode's next is pointing to position, and position's previous to newNode
//     newNode->next = position; position->prev = newNode;
//     //newNode's previous is pointing to previous, and previous next to newNode
//     newNode->prev = predecessor; predecessor->next = newNode;
//     n++; //increment n by 1
// }
// void NodeList::insertFront(int value) {
//     return insert(begin(), value);
// }
// void NodeList::insertBack(int value) {
//     return insert(end(), value);
// }
// void NodeList::erase(const Iterator& p) {
//     Node* oldNode = p.v;
//     Node* predecessor = oldNode->prev; //set position's predecessor
//     Node* successor = oldNode->next; //set position's next node
//     predecessor->next = successor; 
//     successor->prev = predecessor; //change links
//     delete oldNode;
//     n--; //decrement n by 1
// }
// void NodeList::eraseFront() {
//     return erase(begin());
// }
// void NodeList::eraseBack() {
//     return erase(--end());
// }       
// int main(){
//     NodeList* L = new NodeList();
//     L->insertFront(10);
//     L->insertFront(5);
//     L->insertFront(7);
//     L->insertFront(93);
//     L->insertFront(43);
//     L->insertFront(12);
//     L->insertFront(32);
//     L->insertFront(1);
//     L->insertFront(77);
//     L->insertFront(45);
//     L->insertFront(56);
//     L->insertFront(69);
//     int flag=1;
//     while(flag){
//         NodeList::Iterator it= L->begin();
//         NodeList::Iterator temp=it;
//         flag=0;
//         ++temp;
//         while(temp != L->end()){
//             if(*it > *temp){
//                 flag=1;
//                 int val = *temp;
//                 *temp = *it;
//                 *it = val;
//             }
//             ++it;
//             ++temp;
//         }
//     }
//     NodeList::Iterator temp=L->begin();
//     while(temp!=L->end()){
//         cout<<*temp<<endl;
//         ++temp;
//     }
//     return 0;
// }

