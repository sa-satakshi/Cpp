#include<iostream>
using namespace std;

int midSquareHash(int key, int tableSize)
{
    int squared = key * key;
    int middleDigit =(squared / 10) % 10;
    int hashIndex = middleDigit % tableSize;

    return hashIndex;
}
int main()
{
    int tableSize = 10;
    int numkeys;
    cout << "Enter size: ";
    cin >> numkeys;
    int keys[numkeys];
    for(int i=0;i<numkeys;i++){
        cin >> keys[i];
    }
    int hashTable[tableSize];
    for(int i=0;i<tableSize;i++){
        hashTable[i] = -1;
    }
    for(int i=0;i<numkeys;i++){
        int key = keys[i];
        int hashIndex = midSquareHash(key, tableSize);
        while(hashIndex < tableSize){
            if(hashTable[hashIndex] == -1){
                hashTable[hashIndex] = key;
                break;
            }else{
                hashIndex = (hashIndex + 1) % tableSize;
            }
        }
    }
    for(int i=0;i<tableSize;i++){
        if(hashTable[i] != -1){
            cout << "Index " << i << ": key " << hashTable[i] << endl;
        }
    }
    return 0;
}