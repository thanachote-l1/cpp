:**static (variable)** - variable get allocated for the lifetime of the program

# Class

**static** - the member is shared - it means no matter how many objects of the class are created, there is only one copy of the static member.
**constexpr** - the function/variable can be evaluated at compile time. Better performance. Once a program is compiled and finalized by the developer, it is run multiple times by users. The idea is to spend time in compilation and save time at run time.  
**private (default)** - members of class are not accessible outside class or derived class.  
**protected** - members of class that are not accessible outside of class, but is accessible in derived class.  
**public** - accessible to all.  

## Constructor
```
class Student {
private:
    std::string name;
    int age;
public:
    Student(std::string name_c, int age_c) 
        : name(name_c), age(age_c) {}
};
```

### Copy Constructor
```
Student(const Student &s) 
    : name(s.name), age(s.age) {}
```

## Destructor
Most of the time, the default destructor is sufficient enless dealing with dynamic memory allocation (pointer)
```
class Student {
private:
    std::string name;
    int age;
public:
    Student(std::string name_c, int age_c) 
        : name(name_c), age(age_c) {}
    ~Student() {}
};
```
### Dealing with dynamic memory allocation
```
class Student {
private:
    std::string *name;
    int *age;
public:
    Student(std::string name_c, int age_c) 
        : name(new std::string(name_c)), age(new int(age)) {}
    ~Student() {
        delete name;
        delete age;
    }
};
```
## .h file
If the filename is *student.h*
```
#ifndef _student_h_
#define _student_h_
...
#endif
```

## .cpp file (non-main one - for class method)
```
#include "student.h"
```

# Pointer



