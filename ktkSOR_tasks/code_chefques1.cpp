#include <iostream>
#include <unordered_map>

using namespace std;

int mode(int arr[], int &size) {

  // define
  unordered_map<int, int> modMap;
  int maxNum = -1, res, count = 1;

  //   increment value
  for (int i = 0; i < size; i++) {
    if (size == 1) {
      modMap[arr[i]] = 1;
    } else {
      modMap[arr[i]]++;
    }
  }

  unordered_map<int, int>::iterator it;
  //   iterate
  for (it = modMap.begin(); it != modMap.end(); it++) {
    if (it->second >maxNum) {
      maxNum = count;
      res = it->first;
      count = 0;
    }
  }

  return res;
}

int main() {

  // define
  int t;
  cin >> t;

  // run testcase
  while (t > 0) {

    // input arr size
    int size;
    cin >> size;

    // define & Initialize arr
    int *arr = new int[size];
    for (int i = 0; i < size; i++) {
      cin >> arr[i];
    }

    cout << mode(arr, size) << "\n";

    t--;
  }
}