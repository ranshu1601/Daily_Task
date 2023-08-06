// Single Missing elements
// #include <iostream>
// using namespace std;

// int main() {
//   int size;
//   cout << "Enter size : ";
//   cin >> size;
//   int arr[size];

//   for (int i = 0; i < size; i++) {
//     cout << "val[" << i << "]: ";
//     cin >> arr[i];
//   }
//   int diff = arr[0] - 0;
//   for (int i = 0; i < size - 1; i++) {
//     if (arr[i] - i != diff) {
//       cout << "\n" << i + diff;
//       break;
//     }
//   }
// }

// Multiple Missing elements
#include <iostream>
using namespace std;

int main() {
  int size;
  cout << "Enter size : ";
  cin >> size;
  int arr[size];

  for (int i = 0; i < size; i++) {
    cout << "val[" << i << "]: ";
    cin >> arr[i];
  }
  int diff = arr[0] - 0;
  for (int i = 0; i < size - 1; i++) {
    if (arr[i] - i != diff) {
        while(diff<arr[i]-i){
                cout << i + diff << " ";
                diff = arr[i] - i;
        }
    }
  }
}
