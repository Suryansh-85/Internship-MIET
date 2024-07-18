/*STL - It is the collection of library/algo,functions and other components/data structure,
to simplify development of c++ programming.

Container - It is used to store data in the sequencial manner to simplify your requirements.

Sequencial Comntainer-
Simple array without STL i.e it does not have predefined function.

Array- 1)Optimization 2)No need to wirte complete/Logi8c code is short 3)Data type is 
decided at run time
Disadvantage-1) It is in static nature 2)

Vector- 1)It is dynamic in nature
List-
Dequeue-

Stack- Last In First Out
Push-
Pop-
Peek-It display top element
*/


//Stack operations
/*
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string>s;
    s.push("Ajay");
    s.push("Ajab");
    s.push("Anjali");
    s.push("Sajab");
    cout<<"top element"<<s.top()<<endl;
    s.pop();
    cout<<"top element after pop"<<s.top()<<endl;
    return 0;
    }
    */

   
   //Queue operations
/*
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string>s;
    s.push("Ajay");
    s.push("Ajab");
    s.push("Anjali");
    s.push("Sajab");
    cout<<"top element"<<s.front()<<endl;
    s.pop();
    cout<<"top element after pop"<<s.front()<<endl;
    return 0;
}
*/

//Max heap Min heap 
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    pirority_queue<int>max;
    pirority_queue<int,vctor<int>,greater<int>,min;
    max.push("Ajay");
    max.push("Ajab");
    max.push("Anjali");
    max.push("Sajab");
    cout<<"size"<<max.size()<<endl;
    int n=max.size();
    for(i=0;i<n;i++){
        cout<<max.top()<<"";
        max.pop();
    }cout<<endl;
    min.push(5);
    min.push(1);
    min.push(0);
    min.push(4);
    min.push(3);
    int m = min.size();
    for(int i =0;i<m;i++){
        cout<<min.top()<<"";
        min.pop();
    }cout<<endl;
    return 0;
    }


}
*/


/*
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int choice;
    stack<string> s;
    s.push("ajay");
    s.push("hello");
    s.push("buffalo");
    s.push("cow");
    
    do {
        cout << "Enter your choice:\n1 - Size\n2 - Insert\n3 - Delete\n4 - Top\n5 - Exit\n";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Size of stack: " << s.size() << endl;
                break;

            case 2: {
                cout << "Insert the element: ";
                string i;
                cin >> i;
                s.push(i);
                cout << "New element at top: " << s.top() << endl;
                break;
            }

            case 3: {
                if (!s.empty()) {
                    cout << "Deleting top element..." << endl;
                    s.pop();
                    if (!s.empty()) {
                        cout << "Top element after deletion: " << s.top() << endl;
                    } else {
                        cout << "Stack is now empty." << endl;
                    }
                } else {
                    cout << "Stack is empty, cannot delete." << endl;
                }
                break;
            }

            case 4: {
                if (!s.empty()) {
                    cout << "Display top element: " << s.top() << endl;
                } else {
                    cout << "Stack is empty, no top element." << endl;
                }
                break;
            }

            case 5:
                cout << "Exiting." << endl;
                break;

            default:
                cout << "Invalid choice." << endl;
                break;
        }
    } while (choice != 5);

    return 0;
    */


/*You are given an array prices where prices[i] is the price of a given stock on the 
ith day.You want to maximize your profit by choosing a single day to buy one stock and
choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.
 */

#include <iostream>
#include <array>
using namespace std;
int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4}, i, j;
    int min = arr[0], profit = 0, profit1 = 0;

    for (i = 1; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        profit1 = arr[i] - min;
        if (profit1 > profit)
        {
            profit = profit1;
        }
    }
    cout << profit;
    return 0;
}
