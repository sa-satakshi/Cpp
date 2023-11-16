#include <iostream>

const int MAX_HEAP_SIZE = 100;

class MinHeap {
private:
    int heap[MAX_HEAP_SIZE];
    int size;

    // Helper function to swap two elements in the heap
    void swap(int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    }

    // Helper function to maintain the min heap property after deletion
    void heapify(int index) {
        int smallest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;

        if (left < size && heap[left] < heap[smallest])
            smallest = left;

        if (right < size && heap[right] < heap[smallest])
            smallest = right;

        if (smallest != index) {
            swap(heap[index], heap[smallest]);
            heapify(smallest);
        }
    }

public:
    MinHeap() {
        size = 0;
    }

    // Function to insert an element into the min heap
    void insert(int value) {
        if (size >= MAX_HEAP_SIZE) {
            std::cout << "Heap is full. Cannot insert more elements." << std::endl;
            return;
        }

        size++;
        int i = size - 1;
        heap[i] = value;

        while (i != 0 && heap[(i - 1) / 2] > heap[i]) {
            swap(heap[i], heap[(i - 1) / 2]);
            i = (i - 1) / 2;
        }
    }

    // Function to delete the minimum element from the heap
    void deleteMin() {
        if (size == 0) {
            std::cout << "Heap is empty. Cannot delete minimum element." << std::endl;
            return;
        }

        if (size == 1) {
            size--;
            return;
        }

        heap[0] = heap[size - 1];
        size--;
        heapify(0);
    }

    // Function to print the heap
    void printHeap() {
        for (int i = 0; i < size; i++) {
            std::cout << heap[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    MinHeap heap;
    int n;
    std::cout << "Enter the number of elements to insert into the min heap: ";
    std::cin >> n;

    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        int element;
        std::cin >> element;
        heap.insert(element);
    }

    std::cout << "Min heap: ";
    heap.printHeap();

    heap.deleteMin();
    std::cout << "Min heap after deleting minimum element: ";
    heap.printHeap();

    return 0;
}
