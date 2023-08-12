// Finding Middle element Of LL

#include<iostream>
using namespace std ; 

class Node{
    public:
        int data;
        Node *next;
};

class doNode : public Node {
    Node *head = new Node;
    Node *last;

    // Functions
    public:
        void create(int arr[] , int len);
        void middle(int len);
};

void doNode::create(int arr[], int len){
    head->data = arr[0];
    head->next = nullptr ; 

    last = head;

    for(int i=1 ; i<len ; i++){
        Node *temp = new Node ; 
        temp->data = arr[i];
        temp->next = nullptr;

        last->next = temp;
        last = temp;
    }

    Node *ptr = head;
    while(ptr!=nullptr){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }

}

void doNode::middle(int len){
    int mid = len/2;
    int i=1;
    Node *p = head;
    while(i<=mid){
        p=p->next;
        i++;
    }
    cout<<"Num: "<<p->data;
}

int main(){
    doNode ktk;
    int arr[] ={3,5,6,7,9,10};
    int n = sizeof(arr)/sizeof(int); 
    ktk.create(arr, n);
    cout<<"\n";
    ktk.middle(n);
}