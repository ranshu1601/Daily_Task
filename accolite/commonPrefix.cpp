// Longest Common Prefix

#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main() {
  vector<string> arr;
  bool flag = true;
  string ans = "";
  arr = {"geeksforgeeks", "geeks", "geek", "geezer"};

  for (int i = 0; i < arr[0].length(); i++) {
    char ch = arr[0][i];
    for (int j = 0; j < arr.size(); j++) {
      if (arr[i][j] != ch) {
        ans = ans;
      }
      ans = ans + ch;
    }
  }
}