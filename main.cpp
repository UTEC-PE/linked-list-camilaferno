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

  List<int> list2;
  list2.push_front(7);
  list2.push_front(8);
  list2.push_front(9);

  cout << "Numbers: ";
  numbers.print();
  cout << "\n";
  cout << "List2: ";
  list2.print();
  cout << "\n";

  numbers.pop_back();

  cout << endl;
  cout << "Concat: ";
  numbers.concat(list2);
  numbers.print();
  cout << endl;
  numbers.clear();
  numbers.print();


  return 0;
}
