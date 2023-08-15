// Write a program to reverse an array or string

#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int> arr;
  int length;
  cout << "length: ";
  cin >> length;

  for (int i = 0; i < length; i++) {
    int value;
    cout << "Enter: ";
    cin >> value;
    arr.push_back(value);
  }

  for (int i = 0; i < length; i++) {
    cout << arr[i] << " ";
  }

  for (int i = 0, j = length - 1; i < length / 2; i++, j--) {
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }

  cout << "\n";
  for (int i = 0; i < length; i++) {
    cout << arr[i] << " ";
  }
}