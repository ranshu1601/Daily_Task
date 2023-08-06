#include <iostream>
using namespace std;

void insertElement(int arr[], int size, int key) {
  int i = size - 1;
  while (arr[i] > key) {
    arr[i + 1] = arr[i];
    i--;
  }
  arr[i + 1] = key;

  for (int i = 0; i < size + 1; i++) {
    cout << arr[i] << " ";
  }
}

bool isArraySorted(int arr[] , int size){
    bool flag = true ; 
    for(int i=0 ; i<size ;i++){
        if(arr[i]<arr[i+1]){
            continue;
        }
        else{
            flag = !flag;
        }
    }
    return flag ; 
}

int main() {
  int size, key;
  cout << "Enter Size: ";
  cin >> size;
  int arr[10];

  for (int i = 0; i < size; i++) {
    cout << "val[" << i << "]";
    cin >> arr[i];
  }

//   cout << "Enter Key : ";
//   cin >> key;
//   insertElement(arr, size, key);

cout<<isArraySorted(arr, size);
}