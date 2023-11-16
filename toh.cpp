#include <iostream>
using namespace std;

// Function to perform the Tower of Hanoi
void towerOfHanoi(int n, int source, int auxiliary, int target, int totalRods) {
    if (n == 1) {
        cout << "Move disk 1 from rod " << source << " to rod " << target << endl;
        return;
    }

    // Move n-1 disks from source to auxiliary, using target as the auxiliary peg
    towerOfHanoi(n - 1, source, target, auxiliary, totalRods);

    // Move the nth disk from source to target
    cout << "Move disk " << n << " from rod " << source << " to rod " << target << endl;

    // Move the n-1 disks from auxiliary to target, using source as the auxiliary peg
    towerOfHanoi(n - 1, auxiliary, source, target, totalRods);
}

int main() {
    int numDisks;
    int numRods; // Number of rods, set to 5 as per your request

    cout << "Enter the number of disks: ";
    cin >> numDisks;
    cout<<"Enter the number of rods: ";
    cin>>numRods;

    // You can use additional rods by setting numRods to a different value.

    towerOfHanoi(numDisks, 1, 2, 3, numRods);

    return 0;
}
