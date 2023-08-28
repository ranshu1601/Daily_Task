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

void twoSumHashing(int *arr, int &n, int sum) {
  int m = maxVal(arr, n) + 1;
  int *Ht = new int[m]{0};

  for (int i = 0; i < n; i++) {
    if (sum - arr[i] >= 0) {
      if (Ht[sum - arr[i]] != 0) {
        cout << arr[i] << " & " << sum - arr[i] << "  ";
      }
    }

    Ht[arr[i]]++;
  }
}

int main() {
  int size, sum;
  int *arr = new int[size];

  cout << "Enter Size: ";
  cin >> size;

  for (int i = 0; i < size; i++) {
    cout << "arr [" << i << "] : ";
    cin >> arr[i];
  }

  cout << "Sum: ";
  cin >> sum;

  twoSumHashing(arr, size, sum);
}