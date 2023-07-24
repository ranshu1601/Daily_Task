// Given an array of n numbers , give an algorithm for checking whether there
// are any duplicate elements in the array or not .

// Brute Force approach Time Complexity of O(n^2) and space O(1)
/*
#include <iostream>
using namespace std;

void checkDuplicate(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] == arr[j]) {
        cout << "Duplicate exists: " << arr[i];
        return;
      }
    }
  }
  cout << "No Duplicate present ";
}

int main() {
  int size;
  int *arr = new int[size];
  cout << "Enter array size: ";
  cin >> size;
  cout << "Enter Array-- " << endl;
  for (int i = 0; i < size; i++) {
    cout << "enter: ";
    cin >> arr[i];
  }

  checkDuplicate(arr, size);
}

*/

// Sorting approach Time Complexity of O(nlogn) {Complexity for sorting} and
// space O(1)
#include <iostream>
#include <iterator>
using namespace std;

int *sortHorha(int arr[], int n) {
  int temp;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] > arr[j]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  return arr;
}

void checkDuplicate(int arr[], int n) {
  sortHorha(arr, n);
  for (int i = 0; i < n; i++) {
    if (arr[i] == arr[i + 1]) {
      cout << "Duplicate Exist";
      return;
    }
  }
  cout << "duplicate does not Exist";
}

int main() {
  int size;
  int *arr = new int[size];
  cout << "Enter Array size: ";
  cin >> size;
  cout << "Enter array -->" << endl;
  for (int i = 0; i < size; i++) {
    cout << "enter: ";
    cin >> arr[i];
  }

  checkDuplicate(arr, size);
}
