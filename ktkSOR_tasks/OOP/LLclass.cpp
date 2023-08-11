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
  Node *last;

public:
  void createLL(int arr[], int len);
  void displayLL();
  void reverseLL();
  int min();
  int max();
  void pushBack();
  void pushFront();
  void insertAt();
  void sortLL();
};

void anshuNode::createLL(int arr[] , int len) {

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

void anshuNode::displayLL() {
  Node *ptr = head;
  while (ptr != nullptr) {
    cout << ptr->data << "->";
    ptr = ptr->next;
  }
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  anshuNode ktk;
  ktk.createLL(arr, 5);
  ktk.displayLL();
}
