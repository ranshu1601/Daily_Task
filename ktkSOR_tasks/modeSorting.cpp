#include <iostream>

using namespace std;

void sort(int *arr, int &n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1 - i; j++) {
      int temp;
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int modeSorting(int *arr, int &n) {
  sort(arr, n);
  int maxCount = 0;
  int currentCount = 1;
  int mode = arr[0];

  for (int i = 1; i < n; i++) {
    if (arr[i] == arr[i - 1]) {
      currentCount++;
    } else {
      if (currentCount > maxCount) {
        maxCount = currentCount;

        mode = arr[i - 1];
      }
      currentCount = 1;
    }
  }

  if (currentCount > maxCount) {
    maxCount = currentCount;
    mode = arr[n - 1];
  }
  return mode;
}

int main() {
  int size;
  int *arr = new int[size];
  cout << "Enter Array size: ";
  cin >> size;

  for (int i = 0; i < size; i++) {
    cout << "arr [" << i << "] : ";
    cin >> arr[i];
  }

  cout << modeSorting(arr, size);
}
