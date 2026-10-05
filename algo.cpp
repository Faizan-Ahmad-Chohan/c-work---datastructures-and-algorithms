#include <iostream>
#include <utility> // For swap

using namespace std;

// Changed return type to void since we are printing inside the function
void order(int array[], int size) {
    cout << "\nArray is Arranged in Ascending Order: ";

    // Standard Bubble Sort Logic
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            // If the current element is greater than the next, swap them
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }

    // Printing the sorted array
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    
}

int main() {
    int size;
    cout << "Enter Size: ";
    cin >> size;

    // Note: Variable Length Arrays (VLA) like arr[size] are supported by 
    // many compilers (GCC), but aren't technically standard C++. 
    // This will work for your current exercise.
    int arr[size];

    cout << "Enter numbers one by one:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Managing these inputs into ascending order..." << endl;

    // FIX: To call a function, use the name only. No "int" or "[]".
    order(arr, size);
     getchar();

    return 0;
}