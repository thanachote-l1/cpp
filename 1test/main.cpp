#include <iostream>

void square1(int n) {
  std::cout << "Address of n1 in square1(): " << &n << std::endl;

  n*=n;
  std::cout << "Square of n1: " << n << std::endl;
}

void square2(int *n) {
  std::cout << "Address of n2 in square2(): " << n << std::endl;

  *n*=*n;
  std::cout << "Square of n2: " << *n << std::endl;
}

void square3(int &n) {
  std::cout << "Address of n3 in square3(): " << n << std::endl;

  n*=n;
  std::cout << "Square of n3: " << n << std::endl;
}

int main () {
  int n1 {8};
  
  std::cout << "Address of n1 in main(): " << &n1 << std::endl;
  square1(n1);
  std::cout << "No change in n1: " << n1 << std::endl;

  std::cout << "\n";

  int n2 = 8;

  std::cout << "Address of n2 in main(): " << &n2 << std::endl;
  square2(&n2);
  std::cout << "Change in n2: " << n2 << std::endl;

  std::cout << "\n";

  int n3 = 8;

  std::cout << "Address of n3 in main(): " << &n3 << std::endl;
  square3(n3);
  std::cout << "Change in n3: " << n3 << std::endl;
  
  return 0;
}
