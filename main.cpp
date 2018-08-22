#include <iostream>
#include "list.h"
#include "node.h"

using namespace std;

int main() {
  List<int> numbers;
  numbers.push_front(5);
  numbers.push_front(3);
  numbers.print();
  return 0;
}
