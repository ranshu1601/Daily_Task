#include <iostream>
using namespace std;
int main() {
  int n;
  int find;
  int arr[n];
  cout << "Enter array length:"
       << " ";
  cin >> n;
  cout << "Enter array----" << endl;
  for (int i = 0; i < n; i++) {
    cout << "enter: ";
    cin >> arr[i];
  }

  cout << "Enter value to find: ";
  cin >> find;

  // linear search
  for (int i = 0; i < n; i++) {
    if (arr[i] == find)
      cout << "found at " << i << " index";
    else cout<<"not found"; break;
  }
  

}