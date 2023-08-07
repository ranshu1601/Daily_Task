#include <iostream>
using namespace std;

class anshuVector {
  int size;
  int length;
  int *arr;

public:
  // constructor
  anshuVector() {
    size = 1;
    length = 0;
    arr = new int[1];
  }

  // destructor
  ~anshuVector() { delete[] arr; }

  //   Function definition
  void push_back(int value);
  int at(int index);
  int max();
  int min();
  int sumArr();
  int count();
  int get(int index);
  void pop_back();
  void pop_at(int index);
  void insert(int index, int value);
  void reverse();
  int find(int value);
  void display();
};

// 1. PUSH_BACK
void anshuVector::push_back(int value) {
  if (length == size) {

    int *newarr = new int[size * 2];
    for (int i = 0; i < size; i++) {
      newarr[i] = arr[i];
    }
    delete[] arr;
    arr = newarr;
    newarr = nullptr;
    size *= 2;
  }
  arr[length] = value;
  length++;
}

// 2. AT()
int anshuVector::at(int index) {
  int ans;
  if (index >= 0 && index < length) {
    ans = arr[index];
  }
  return ans;
}

// 3. MAX()
int anshuVector::max() {
  int ans = arr[0];
  for (int i = 0; i < length; i++) {
    if (arr[i] > ans) {
      ans = arr[i];
    }
  }
  return ans;
}

// 4. MIN()
int anshuVector::min() {
  int ans = arr[0];
  for (int i = 0; i < length; i++) {
    if (arr[i] < ans) {
      ans = arr[i];
    }
  }
  return ans;
}

// 5. GET()
int anshuVector::get(int index) {
  int ans;
  if (index >= 0 && index < length) {
    ans = arr[index];
  }
  return ans;
}

// 6. SUM()
int anshuVector::sumArr() {
  int sumAll = 0;
  for (int i = 0; i < length; i++) {
    sumAll += arr[i];
  }
  return sumAll;
}

// 7. COUNT()
int anshuVector::count() {
  return length;
}

// 8. POP_BACK
void anshuVector::pop_back() { length--; }

// 9. POP_AT
void anshuVector::pop_at(int index) {
  if (index >= 0 && index < length) {
    int x = arr[index];
    for (int i = index; i < length - 1; i++) {
      arr[i] = arr[i + 1];
    }
    length--;
  }
}

// 10. INSERT
void anshuVector::insert(int index, int value) {
  if (index >= 0 && index < length) {
    int i = length;
    while (i > index) {
      arr[i] = arr[i - 1];
      i--;
    }
    arr[index] = value;
    length++;
  }
}

// 11. REVERSE
void anshuVector::reverse() {
  for (int i = 0, j = length - 1; i < length / 2; i++, j--) {
    int temp;
    temp = arr[0];
    arr[0] = arr[j];
    arr[j] = temp;
  }
}

// 12. FIND
int anshuVector::find(int value) {
  int ans;
  for (int i = 0; i < length; i++) {
    if (arr[i] == value) {
      ans = i;
    }
  }
  return ans;
}

// 13. DISPLAY
void anshuVector::display() {
  for (int i = 0; i < length; i++) {
    cout << arr[i] << " ";
  }
}