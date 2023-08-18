#include <iostream>
using namespace std;

int main() {
  // 5,7
  int a, b, smallN, ans;
  cout << "Enter a: ";
  cin >> a;
  cout << "Enter b: ";
  cin >> b;

  // max can be 7 x 5 && min can be 5 ;
  if (a > b) {
    smallN = b;
  } else if (a == b) {
    ans = a;
  } else {
    smallN = a;
  }

  for (int i = smallN; i <= a * b; i++) {
    if (i % a == 0 && i % b == 0) {
      ans = i;
      break;
    }
  }

  cout << "LCM: " << ans;
}

// HCF
// #include <iostream>
// using namespace std;

// int main() {
//   int a, b, bigN, ans;
//   cout << "enter a: ";
//   cin >> a;
//   cout << "enter b: ";
//   cin >> b;
//   if (a > b) {
//     bigN = a;
//   } else if (a == b) {
//     ans = a;
//   } else {
//     bigN = b;
//   }

//   for (int i = bigN; i >= 1; i--) {
//     if (a % i == 0 && b % i == 0) {
//       ans = i;
//       break;
//     }
//   }
//   cout << "HCF: " << ans;
// }

// LCM using HCF
#include <iostream>
using namespace std;

int main() {

  // define
  int a, b, bigN, hcf, lcm;

  // take input
  cout << "enter a: ";
  cin >> a;
  cout << "enter b: ";
  cin >> b;

  // find larger no.
  if (a > b) {
    bigN = a;
  } else if (a == b) {
    hcf = a;
  } else {
    bigN = b;
  }

  // find hcf
  for (int i = bigN; i >= 1; i--) {
    if (a % i == 0 && b % i == 0) {
      hcf = i;
      break;
    }
  }

  //  find lcm
  lcm = (a * b) / hcf;
  cout << "HCF: " << hcf << "\n";
  cout << "LCM: " << lcm;
}