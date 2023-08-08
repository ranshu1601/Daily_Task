#include <iostream>
using namespace std ;

class Node{
    public:
        int data ; 
        Node *next ; 
};

Node *head = new Node ; 

void create(int A[] , int n){
    Node *temp  ;
    Node *last;

    head->data = A[0];
    head->next = nullptr;
    last =  head  ;

    for(int i=1 ; i<n ; i++){
        temp = new Node ; 
        temp->data = A[i];
        temp->next = nullptr;

        last->next = temp ; 
        last = temp ; 
    }
}

void displayLL(Node *p ){
    while(p!=nullptr){
        cout<<p->data<<" ";
        p = p->next ; 
    }
}

void countLL(Node *p){
    int count = 0;
    while(p!=nullptr){
        count++;
        p = p->next ; 
    }
    cout<<"Count is : "<< count;
}

void sumLL(Node *p){
    int sum = 0 ;
    while(p!=nullptr){
        sum = sum+ p->data ; 
        p=p->next ; 
    }
    cout<<"Sum is : "<<sum;
}

void reverseLL(Node *p){
    Node *q;
    Node *r;
    while(p!=nullptr){
        r = q ; 
        q =p ; 
        p = p->next ; 
        q->next = r ;
    }
    head = q;
}

int main(){
    int A[] = {2,5,1,8,0,3};
    int n = sizeof(A)/sizeof(int);
    create(A, n);
    cout<<"LL: ";
    displayLL(head);
    cout<<endl;
    countLL(head);
    cout<<endl;
    sumLL(head);
    cout<<endl;
    reverseLL(head); 
    displayLL(head);
}