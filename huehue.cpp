// palalindrome  ------------------------------>>> number 1 qoosen
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//   string str;
//   bool flag = true;
//   cout << "Enter a string: "
//        << " ";
//   cin >> str;
//   int n = str.length();
//   for (int i = 0, j = n - 1; i < j; i++, j--) {
//     if (str[i] == str[j]) {
//       continue;
//     } else {
//       flag = !flag;
//       break;
//     }
//   }

//   if (flag) {
//     cout << "yemss";
//   } else
//     cout << "nu";
// }

// factorial  ------------------------------>>> number 2 qoosen
// #include <iostream>
// using namespace std;
// int main() {
//   int n, ans = 1;
//   cout << " Enter number : ";
//   cin >> n;
//   for (int i = 1; i <= n; i++) {
//     ans *= i;
//   }
//   cout << "Answer: " << ans;
// }

// Fibonacci  ------------------------------>>> number 2 qoosen
// #include <iostream>
// using namespace std;
// int main() {
//   int num, c, a = 0, b = 1;
//   cout << "Enter Number: ";
//   cin >> num;
//   if (num == 1) {
//     cout << 0;
//   } else if (num == 2) {
//     cout << 0 << " " << 1 << " ";
//   }

//   else {
//     cout << 0 << " " << 1 << " ";
//     while (num > 2) {
//       c = a + b;
//       a = b;
//       b = c;
//       cout << c << " ";
//       num--;
//     }
//   }
// }

// part of string or not [ include ]
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//   string str1, str2;
//   bool flag = true;
//   cout << "Enter string [str1] :"
//        << " ";
//   cin >> str1;
//   cout << "Enter string to check [str2] : "
//        << " ";
//   cin >> str2;

//   for (int i = 0; i < str1.length() - str2.length(); i++) {
//     for (int j = 0; j < str2.length(); j++) {
//       if (str2[j] == str1[i + j]) {
//         continue;
//       } else {
//         flag = !flag;
//         break;
//       }
//     }
//   }

//   if (flag) {
//     cout << "Present ";
//   } else
//     cout << "Absent ";
// }