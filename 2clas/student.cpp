#include "student.h"

#include <iostream>

Student::Student(std::string name, int age, std::string birthday)
  : name{name}, age{age}, birthday{birthday} {
  
}

Student::~Student() {
  
}

void Student::display() const {
  std::cout << "Name: " << name << "\n";
  std::cout << "Age: " << age << "\n";
  std::cout << "Birthday: " << birthday << "\n";
}
