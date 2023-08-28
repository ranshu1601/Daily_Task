#include <iostream>
#include <vector>

#include <bits/stdc++.h>
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

void modeSorting(int *arr, int &n) {
  vector<int> ans;
  sort(arr, n);

  cout << "\n\n";
  int count = 1;
  for (int i = 1; i < n; i++) {
    if (arr[i] == arr[i - 1]) {
      count++;
    } else if (arr[i] > arr[i - 1]) {
      count = 1;
    }
    ans.push_back(count);
  }

  cout << "Mode is :" << *max_element(ans.begin(), ans.end());
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

  modeSorting(arr, size);
}