#include <iostream>
using namespace std;
class Node {
public:
  int data;
  Node *next;
};

int main() {
  int A[] = {1, 2, 3, 4};
  Node *head = new Node;
  Node *last;
  Node *temp;
  head->data = A[0];
  head->next = nullptr;
  last = head;
  int n = sizeof(A) / sizeof(int);

  for (int i = 1; i < n; i++) {
    temp = new Node;
    temp->data = A[i];
    temp->next = nullptr;

    last->next = temp;
    last = temp;
  }
  Node *p = head;

  while (p != nullptr) {
    cout << p->data << " -> ";
    p = p->next;
  }
}