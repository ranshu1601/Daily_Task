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
    cout << "Press 2 to Login " << endl;
    cout << "Press 3 to exist " << endl;
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
        cout << "Registration Done" << endl << endl;

      } else {
        cout << endl << "UserName Already Present !!" << endl;
      }

      continue;

    }

    else if (n == 2) {
      cout << endl << "Enter Login Details " << endl;

      cout << "Username: ";
      cin >> p;

      bool resultU = username.find(p) == username.end(); // true means not present
      

      if (!resultU) {
        cout << "Enter Password: ";
        cin >> q;
        if (username.at(p) == q) {
          cout << "Logged In Successfully " << endl << endl;
        } else {
          cout << "Wrong Password! " << endl << endl;
        }

      }

      else
        cout << "Username does not exist! " << endl << endl;

      continue;

    }

    else {
      cout << endl << "Have a good day !!";
      flag = !flag;
      break;
    }
  }
}