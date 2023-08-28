#include <iostream>
using namespace std;

void sortArr(int *arr, int &n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp;
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void twoSumSorting(int *arr, int &n, int sum) {
  sortArr(arr, n);
  int i = 0, j = n - 1;
  while (i < j) {
    if (arr[i] + arr[j] == sum) {
      cout << arr[i] << " & " << arr[j]<<" ";
      i++;
      j--;
    } else if (arr[i] + arr[j] < sum) {
      i++;
    } else {
      j--;
    }
  }
}

int main() {
  int size, sum;
  int *arr = new int[size];

  cout << "Input Size: ";
  cin >> size;

  for (int i = 0; i < size; i++) {
    cout << "arr[" << i << "] : ";
    cin >> arr[i];
  }
  cout << "Enter Sum: ";
  cin >> sum;
  twoSumSorting(arr, size, sum);
}