//  NOT CORRECT ONLY FOR LEARNING PURPOSE 

#include <iostream>
using namespace std;

class Node {
  int data;
  Node *next;
  Node *prev;

public:
  void createDLL(int arr[], int length);
  void displayDLL();
};

void Node::createDLL(int arr[], int length) {
  Node *head = new Node;
  Node *last;

  // Head
  head->data = arr[0];
  head->next = nullptr;
  head->prev = nullptr;

  last->next = nullptr;
  last->prev = nullptr;

  last = head;

  for (int i = 1; i < length; i++) {
    Node *temp = new Node;
    temp->data = arr[i];
    temp->next = nullptr;
    temp->prev = head;
    last->next = temp;

    last = temp;
  }
}

void Node::displayDLL() {
  Node *head = new Node;
  Node *last;
  Node *ptr = head;
  while (ptr != nullptr) {
    cout << ptr->data << " ";
    ptr = ptr->next;
  }
}