#include <iostream>
using namespace std;

int main() {
  int array[5][3];
  for (int i = 0; i < 5; i++) {
    int name;
      cout << "Name:";
      cin >> name;
      array[i][0] = name;
    int id;
      cout << "ID:";
      cin >> id;
      array[i][1] = id;
    int grade;
      cout << "Grade:";
      cin >> grade;
      array[i][2] = grade;
  }
  int name;
      cout << "Name to get student info: ";
      cin >> name;
  for (int i = 0; i < 3; i++) {
    if (name == array[i][0])
      cout << "Name: " << array[i][0];
      cout << "ID: " << array[i][1];
      cout << "Grade: " << array[i][2];
  }
}
