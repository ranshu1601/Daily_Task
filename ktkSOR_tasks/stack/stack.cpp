// Stack implimentation using Array

#include <iostream>
using namespace std;

class stack {
public:
  // Data
  int top;
  int size;
  int *arr;

  // Initialize
  stack(int size) {
    this->size = size;
    arr = new int[size];
    top = -1;
  }

  // Behaviour
  void push(int num);
  void pop();
  void peek();
  bool isEmpty();
  void display();
};

// 1. PUSH
void stack::push(int val) {
  if (size - top > 1) {
    top++;
    arr[top] = val;
  } else {
    cout << "Stack Overflow"
         << "\n";
  }
}

// 2. POP
void stack::pop() {
  if (top == -1) {
    cout << "Stack Underflow";
  } else {
    top--;
  }
}

// 3. PEEK
void stack::peek() {
  if (top != -1 && top < size) {
    cout << arr[top];
  } else {
    cout << "No value";
  }
}

// 4. ISEMPTY
bool stack::isEmpty() {
  if (top == -1) {
    return true;
  }
  return false;
}

// 5. DISPLAY
void stack::display() {
  if (top != -1 && top < size) {
    for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
    }
  } else if (top == -1) {
    cout << "stack empty";
  } else {
    cout << "stack full";
  }
}

int main() {
  stack ktk(5);
  ktk.push(10);
  ktk.push(9);
  ktk.push(21);
  ktk.push(3);
  ktk.push(7);
  ktk.display();
  cout<<"\n";
  ktk.pop();
  ktk.display();
}