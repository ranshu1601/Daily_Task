#include <iostream>
using namespace std;

template <typename T> class Node {
public:
  T data;
  Node *next;
};

template <typename T> class anshuNode : public Node<T> {
  Node<T> *head;
  Node<T> *last;
  Node<T> *ptr;
  int length;

public:
  // constructor
  anshuNode() {
    head = new Node<T>;
    ptr = head;
  }

  // destructor
  ~anshuNode() {
    delete head;
    delete last;
    delete ptr;
  }

  //   Function definition
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
};

// 1. CREATE
template <typename T> void anshuNode<T>::createLL(int arr[], int len) {

  Node<T> *temp;
  length = len;
  head->data = arr[0];
  head->next = nullptr;
  last = head;

  for (int i = 1; i < length; i++) {
    temp = new Node<T>;
    temp->data = arr[i];
    temp->next = nullptr;

    last->next = temp;
    last = temp;
  }
}

// 2. DISPLAY
template <typename T> void anshuNode<T>::displayLL() {
  Node<T> *ptr = head;
  while (ptr != nullptr) {
    cout << ptr->data << " ";
    ptr = ptr->next;
  }
}

// 3. REVERSE
template <typename T> void anshuNode<T>::reverseLL() {
  Node<T> *p = head;
  Node<T> *q = nullptr;
  Node<T> *r = nullptr;
  while (p != nullptr) {
    r = q;
    q = p;
    p = p->next;
    q->next = r;
  }
  head = q;
}

// 4. MIN
template <typename T> int anshuNode<T>::min() {
  int min = head->data;
  Node<T> *ptr = head;
  while (ptr != nullptr) {
    if (ptr->data < min) {
      min = ptr->data;
    }
    ptr = ptr->next;
  }
  return min;
}

// 5. MAX
template <typename T> int anshuNode<T>::max() {
  int max = head->data;
  Node<T> *ptr = head;
  while (ptr != nullptr) {
    if (ptr->data > max) {
      max = ptr->data;
    }
    ptr = ptr->next;
  }
  return max;
}

// 6. COUNT
template <typename T> int anshuNode<T>::countNode() {
  int count = 0;
  Node<T> *ptr = head;
  while (ptr != nullptr) {
    count++;
    ptr = ptr->next;
  }
  return count;
}

// 7. IS PRESENT
template <typename T> bool anshuNode<T>::isPresent(int key) {
  Node<T> *ptr = head;
  bool flag = true;
  while (ptr != nullptr) {
    if (ptr->data == key) {
      flag = flag;
      break;
    } else {
      flag = !flag;
    }
    ptr = ptr->next;
  }
  return flag;
}

// 8. INSERT-AFTER [INDEX]
template <typename T> void anshuNode<T>::insertAfter(int index, int value) {
  Node<T> *temp = new Node<T>;
  temp->data = value;
  for (int i = 0; i < index - 1; i++) {
    ptr = ptr->next;
  }
  temp->next = ptr->next;
  ptr->next = temp;
  length++;
}

// 9. INSERT-HEAD
template <typename T> void anshuNode<T>::insertHead(int value) {
  Node<T> *temp = new Node<T>;
  temp->data = value;
  temp->next = head;
  head = temp;
  length++;
}

// 10. POP
template <typename T> void anshuNode<T>::popAt(int index) {
  if (index == 1) {
    Node<T> *temp = ptr;
    ptr = ptr->next;
    delete temp;
  } else {
    Node<T> *p = head;
    Node<T> *q = nullptr;

    for (int i = 0; i < index - 1; i++) {
      q = p;
      p = p->next;
    }
    q->next = p->next;
    delete p;
  }
  length--;
}