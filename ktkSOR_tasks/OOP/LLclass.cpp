#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;
};

class anshuNode : public Node {
  int length;
  Node *head = new Node;
  Node *ptr = head;
  Node *last;

public:
  void createLL(int arr[], int len);
  void displayLL();
  void reverseLL();
  int min();
  int max();
  int countNode();
  bool isPresent(int key);
  void insertAfter(int index, int value);
  void insertHead(int value);
  void popAt(int index);
  void sortLL();
};

// 1. CREATE
void anshuNode::createLL(int arr[], int len) {

  Node *temp;
  length = len;
  head->data = arr[0];
  head->next = nullptr;
  last = head;

  for (int i = 1; i < length; i++) {
    temp = new Node;
    temp->data = arr[i];
    temp->next = nullptr;

    last->next = temp;
    last = temp;
  }
}

// 2. DISPLAY
void anshuNode::displayLL() {
  Node *ptr = head;
  while (ptr != nullptr) {
    cout << ptr->data <<" ";
    ptr = ptr->next;
  }
}

// 3. REVERSE
void anshuNode::reverseLL() {}

// 4. MIN
int anshuNode::min() {
  int min = head->data;
  Node *ptr = head;
  while (ptr != nullptr) {
    if (ptr->data < min) {
      min = ptr->data;
    }
    ptr = ptr->next;
  }
  return min;
}

// 5. MAX
int anshuNode::max() {
  int max = head->data;
  Node *ptr = head;
  while (ptr != nullptr) {
    if (ptr->data > max) {
      max = ptr->data;
    }
    ptr = ptr->next;
  }
  return max;
}

// 6. COUNT
int anshuNode::countNode() {
  int count = 0;
  Node *ptr = head;
  while (ptr != nullptr) {
    count++;
    ptr = ptr->next;
  }
  return count;
}

// 7. IS PRESENT
bool anshuNode::isPresent(int key) {
  Node *ptr = head;
  bool flag = true;
  while (ptr != nullptr) {
    if (ptr->data == key) {
      flag = flag;
      break;
    }
    else{
      flag=!flag;
    }
    ptr = ptr->next;
  }
  return flag;
}

// 8. INSERT-AFTER [INDEX]
void anshuNode::insertAfter(int index, int value) {
  Node *temp = new Node;
  temp->data = value;
  for (int i = 0; i < index - 1; i++) {
    ptr = ptr->next;
  }
  temp->next = ptr->next;
  ptr->next = temp;
}

// 9. INSERT-HEAD
void anshuNode::insertHead(int value) {
  Node *temp = new Node;
  temp->data = value;
  temp->next = head;
  head = temp;
}

// 10. POP
void anshuNode::popAt(int index){
  if(index==1){
    Node *temp = ptr;
    ptr=ptr->next;
    delete temp;
  }
  else{
    Node *p = head;
    Node *q = nullptr;

    for(int i=0 ; i<index-1 ; i++){
      q=p;
      p=p->next;
    }
    q->next = p->next;
    delete p;
  }
}

// 11. SORT
void anshuNode::sortLL() {}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  anshuNode ktk;
  ktk.createLL(arr, 5);
  ktk.displayLL();
  cout<<"\n"<<ktk.min();
  cout<<"\n"<<ktk.max();
  cout<<"\n"<<ktk.countNode();
  cout<<"\n"<<ktk.isPresent(1);
  cout<<"\n";
  ktk.insertAfter(4, 9);
  ktk.displayLL();
  cout<<"\n";
  ktk.insertHead(7);
  ktk.displayLL();
  cout<<"\n";
  ktk.popAt(3);
  ktk.displayLL();
}
