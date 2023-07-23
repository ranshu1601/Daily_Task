#include <iostream>
using namespace std;

int main() {
  int min, max, mid, n, data, ans=-1;
  int *arr = new int[n];
  cout << "Enter the array length:"
       << " ";
  cin >> n;
  cout << "Take Array Input--" << endl;
  for (int i = 0; i <n; i++) {
    cout << "enter: ";
    cin >> arr[i];
  }
  cout << "Enter Data: ";
  cin >> data;

  // Binary Search
    min = 0;
    max = n-1;
  while(min<=max) {
   
    mid = min + (max - min) / 2;
    if (arr[mid] == data) {
       ans = mid;
    } else if (arr[mid] < data) {
      min = mid + 1;
    } else max = mid - 1;
    break;
  }

  cout<< ans;
  
}