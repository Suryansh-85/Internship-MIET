#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// int main(){
//     int a[5]={1,4,2,3,8};
//     int value=5;
//     int count=0;
//     for(int i=0;i<5;i++){
//         if(a[i]+a[i+1]==value) {
//             count++;
//         }
//     }
//     cout<<"count of pairs with sum 5 :"<<count<<endl;
//     return 0;
// }

int main(){
    int a[6]={1,4,2,3,8,9};
    int value=7;
    int count=0;
    // for(int i=0;i<4;i++){
    //     if(a[i]+a[i+1]+a[i+2]==value) {
    //         count++;
    //     }
    // }
    //or we can use multiple or nested for loops 
    for (int i=0;i<6;i++){
        for (int j=i+1;j<6;j++){
            for(int k=j+1;k<6;k++){
                if(a[i]+a[j]+a[k]==value){
                    count++;
                }
            }
        }
    }
    cout<<"count of pairs with sum 5 :"<<count<<endl;
    return 0;
}
