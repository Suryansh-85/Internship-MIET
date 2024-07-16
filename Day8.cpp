/*STL-Standard Template Library

A. Containers
Containers are data structures that store objects and data. The STL provides several types of containers, each optimized for specific kinds of operations.

1.Sequence Containers: Store elements in a linear sequence.

vector: Dynamic array.
deque: Double-ended queue.
list: Doubly linked list.
array: Fixed-size array (introduced in C++11).
forward_list: Singly linked list (introduced in C++11).

2.Associative Containers: Store elements formed by a combination of a key value and a mapped value, and which are organized based on the key.

set: Collection of unique keys.
multiset: Collection of keys, allowing duplicates.
map: Collection of key-value pairs, with unique keys.
multimap: Collection of key-value pairs, allowing duplicate keys.

3.Unordered Associative Containers: Provide faster average case complexity than associative containers.

unordered_set: Collection of unique keys with no particular order.
unordered_multiset: Collection of keys, allowing duplicates with no particular order.
unordered_map: Collection of key-value pairs with no particular order.
unordered_multimap: Collection of key-value pairs, allowing duplicate keys with no particular order.
*/
/*#include <iostream>
#include <array>
#include <string>

using namespace std;

// Function to print the array
void printArray(const array<int, 4>& vec) {
    for (const auto& elem : vec) {
        cout << elem << endl;
    }
}

// Function to sum the elements of the array
int sumArray(const array<int, 4>& vec) {
    int sum = 0;
    for (const auto& elem : vec) {
        sum += elem;
    }
    return sum;
}

// Function to find the maximum element in the array
int maxArray(const array<int, 4>& vec) {
    int maxElem = vec[0];
    for (const auto& elem : vec) {
        if (elem > maxElem) {
            maxElem = elem;
        }
    }
    return maxElem;
}

// Function to reverse the array
void reverseArray(array<int, 4>& vec) {
    int n = vec.size();
    for (int i = 0; i < n / 2; ++i) {
        swap(vec[i], vec[n - 1 - i]);
    }
}

int main() {
    array<int, 4> vec{3, 4, 5, 6};
    int size = vec.size();

    cout << "Size of array: " << size << endl;

    cout << "Array elements:" << endl;
    printArray(vec);

    int sum = sumArray(vec);
    cout << "Sum of array elements: " << sum << endl;

    int maxElem = maxArray(vec);
    cout << "Maximum element in array: " << maxElem << endl;

    reverseArray(vec);
    cout << "Array after reversing:" << endl;
    printArray(vec);

    return 0;
}
*/

//Array functions-Used count to check for repeating elements
/*#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main(){
    array<int,8> a={3,4,3,5,6};
    int size = a.size();

    cout<<"size of array"<<size<<endl;

    for(int i = 0;i<size;i++){
        cout<<a[i]<<"";

    }
    cout<<"element of index"<<a.at(3)<<endl;
    bool truefalse= a.empty();
    cout<<"True or False"<<truefalse<<endl;
    bool empty = a.empty();
    cout <<"is array empty ot not"<< empty;
    cout <<"first element"<<a.front()<<endl;
    cout <<"last element"<<a.back()<<endl;
    cout<<count(a.begin(),a.end(),3);
    return 0;
    
}
*/

//Sorted the array using sort function
/*
#include<iostream>
#include<array>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    array<int,8> a={3,4,3,5,6};
    int size = a.size(),i;

    cout<<"size of array"<<size<<endl;

    for( i = 0;i<size;i++){
        cout<<a[i]<<"";

    }
    cout<<"element of index"<<a.at(3)<<endl;
    bool truefalse= a.empty();
    cout<<"True or False"<<truefalse<<endl;
    bool empty = a.empty();
    cout <<"is array empty ot not"<< empty;
    cout <<"first element"<<a.front()<<endl;
    cout <<"last element"<<a.back()<<endl;
    cout<<count(a.begin(),a.end(),3);
    for (i=0;i<size;i++){
        sort(a.begin(),a.end());
    }
    for(i=0;i<size;i++) {
        cout<< a[i]<<endl;
        }
    
    return 0;
}
*/

/*Given an integer array nums, find the 
subarray
 with the largest sum, and return its sum.
Example 1:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]   
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.*/


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int max_sum = nums[0];
        int current_sum = nums[0];

        for (size_t i = 1; i < nums.size(); ++i) {
            current_sum = max(nums[i], current_sum + nums[i]);
            max_sum = max(max_sum, current_sum);
        }

        return max_sum;  
    }
};

/*Initialize max_sum with the first element of the array to keep track of 
the maximum sum encountered so far.

Initialize current_sum with the first element to keep track of the current
 subarray sum.

Iterate through the array starting from the second element:
For each element, update current_sum to be the maximum of the current
element and the sum of current_sum and the current element (nums[i]).

Update max_sum to be the maximum of max_sum and current_sum.

Return max_sum which contains the largest sum of any subarray in the given array.

You can use this Solution class to solve the problem by creating an instance of 
the class and calling the maxSubArray method with your input vector.*/

