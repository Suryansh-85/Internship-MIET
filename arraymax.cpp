
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int array[5]={ 10 ,20 ,30 , 40 , 50};
    int sum;
    for (auto z: array){
        sum+=z;
    }
    cout<<"Sum of elements of array is :"<<sum;


    // to find the min or max element of an array

    int max=0;
    for(auto temp : array){
        if(temp>max) max=temp;
    }
    cout<<"MAx element of array is : "<<max<<endl;
    

    return 0;
}
