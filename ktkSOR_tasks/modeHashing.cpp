#include <iostream>

using namespace std;

int maxVal(int *arr, int &n) {
  int max = arr[0];
  for (int i = 0; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

void modeHashing(int *arr, int &n) {
  int m = maxVal(arr, n);
  int *Ht = new int[m]{0};
  for (int i = 0; i < n; i++) {
    Ht[arr[i]]++;
  }

  cout << "Mode is : " << maxVal(Ht, m);
}

int main() {
  int size;

  int *arr = new int[size];

  cout << "Enter size: ";
  cin >> size;

  for (int i = 0; i < size; i++) {
    cout << "arr [" << i << "] : ";
    cin >> arr[i];
  }

  modeHashing(arr, size);
}