// Write a program to find Number of digits in an integer
#include <iostream>
#include <string>
using namespace std;
void howmany(int input) {
  int ok = 0;
  if (input == 0) {
    cout << input << endl;
  }
  while (input != 0) {
    input = input / 10;
    ++ok;
  }
  cout << ok;
}

int main() {
  int k = 777777777;
  howmany(k);
}