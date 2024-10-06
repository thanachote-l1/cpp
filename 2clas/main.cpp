#include <iostream>
#include "student.h"

int main () {
  Student *Big = new Student("Big", 18, "10/09/2006");

  Big -> display();
  
  return 0;
}
