#include <iostream>
#include <vector>
using namespace std;

// Reversing Array with Auxillary Array ;

// void reverseArray(int arr1[] , int &size){
//     int arr2[size] , i, j ;
//     for( i=0 ,j=size-1 ;i<size ,j>=0 ; i++ , j--){
//             arr2[i] = arr1[j] ;
//     }
//     for(int i=0 ; i<size ; i++){
//         arr1[i] = arr2[i];
//     }
//     for(int i=0 ; i<size ; i++){
//         cout<<arr1[i]<<" ";
//     }

// }

// Reversing Array with swaping ;
// void reverseArray(int arr[] , int &size){
//    int i=0 , j=size-1, temp;
//    while(i<=j){
//     temp = arr[i];
//     arr[i] = arr[j];
//     arr[j]=temp ;
//     i++;
//     j--;
//    }

//     for(int i=0 ; i<size ; i++){
//         cout<<arr[i]<<" ";
//     }

// }

// Left Shift of Array
// void leftShift(int arr[], int &size) {
//   for (int i = 0; i < size; i++) {
//     arr[i] = arr[i + 1];
//   }
//   arr[size - 1] = 0;
//   for (int i = 0; i < size; i++) {
//     cout << arr[i] << " ";
//   }
// }

// Right Shift of Array
// void rightShift(int arr[], int &size) {
//   for (int i = size-1; i>=0; i--) {
//     arr[i] = arr[i - 1];
//   }
//   arr[0] = 0;
//   for (int i = 0; i < size; i++) {
//     cout << arr[i] << " ";
//   }
// }
int main() {
  int size;
  cout << "Enter size: ";
  cin >> size;
  int arr[size];

  for (int i = 0; i < size; i++) {
    cout << "Val[" << i << "] : ";
    cin >> arr[i];
  }
  // cout<<"Reversed Array : "<<endl;
  // reverseArray(arr, size);

//   cout << "Left Shifting Of Array: " << endl;
//   leftShift(arr, size);
//   cout << "Right Shifting Of Array: " << endl;
//   rightShift(arr, size);
}
