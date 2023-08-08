#include <iostream>
using namespace std ; 

class Node{
  public:
    int data;
    Node *next ;
};

int main(){
  int A[] = {1,34,67,12,31,9};

  Node *head = new Node;
  Node *last;
  Node *temp;

  head->data = A[0];
  head->next = nullptr;
  last = head ;

  int n=sizeof(A)/sizeof(int);
  // create LL
  for(int i=1 ; i<n ; i++){
    temp = new Node;
    
    temp->data = A[i];
    temp->next = nullptr;

    last->next = temp;
    last=temp;
  }

  //displaying LL

  Node *p = head;
  while(p!=nullptr){
    cout<<p->data<<" ";
    p=p->next;
  }
}