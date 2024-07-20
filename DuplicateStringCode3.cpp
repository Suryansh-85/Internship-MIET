#include<bits/stdc++.h>

using namespace std;

int main () {

 string s1 = "jhon12Doe14@gmail18.com8";

 string s2 = s1;

 int count = 0;

 sort(s2.begin(), s2.end());

 for (int i = 0 ;i<s2.length()-1;i++) {

  if (s2[i] == s2[i+1]){

  cout<<"Duplicate Number: "<<s2[i]<<endl;

  count++;}

  if (isalpha(s2[i]))

  break;

 }

 cout << "Total Duplicated Numbers: "<<count<<endl;

}
