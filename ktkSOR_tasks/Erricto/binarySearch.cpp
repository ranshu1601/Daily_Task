// ***********- Binary Search -**********************
// #include <iostream>
// using namespace std;

// int main() {
//   int size;
//   int arr[size];
//   cout << "Array Size: ";
//   cin >> size;

//   int low = 0, high = size - 1, mid, key, ans;
//   bool flag = true;
//   for (int i = 0; i < size; i++) {
//     cout << "Val[" << i << "] : ";
//     cin >> arr[i];
//   }
//   cout << "find -> ";
//   cin >> key;

//   while (low <= high) {
//     mid = low + (high - low) / 2;
//     if (arr[mid] == key) {
//       flag = !flag;
//       ans = mid;
//       break;
//     } else if (key > arr[mid]) {
//       low = mid + 1;
//       continue;
//     } else {
//       high = mid - 1;
//       continue;
//     }
//   }

//   if (flag) {
//     cout << "Null";
//   } else {
//     cout << "Value at Index: " << ans;
//   }
// }

// ***********- Binary Search [ is X a square ] -**********************
// #include <iostream>
// using namespace std;

// int main() {
//   int X;
//   cout << "Enter X:";
//   cin >> X;
//   int low = 0, high = X - 1, mid, ans;
//   bool flag = true;
//   while (low <= high) {
//     mid = low + (high - low) / 2;
//     if (mid * mid == X) {
//       ans = mid;
//       flag = !flag;
//       break;
//     } else if (mid * mid > X) {
//       high = mid - 1;
//       continue;
//     } else {
//       low = mid + 1;
//       continue;
//     }
//   }
//   if (flag) {
//     cout << X << " is not Sqaure ";
//   } else {
//     cout << X << " is Square Of " << ans;
//   }
// }

// ***********- Binary Search [ 1st value that is >=X ] -**********************
// #include <iostream>
// using namespace std;

// int main() {
//   int X, size, arr[size];
//   cout << "Enter Size : ";
//   cin >> size;

//   for (int i = 0; i < size; i++) {
//     cout << "Val[" << i << "] : ";
//     cin >> arr[i];
//   }
//   cout << "Enter X: ";
//   cin >> X;

//   int low = 0, high = size - 1, mid, ans;

//   while (low <= high) {
//     mid = low + (high - low) / 2;
//     if (arr[mid] >= X) {
//       ans = arr[mid];
//       high = mid - 1;
//       continue;
//     } else {
//       low = mid + 1;
//       continue;
//     }
//   }
//   cout << "1st value that is >=X: " << ans;
// }

// ***********- Binary Search [ Rotated Array find smallest element ]-***************

// #include <iostream>
// using namespace std;

// int main() {
//   int size;
//   cout << "Size: ";
//   cin >> size;
//   int arr[size], mid, low = 0, high = size - 1, mini = INT_MAX;

//   for (int i = 0; i < size; i++) {
//     cout << "val[" << i << "]: ";
//     cin >> arr[i];
//   }
//   while (low <= high) {
//     mid = low + (high - low) / 2;
//     if (arr[low] <= arr[mid]) {
//       mini = min(mini, arr[low]);
//       low = mid + 1;
//     } else {
//       mini = min(mini, arr[mid]);
//       high = mid - 1;
//     }
//   }
//   cout << mini;
// }

// ***********- Binary Search [ Array increases then decreases find max element ] -*********

#include <iostream>
using namespace std;
int main() {
  int arr[] = {2, 3, 4, 6, 9, 12, 11, 8, 6, 4, 1};
  int size = sizeof(arr) / sizeof(int);
  int low = 0, high = size - 1, mid, maxi=INT_MIN;

  while (low <= high) {
    mid = low + (high - low) / 2;
    if (arr[mid] > arr[mid - 1]) {
      maxi = arr[mid];
      low = mid+1;

    } else {
      maxi = arr[mid-1];
    }
  }
  cout << maxi;
}

// ***********- Binary Search [ Sqrt(X) ] -**********************

// #include <iostream>
// using namespace std;

// int main() {
//   int X;
//   cout << "Enter X: ";
//   cin >> X;
//   int low = 0, high = X - 1, mid, ans;
//   bool flag = true;

//   while (low <= high) {
//     mid = low + (high - low) / 2;
//     if (mid * mid == X) {
//       ans = mid;
//       flag = !flag;
//       break;
//     } else if (mid * mid > X) {
//       high = mid - 1;
//       continue;
//     } else {
//       low = mid + 1;
//       continue;
//     }
//   }

//   if (flag) {
//     cout << "Null";
//   } else {
//     cout << ans;
//   }
// }