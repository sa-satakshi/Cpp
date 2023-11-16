#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
//for string in decreasing order
bool compareStrings(const string &a, const string &b) {
    return a > b;
}
void quickSort(string arr[], int n){
    sort(arr, arr + n, compareStrings);
}
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    string arr[n];

    cout << "Enter " << n << " elements: ";
    for (char i = 0; i < n; i++) {
        // cin >> arr[i];
        getline(cin, arr[i]);
    }

    // Using the sort function to sort the array
    quickSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
