/*

[Storage Classes] (Enhance the performance of the program)

1) Auto
Scope: Local to the block in which it is defined
Lifetime: Automatically destroyed when the block is exited
auto x =10//x is automatically assumed to be int

2)Registed
Scope: Local to the block in which it is defined
Lifetime: Automatically destroyed when the block is exited
Suggest to the compiler to store any variable in the CPU register for faster access
void example(){
register int counter = 0;
for(register int i =0;i<10; ++i){
counter == +1
}
}

3)Static
Scope: For var within the function. Local to the function but retains its value in function call
Lifetime: Exists for duration of program
It can also be used with member function and member variable
{
static int count = 0;
count++;
cout<<count<<endl;
}

4)Extern
Scope: Global, the var or function iis visible accross multiple files
Lifetime: Exists for the duration of program

5)Mutablr
Scope:Used in classes only
Lifetime:As per the containing object
Allows member of the object to be modified even if the object is declared as const
class example{
mutable int value;
public:
example(int val): value(val)[]
void modify()const[value++;]
}
*/


// SORTING
// Insertion Sort
/*
#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int>& arr){
    for(size_t i=1; i<arr.size(); ++i){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

int main(){
    vector<int> arr = {5, 2, 4, 6, 1, 3};
    insertionSort(arr);
    for(int num : arr){
        cout << num << " ";
    }
    return 0;
}
*/


// Merge Sort
/*
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    stable_sort(arr.begin(), arr.end());

    for (int num : arr){
        cout << num << " ";
    }
    return 0;
}
*/

/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void insertionSort(vector<int>& arr) {
    for (size_t i = 1; i < arr.size(); ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

void bubbleSort(vector<int>& arr) {
    size_t n = arr.size();
    for (size_t i = 0; i < n - 1; ++i) {
        for (size_t j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> arr2 = {5, 2, 4, 6, 1, 3};
    int choice;

    cout << "Enter 1 for stable_sort, 2 for insertionSort, or 3 for bubbleSort: ";
    cin >> choice;

    switch (choice) {
        case 1:
            stable_sort(arr2.begin(), arr2.end());
            cout << "Sorted array using stable_sort: ";
            for (int num : arr2) {
                cout << num << " ";
            }
            cout << endl;
            break;
        case 2:
            insertionSort(arr2);
            cout << "Sorted array using insertionSort: ";
            for (int num : arr2) {
                cout << num << " ";
            }
            cout << endl;
            break;
        case 3:
            bubbleSort(arr2);
            cout << "Sorted array using bubbleSort: ";
            for (int num : arr2) {
                cout << num << " ";
            }
            cout << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }

    return 0;
}
*/

