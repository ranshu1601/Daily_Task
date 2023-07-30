#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;



int main() {
  unordered_map<string, string> username;

  bool flag = true;
  string x, y, p, q;
  int n;

  while (flag) {
    cout << "Press 1 to Register " << endl;
    cout << "Press 2 to Login "    << endl;
    cout << "Press 3 to exist "    << endl;
    cout << "ENTER: ";
    cin >> n;

    if (n == 1) {
      cout << endl << "Registration Page" << endl << endl;
      cout << "Enter Username [in string format]: ";
      cin >> x;
      cout << "Enter Password [in string format]: ";
      cin >> y;

      if (username.find(x) == username.end()) {

        username.insert(make_pair(x, y));
        cout << "Registration Done" << endl;

      } else {
        cout << endl << "UserName Already Present !!" << endl;
      }

      continue;

    }

    else if (n == 2) {
      cout << endl << "Enter Login Details " << endl;

      cout << "Username: ";
      cin >> p;
      cout << "Password: ";
      cin >> q;

      bool resultU =
          username.find(p) == username.end(); // true means not present
      bool resultP = username.find(q) == username.end();
      bool checkEQ = username.at(p) == q;

      if (!resultP && !resultU && checkEQ) {
        cout << "Logged In Successfully " << endl << endl;
      } else if (!resultU && resultP) {
        cout << "Wrong Password " << endl << endl;
      } else if (resultU && !resultP) {
        cout << "Wrong Username " << endl << endl;
      } else
        cout << "Both are wrong values" << endl << endl;

      continue;

    }

    else {
      cout << endl << "Have a good day !!";
      flag = !flag;
      break;
    }
  }
}