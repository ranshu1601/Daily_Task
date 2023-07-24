// Write a program to cyclically rotate an array by one

#include <iostream>
using namespace std;

void rotate(int arr[], int n) {
  int last = arr[n - 1];
  for (int i = n - 1; i > 0; i--) {
    arr[i] = arr[i - 1];
  }
  arr[0] = last;
}

int main() {
  int size;
  cout << "Enter array size: ";
  cin >> size;
  int *arr = new int[size];
  cout<<"Enter array---"<<endl;

  for (int i = 0; i < size; i++) {
    cout << "enter: ";
    cin >> arr[i];
  }

  cout << "Initial Array: ";
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  cout << "After Rotation: ";
  rotate(arr, size);
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}