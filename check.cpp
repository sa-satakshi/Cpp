#include <iostream>
#include <string>

using namespace std;

// Class to represent an individual
class personType {
public:
  string firstName;
  string lastName;

  personType(string firstName, string lastName) {
    this->firstName = firstName;
    this->lastName = lastName;
  }

  void setFirstName(string firstName) {
    this->firstName = firstName;
  }

  string getFirstName() {
    return firstName;
  }

  void setLastName(string lastName) {
    this->lastName = lastName;
  }

  string getLastName() {
    return lastName;
  }

  void printFullName() {
    cout << firstName << " " << lastName << endl;
  }
};

// Class to manage a list of people
class personList {
private:
  personType *list;
  int size;

public:
  personList(int size) {
    this->size = size;
    list = new personType[size];
  }

  void addPerson(personType person) {
    list[size - 1] = person;
    size--;
  }

  int countPeopleWithoutLastName() {
    int count = 0;
    for (int i = 0; i < size; i++) {
      if (list[i].getLastName() == "") {
        count++;
      }
    }
    return count;
  }

  void printPeopleWithoutLastName() {
    for (int i = 0; i < size; i++) {
      if (list[i].getLastName() == "") {
        list[i].printFullName();
      }
    }
  }
};

int main() {
  int n;
  cin >> n;

  personList list(n);

  for (int i = 0; i < n; i++) {
    string firstName, lastName;
    cin >> firstName;
    if (cin.peek() == ' ') {
      cin >> lastName;
    }

    personType person(firstName, lastName);
    list.addPerson(person);
  }

  int count = list.countPeopleWithoutLastName();
  cout << "Count: " << count << endl;
  list.printPeopleWithoutLastName();

  return 0;
}
