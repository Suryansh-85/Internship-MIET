//Parking project
/*
#include <iostream>
using namespace std;
int main()
{
        int n = 20, d, b, e, c, p, count1 = 0, count2 = 0, count3 = 0;
        for (int i = 0; i < n; i++)
        {
                cout << "1. --- Park car ---" << endl;
                cout << "2. --- Park bike ---" << endl;
                cout << "3. --- Park rickshaw---" << endl;
                cout << "4. ---Exit---" << endl;
                cout << "Enter your choice:" << endl;
                cin >> d;
                if (d == 1)
                {
                        cout << "Enter the number of cars parked:" << endl;
                        cin >> b;
                        count1 += b;
                        cout << " Number of car parked:" << count1 << endl;
                }
                if (d == 2)
                {
                        cout << "Enter the number of bikes parked:" << endl;
                        cin >> c;
                        count2 += c;
                        cout << " Number of bikes parked:" << count2 << endl;
                }
                if (d == 3)
                {
                        cout << "Enter the number of rickshaws parked:" << endl;
                        cin >> e;
                        count3 += e;
                        cout << " Number of rickshaw parked:" << count3 << endl;
                }

                if (d > 4)
                {
                        cout << "Invalid choice:" << endl;
                        cout << "Please enter from 1-5" << endl;
                }
                cout << "---Do you want to perform again--?" << endl;
                cout << "---Press the below choices:" << endl;
                if (d == 4)
                {
                        cout << "----EXIT---" << endl;
                }
        }
        return 0;
}
*/



//Selection Sort
/*
#include<iostream>
#include<bits/stdc++.h>
#include <chrono>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
void selectionsort(int arr[],int len){
    for(int i=0;i<len-1;i++){
        int minindex=i;
        for(int j=i+1;j<len;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[i],arr[minindex]);
    }
}
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // Calling selectionsort function
    selectionsort(arr, n);
    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}*/



//String and Sub string
/*
#include<iostream>
#include<bits/stdc++.h>
#include <chrono>
using namespace std;


int main(){
    string str="Hello World!";
    string from="World!";
    string to="c++";

    size_t start_pos=str.find(from);
    if(start_pos != string::npos){
        str.replace(start_pos,from.length(),to);

    }
    cout<<"String after replacement : "<<str;
    return 0;

}

#include<iostream>
#include<bits/stdc++.h>
#include <chrono>
using namespace std;


int main(){
    string str="Hello World!";
    size_t found=str.find("f");
    if(found!= string::npos){
        cout<<"substring found at index: "<<found<<endl;
    }
    else{
        cout<<"string not found !!!!!";
    }

    return 0;
} 
*/
