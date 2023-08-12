#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node *head;
  Node *last;
};

void isLoop(Node *head) {
  Node *slow = head;
  Node *fast = head;

  while (fast && slow) {
    slow = slow->next;
    fast = (fast->next)->next;
    if (slow == fast) {
      cout << slow->data;
    }
  }
  cout << "No Loop";
}

int main() {
  int arr[] = {2, 4, 5, 7, 9};
  Node *head;
  Node *last;
  head->data = arr[0];
  head->next = nullptr;

  last = head;
  int n = sizeof(arr) / sizeof(int);
  for (int i = 1; i < n; i++) {
    Node *temp;
    temp->data = arr[1];
    temp->next = nullptr;

    last->next = temp;
    last = temp;
  }

  isLoop(head);
}