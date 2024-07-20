#include <iostream>

#include <string>

using namespace std;

bool isDigit(char c) {

 return c >= '0' && c <= '9';

}

void countDigits(const string &input, int digitCount[]) {

 // Lambda to increment count of a digit in the array

 auto incrementCount = [&digitCount](char c) {

  if (isDigit(c)) {

   digitCount[c - '0']++;

  }

 };

 for (char c : input) {

  incrementCount(c); }}

void printDuplicateCounts(int digitCount[]) {

 for (int i = 0; i < 10; ++i) {

  if (digitCount[i] > 1) {

   cout << "Number " << i << " is " << digitCount[i] << " times" << endl;

  }}}

int main() {

 string input = "john12Doe14@gmail18.com8";

 int digitCount[10] = {0};

 countDigits(input, digitCount);

 printDuplicateCounts(digitCount);

 return 0;

}
