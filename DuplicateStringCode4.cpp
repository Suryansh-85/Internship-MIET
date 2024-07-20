#include <iostream>

#include <unordered_map>

using namespace std;

int main() {

 string s = "jhon12Doe14@gmail.com8";

 unordered_map<char, int> countMap;

 for (char c : s) {

  if (isdigit(c)) {

   countMap[c]++;

  }

 }

 for (const auto& entry : countMap) {

  cout << entry.first << " : " << entry.second << endl;

 }

 return 0;

}
*/


/*
#include<iostream>

using namespace std;

int main()

{

 string s;

 cin>>s;

 int c=0;

 for(char i: s)

 {

  if(i=='1'||i=='2'||i=='3'|i=='4'||i=='5'||i=='6'||i=='7'||i=='8'||i=='9'||i=='0')

  {

   c=0;

   char k;

   for(char j:s)

   {

    if(j==i)

    {

     k=j;

     c++;

    }

   }

   cout<<k<<" occurs "<<c<<" times"<<endl;

 } }}
 
