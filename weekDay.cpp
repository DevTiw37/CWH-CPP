// This program uses switch statement to know which week it is.

#include <iostream>
using namespace std;
int main() {
  unsigned int weekNum;
  cout << "Enter the week number: ";
  cin >> weekNum;
  switch (weekNum) {
  case 1:
    cout << "Monday" << endl;
    break;
  case 2:
    cout << "Tuesday" << endl;
    break;
  case 3:
    cout << "Wednesday" << endl;
    break;
  case 4:
    cout << "Thursday" << endl;
    break;
  case 5:
    cout << "Friday" << endl;
    break;
  case 6:
    cout << "Saturday" << endl;
    break;
  case 7:
    cout << "Sunday" << endl;
    break;

  default:
    cout << "Error!" << endl;
  }

  return 0;
}