/*
1.Problem: Available Captures for Rook
Link: https://leetcode.com/problems/available-captures-for-rook/

On an 8x8 chessboard, there is exactly one white rook and some number of black bishops and white pawns. Return the number of available captures for the white rook.
*/


#include<bits/stdc++.h>
#include <vector>
using namespace std;

int numRookCaptures(vector<vector<char>>& board) {
    int captures = 0, rookX, rookY;

    // Find the rook's position
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if (board[i][j] == 'R') {
                rookX = i;
                rookY = j;
                break;
            }
        }
    }

    // Check in all four directions
    int directions[4][2] = {{0,1}, {1,0}, {0,-1}, {-1,0}};
    for (auto& dir : directions) {
        int x = rookX + dir[0], y = rookY + dir[1];
        while (x >= 0 && x < 8 && y >= 0 && y < 8) {
            if (board[x][y] == 'B') break;
            if (board[x][y] == 'p') {
                captures++;
                break;
            }
            x += dir[0];
            y += dir[1];
        }
    }

    return captures;
}



/*
2.Problem: Best Time to Buy and Sell Stock
Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

You are given an array prices where prices[i] is the price of a given stock on the ith day. Find the maximum profit you can achieve.
*/
#include<bits/stdc++.h>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int min_price = INT_MAX;
    int max_profit = 0;
    for (int price : prices) {
        if (price < min_price) {
            min_price = price;
        } else if (price - min_price > max_profit) {
            max_profit = price - min_price;
        }
    }
    return max_profit;
}


/*
3,Problem: Convert Binary Number in a Linked List to Integer
Link: https://www.codingninjas.com/codestudio/problems/binary-to-integer_2421938

Given head which is a reference node to a singly-linked list, return the decimal value of the number in the linked list.
*/
#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

int getDecimalValue(ListNode* head) {
    int num = 0;
    while (head) {
        num = (num << 1) | head->val;
        head = head->next;
    }
    return num;
}



/*
4.Problem: Browser History
Link: https://www.codingninjas.com/codestudio/problems/browser_2427908

Implement a simple browser history system.
*/

#include <stack>
#include <string>
#include<bits/stdc++.h>
using namespace std;


class BrowserHistory {
private:
    stack<string> history;
    stack<string> future;

public:
    BrowserHistory(string homepage) {
        history.push(homepage);
    }
    
    void visit(string url) {
        history.push(url);
        while (!future.empty()) future.pop();
    }
    
    string back(int steps) {
        while (steps-- && history.size() > 1) {
            future.push(history.top());
            history.pop();
        }
        return history.top();
    }
    
    string forward(int steps) {
        while (steps-- && !future.empty()) {
            history.push(future.top());
            future.pop();
        }
        return history.top();
    }
};



/*
5..Problem: Buildings Projection
Link: https://www.codingninjas.com/codestudio/problems/buildings-projection_1466964

Given an n x n grid, where 0 represents empty space and 1 represents a building, find the max sum of projections of the grid.
*/
#include<bits/stdc++.h>

#include <vector>
using namespace std;

int projectionArea(vector<vector<int>>& grid) {
    int n = grid.size();
    int area = 0;
    for (int i = 0; i < n; ++i) {
        int rowMax = 0, colMax = 0;
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] > 0) area++;
            rowMax = max(rowMax, grid[i][j]);
            colMax = max(colMax, grid[j][i]);
        }
        area += rowMax + colMax;
    }
    return area;
}



/*
6.Problem: Contains Duplicate
Link: https://leetcode.com/problems/contains-duplicate/

Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
*/

#include <vector>
#include <unordered_set>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> num_set(nums.begin(), nums.end());
    return num_set.size() != nums.size();
}



/*
7.Problem: Cycle Detection in a Singly Linked List
Link: https://www.codingninjas.com/codestudio/problem-details/cycle-detection-in-a-singly-linked-list_628974

Detect if a linked list has a cycle in it.
*/
#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

bool hasCycle(ListNode *head) {
    ListNode *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return true;
    }
    return false;
}





/*
8.Problem: Delete Node in a Linked List
Link: https://www.codingninjas.com/codestudio/problems/delete-node-in-ll_5881

Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.
*/
#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

void deleteNode(ListNode* node) {
    node->val = node->next->val;
    node->next = node->next->next;
}



/*
9.Problem: Design Linked List
Link: https://leetcode.com/problems/design-linked-list/

Design your implementation of the linked list.
*/

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class MyLinkedList {
public:
    MyLinkedList() : head(nullptr), size(0) {}
    
    int get(int index) {
        if (index < 0 || index >= size) return -1;
        ListNode* current = head;
        for (int i = 0; i < index; ++i) {
            current = current->next;
        }
        return current->val;
    }
    
    void addAtHead(int val) {
        ListNode* newNode = new ListNode(val);
        newNode->next = head;
        head = newNode;
        size++;
    }
    
    void addAtTail(int val) {
        ListNode* newNode = new ListNode(val);
        if (!head) {
            head = newNode;
        } else {
            ListNode* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) return;
        if (index == 0) {
            addAtHead(val);
        } else {
            ListNode* newNode = new ListNode(val);
            ListNode* current = head;
            for (int i = 0; i < index - 1; ++i) {
                current = current->next;
            }
            newNode->next = current->next;
            current->next = newNode;
            size++;
        }
    }
    
    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;
        if (index == 0) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        } else {
            ListNode* current = head;
            for (int i = 0; i < index - 1; ++i) {
                current = current->next;
            }
            ListNode* temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
        size--;
    }

private:
    ListNode* head;
    int size;
};



/*
10.Problem: Duplicate in Array
Link: https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397

Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive, there is only one repeated number.
*/
#include<bits/stdc++.h>

#include <vector>
using namespace std;

int findDuplicate(vector<int>& nums) {
    int slow = nums[0], fast = nums[0];
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);
    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}



/*
11.Problem: Flipping an Image
Link: https://leetcode.com/problems/flipping-an-image/

Given an n x n binary matrix image, flip the image horizontally, then invert it.
*/
#include<bits/stdc++.h>

#include <vector>
using namespace std;

vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
    for (auto& row : A) {
        reverse(row.begin(), row.end());
        for (int& pixel : row) {
            pixel ^= 1;
        }
    }
    return A;
}



/*
12.Problem: Linked List Components
Link: https://leetcode.com/problems/linked-list-components/

Given the head of a linked list containing unique integers, and an array G of integers, return the number of connected components in G.
*/

#include <unordered_set>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

int numComponents(ListNode* head, vector<int>& G) {
    unordered_set<int> Gset(G.begin(), G.end());
    int count = 0;
    while (head) {
        if (Gset.count(head->val) && (!head->next || !Gset.count(head->next->val))) {
            count++;
        }
        head = head->next;
    }
    return count;
}


/*
13.Problem: Linked List Cycle
Link: https://leetcode.com/problems/linked-list-cycle/

Given a linked list, determine if it has a cycle in it.
*/

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

bool hasCycle(ListNode *head) {
    if (!head || !head->next) return false;
    ListNode *slow = head, *fast = head->next;
    while (slow != fast) {
        if (!fast || !fast->next) return false;
        slow = slow->next;
        fast = fast->next->next;
    }
    return true;
}



/*
14.Problem: Linked List Cycle II
Link: https://leetcode.com/problems/linked-list-cycle-ii/

Given a linked list, return the node where the cycle begins. If there is no cycle, return null.
*/

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* detectCycle(ListNode* head) {
    if (!head || !head->next) return nullptr;
    ListNode *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            slow = head;
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
    }
    return nullptr;
}




/*
15.Problem: Lucky Numbers in a Matrix
Link: https://leetcode.com/problems/lucky-numbers-in-a-matrix/

Given an m x n matrix of distinct numbers, return all lucky numbers in the matrix in any order.
*/
#include<bits/stdc++.h>

#include <vector>
using namespace std;

vector<int> luckyNumbers (vector<vector<int>>& matrix) {
    vector<int> result;
    for (int i = 0; i < matrix.size(); ++i) {
        int min_row = *min_element(matrix[i].begin(), matrix[i].end());
        int col = find(matrix[i].begin(), matrix[i].end(), min_row) - matrix[i].begin();
        bool is_lucky = true;
        for (int j = 0; j < matrix.size(); ++j) {
            if (matrix[j][col] > min_row) {
                is_lucky = false;
                break;
            }
        }
        if (is_lucky) result.push_back(min_row);
    }
    return result;
}

