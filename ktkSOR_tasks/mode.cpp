#include <iostream>
using namespace std;

void mode(int arr[], int size) {

  int count = 0, max_count = 1, ans;
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[i] == arr[j])
        count++;
    }

    if (count > max_count) {
      max_count = count;
      ans = arr[i];
      count =0 ;
    }
  }
  cout << ans;
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

  for (int i = 0; i < size; i++) {
    cout<<arr[i]<<" ";
  }
  
cout<<endl;
  mode(arr, size);
}