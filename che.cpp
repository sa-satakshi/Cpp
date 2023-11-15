#include <iostream>
#include <string>

using namespace std;

class cashRegister {
public:
  cashRegister() {
    cashOnHand = 0;
  }

  cashRegister(int cashIn) {
    cashOnHand = cashIn;
  }

  int getCurrentBalance() {
    return cashOnHand;
  }

  void acceptAmount(int amountIn) {
    cashOnHand += amountIn;
  }

private:
  int cashOnHand;
};

class dispenserType {
public:
  dispenserType() {
    noOfItems = 10;
    cost = 50;
  }

  dispenserType(int setNoOfItems, int setCost) {
    noOfItems = setNoOfItems;
    cost = setCost;
  }

  int getNoOfItems() {
    return noOfItems;
  }

  int getCost() {
    return cost;
  }

  void makeSale() {
    noOfItems--;
  }

private:
  int noOfItems;
  int cost;
};

int main() {
  cashRegister register1;
  dispenserType candy(10, 50);
  dispenserType chips(10, 25);
  dispenserType gum(10, 15);
  dispenserType cookies(10, 40);

  int choice;
  int amountDeposited;

  while (true) {
    cout << "Select a product: " << endl;
    cout << "1. Candy (50 cents)" << endl;
    cout << "2. Chips (25 cents)" << endl;
    cout << "3. Gum (15 cents)" << endl;
    cout << "4. Cookies (40 cents)" << endl;
    cout << "5. Exit" << endl;
    cin >> choice;

    if (choice == 5) {
      break;
    }

    cout << "Please deposit " << candy.getCost() << " cents" << endl;
    cin >> amountDeposited;

    if (amountDeposited < candy.getCost()) {
      cout << "The amount is not enough. Collect what you deposited." << endl;
      continue;
    }

    register1.acceptAmount(amountDeposited);

    if (candy.getNoOfItems() == 0) {
      cout << "The item is not available. Please select another item." << endl;
      continue;
    }

    candy.makeSale();
    cout << "Collect your item at the bottom and enjoy." << endl;
  }

  return 0;
}
