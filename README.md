#include <iostream>
using namespace std;

const int MAX_SIZE = 100; 
void insertElement(int arr[], int& size, int element) {
    if (size < MAX_SIZE) {
        arr[size++] = element;
        cout << "Element " << element << " inserted successfully." << endl;
    } else {
        cout << "Array is full. Cannot insert element." << endl;
    }
}
void deleteElement(int arr[], int& size, int index) {
    if (index >= 0 && index < size) {
        cout << "Element " << arr[index] << " deleted successfully." << endl;
        for (int i = index; i < size - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        size--;
    } else {
        cout << "Invalid index. Deletion failed." << endl;
    }
}
void updateElement(int arr[], int size, int index, int newValue) {
    if (index >= 0 && index < size) {
        arr[index] = newValue;
        cout << "Element at index " << index << " updated to " << newValue << "." << endl;
    } else {
        cout << "Invalid index. Update failed." << endl;
    }
}
int selectElement(int arr[], int size, int index) {
    if (index >= 0 && index < size) {
        return arr[index];
    } else {
        cout << "Invalid index. Selection failed." << endl;
        return -1; 
    }
}

void displayArray(int arr[], int size) {
    cout << "Current array elements:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int choice;
    
    while (true) {
        cout << "\nArray Operations:" << endl;
        cout << "1. Insert element" << endl;
        cout << "2. Delete element" << endl;
        cout << "3. Update element" << endl;
        cout << "4. Select element" << endl;
        cout << "5. Display array" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int element;
                cout << "Enter element to insert: ";
                cin >> element;
                insertElement(arr, size, element);
                break;
            }
            case 2: {
                int index;
                cout << "Enter index of element to delete: ";
                cin >> index;
                deleteElement(arr, size, index);
                break;
            }
            case 3: {
                int index, newValue;
                cout << "Enter index of element to update: ";
                cin >> index;
                cout << "Enter new value: ";
                cin >> newValue;
                updateElement(arr, size, index, newValue);
                break;
            }
            case 4: {
                int index;
                cout << "Enter index of element to select: ";
                cin >> index;
                int selected = selectElement(arr, size, index);
                if (selected != -1) {
                    cout << "Selected element: " << selected << endl;
                }
                break;
            }
            case 5:
                displayArray(arr, size);
                break;
            case 6:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please enter a number from 1 to 6." << endl;
                break;
        }
    }

    return 0;
}
