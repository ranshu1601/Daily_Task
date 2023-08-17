#include <iostream>
using namespace std;

void mode(int arr[], int size) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[i] == arr[j])
        count++;
    }
  }
  cout << count;
}

int main() {
  int size;
  cout << "size: ";
  cin >> size;
  int *arr = new int[size];

  for (int i = 0; i < size; i++) {
    cout << "enter: ";
    cin >> arr[i];
  }

  mode(arr, size);
}