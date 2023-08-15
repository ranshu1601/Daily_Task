// Given an array of size N. The task is to find the maximum and the minimum
// element of the array using the minimum number of comparisons.

#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> arr;
  int length;

  // input length
  cout << "Length: ";
  cin >> length;

  // input array
  for (int i = 0; i < length; i++) {
    int value;
    cout << "enter: ";
    cin >> value;
    arr.push_back(value);
  }

  // display array
  cout << "Array is:  ";
  for (int i = 0; i < length; i++) {
    cout << arr[i] << " ";
  }
  cout<<"\n";

  // bubble sort array
  for (int i = 0; i < length - 1; i++) {
    for (int j = 0; j < length - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp;
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  // display sorted array
  cout << "Array is:  ";
  for (int i = 0; i < length; i++) {
    cout << arr[i] << " ";
  }

  //Find min and max 
  int min = arr[0], max=arr[0] ;
  for(int i=0 ; i<length;i++){
    if(arr[i]<min){
        min = arr[i];
    }
    if(arr[i]>max){
        max = arr[i];
    }
  }

  cout<<"Min: "<<min<<"\nMax:  "<<max ; 

}
