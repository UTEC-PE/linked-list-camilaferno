#include <iostream>
#include "list.h"
#include "node.h"

using namespace std;

int main() {
  List<int> numbers;
  numbers.push_front(6);
  numbers.push_front(5);
  numbers.push_front(4);
  numbers.push_front(3);
  numbers.push_front(2);
  numbers.push_front(1);
  numbers.print();
  cout << endl;


  List<int> number;
  number.push_front(7);
  number.push_front(8);
  number.push_front(9);
  number.print();
  cout << endl;


  numbers.concat(number);
  numbers.print();
  return 0;
}
