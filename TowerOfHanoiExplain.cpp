#include <iostream>
using namespace std;

void towerOfHanoi(int n, int source, int auxiliary, int destination) {
    if (n == 1) {
        cout << "Move disk 1 from rod " << source << " to rod " << destination << endl;
        return;
    }

    towerOfHanoi(n - 1, source, destination, auxiliary);
    cout << "Move disk " << n << " from rod " << source << " to rod " << destination << endl;
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int numDisks, numRods;
    
    cout << "Enter the number of disks: ";
    cin >> numDisks;
    
    if (numDisks < 1) {
        cout << "Invalid input. Number of disks must be at least 1." << endl;
        return 1;  // Exit with an error code
    }

    cout << "Enter the number of rods (3 or more): ";
    cin >> numRods;

    if (numRods < 3) {
        cout << "Invalid input. Number of rods must be 3 or more." << endl;
        return 1;  // Exit with an error code
    }
    
    towerOfHanoi(numDisks, 1, 2, 3);

    return 0;
}
