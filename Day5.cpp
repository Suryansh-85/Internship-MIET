/*
#include<iostream>
#include<bits/stdc++.h>
#include<array>
using namespace std;



class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_so_far = nums[0]; // Overall maximum sum found so far
        int max_ending_here = nums[0]; // Maximum sum of subarrays ending at the current position

        for (size_t i = 1; i < nums.size(); ++i) {
            // Update max_ending_here by considering the current element
            max_ending_here = max(nums[i], max_ending_here + nums[i]);

            // Update max_so_far if needed
            max_so_far = max(max_so_far, max_ending_here);
        }

        return max_so_far;
    }
    int maxSubArray2(vector<int>& nums){
        int ans=INT_MIN;
        int sum=0;

        for(const int num :nums){
            sum=max(num,sum+num);
            ans=max(ans,sum);
        }
        return ans;
    }
};
*/
//main function +test cases must be included before using


// List
/*
#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> l;
    l.push_back(10);
    l.push_front(11);
    for(int i : l) cout<<i<<"\t";
    cout<<"\n";
    l.erase(l.begin());
     for(int i : l) cout<<i<<"\t";
     cout<<"\n";

     cout<<"size of list : "<<l.size();
    return 0;
}
*/



//Push pop Vector
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Vectorfun{
    vector <int> a;
    public:
        void push(int x){
            a.push_back(x);
        }
        void pop(){
            a.pop_back();
        }
        void display(){
            for(int x :a){
                cout<<x<<"\t";
            }
        }
        void front(){
            cout<<a.front();
        }
        void back(){
            cout<<a.back();
        }
        void capacity(){
            cout<<a.capacity();
        }
        void isempty(){
            if(a.empty()==1){
                cout<<"EMPTY"<<endl;
            }
            else{
                cout<<"NOT EMPTY"<<endl;
            }
        }
};


int main(){
    Vectorfun obj;
    label: int ch;
    cout<<"Enter \n1.PUSH \n2.POP \n3.DISPLAY \n4.PRINT FIRST ELEMENT OF VECTOR \n5.PRINT LAST ELEMENT OF VECTOR \n6.PRINT CAPACITY(REMAINING SPACE IN VECTOR TILL NEXT ALLOCATION OR REALLOC)!! : \n7.IS EMPTY \n8.EXIT"<<endl;
   
    cin>>ch;
    if(ch==1) {
        int w;
        cout<<"eneter value to be push into vector : "<<endl;
        cin>>w;
        obj.push(w);
                goto label;

    }
    else if(ch==1) {
        obj.pop();
                goto label;

    }
    else if(ch==3){
        obj.display();
                goto label;

    }
    else if(ch==4){
        obj.front();
                goto label;

    }
    else if(ch==5){
        obj.back();
                goto label;

    }
    else if(ch==6){
        obj.capacity();
                goto label;

    }
    else if(ch==7){
        obj.isempty();
                goto label;

    }
    else if(ch==8){
        exit(0);
    }
    else{
        cout<<"enetr valid input "<<endl;
        goto label;
    }
    return 0;
}
