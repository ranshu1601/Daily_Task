#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;
};

int main() {
  // List
  int Arr[] = {3, 4, 5, 6, 7, 9};

  // Node
  Node *head = new Node;
  Node *last;
  head->data = Arr[0];
  head->next = nullptr;

  // initially
  last = head;

  // Val to Node
  int n = sizeof(Arr) / sizeof(int);
  for (int i = 1; i < n; i++) {
    Node *temp = new Node;
    temp->data = Arr[i];
    temp->next = nullptr;

    last->next = temp;
    last = temp;
  }

  // Display
  Node *ptr = head;
  while (ptr != nullptr) {
    cout << ptr->data << " ";
    ptr = ptr->next;
  }
  cout << "\n";

  // reversing LL -------------------->> Sliding Pointer Approach

  // three pointers
  Node *p = head;
  Node *q = nullptr;
  Node *r = nullptr;

  while (p != nullptr) {
    r = q;
    q = p;
    p = p->next;
    q->next = r;
  }
  head = q;

  // Display
  Node *pu = head;
  while (pu != nullptr) {
    cout << pu->data << " ";
    pu = pu->next;
  }
}