#ifndef _student_h_
#define _student_h_

#include <string>
#include <iostream>

class Student{
private:
  static constexpr const char *def_name = "Unknown";
  static constexpr const char *def_age = "0";
  static constexpr const char *def_birthday = "00/00/0000";
protected:
  std::string name;
  int age;
  std::string birthday;
public:
  Student(std::string name = def_name, int age = 0, std::string birthday = def_birthday)
    : name{name}, age{age}, birthday{birthday} {}

  ~Student() {}

  void display() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Birthday: " << birthday << std::endl;
  }
  
};


#endif // !_student_h_
