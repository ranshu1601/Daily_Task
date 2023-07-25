#include <iostream>
#include <string>
using namespace std;

bool findValue(string arr[], string data) {
  bool flag = true;
  for (int i = 0; i < 100; i++) {
    if (arr[i] == data) {
      flag = flag;
      break;
    } else {
      continue;
    }
  }
  return !flag;
}

string *addArray(string arr[], string username) {
  for (int i = 0; i < 100; i++) {

    if (!arr[i].empty()) {
      arr[i] = username;
    } else
      continue;
  }
  return arr;
}

int main() {
  string *username = new string[100];
  string *password = new string[100];
  bool flag = true;
  int n;
  string x, y, p, q;

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
      addArray(username, x);
      cout << "Enter Password [in string format]: ";
      cin >> y;
      addArray(password, y);
      cout << "Registration Done" << endl;
      continue;

    }

    else if (n == 2) {
      cout << endl << "Enter Login Details " << endl;
      cout << "Username: ";
      cin >> p;
      cout << "Password: ";
      cin >> q;

      if (findValue(username, p) && findValue(password, q)) {
        cout << "Logged In Successfully " << endl << endl;
      } else if (findValue(username, p) && !findValue(password, p)) {
        cout << "Wrong Password " << endl << endl;
      } else if (!findValue(username, p) && findValue(password, p)) {
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