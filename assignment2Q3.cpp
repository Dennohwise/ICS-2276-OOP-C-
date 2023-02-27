#include <iostream>
#include <string>

using namespace std;

// Base class: Student
class Student {
public:
  string name;
  int age;
  string regNumber;

  void display() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Registration Number: " << regNumber << endl;
  }
};

// Derived class: ICT student
class ICTStudent : public Student {
public:
  string course;
};

// Derived class: Certificate student
class CertificateStudent : public ICTStudent {
public:
  int duration; // in months
  void display() {
    ICTStudent::display(); // call the base class display() method
    cout << "Course: " << course << endl;
    cout << "Duration: " << duration << " months" << endl;
  }
};

// Derived class: Diploma student
class DiplomaStudent : public ICTStudent {
public:
  int duration; // in months
  void display() {
    ICTStudent::display(); // call the base class display() method
    cout << "Course: " << course << endl;
    cout << "Duration: " << duration << " months" << endl;
  }
};

// Derived class: BSC-IT student
class BSCITStudent : public ICTStudent {
public:
  int stage1;
  int stage2;
  int stage3;
  void display() {
    ICTStudent::display(); // call the base class display() method
    cout << "Course: " << course << endl;
    cout << "Stage 1: " << stage1 << endl;
    cout << "Stage 2: " << stage2 << endl;
    cout << "Stage 3: " << stage3 << endl;
  }
};

// Derived class: Law student
class LawStudent : public Student {
public:
  string course;
  void display() {
    Student::display(); // call the base class display() method
    cout << "Course: " << course << endl;
  }
};

// Derived class: Business student
class BusinessStudent : public Student {
public:
  string course;
  void display() {
    Student::display(); // call the base class display() method
    cout << "Course: " << course << endl;
  }
};

int main() {
  // Create some student objects and set their attributes
  CertificateStudent certStudent;
  certStudent.name = "Ali Hassan";
  certStudent.age = 20;
  certStudent.regNumber = "1000";
  certStudent.course = "Programming";
  certStudent.duration = 6;

  BSCITStudent bscitStudent;
  bscitStudent.name = "Jane Wangeci";
  bscitStudent.age = 22;
  bscitStudent.regNumber = "2000";
  bscitStudent.course = "Computer Science";
  bscitStudent.stage1 = 80;
  bscitStudent.stage2 = 85;
  bscitStudent.stage3 = 90;

  LawStudent lawStudent;
  lawStudent.name = "Peter Kiharie";
  lawStudent.age = 25;
  lawStudent.regNumber = "9000";
  lawStudent.course = "Law";

  BusinessStudent businessStudent;
  businessStudent.name = "Mary Kiptoo";
  businessStudent.age = 23;
  businessStudent.regNumber = "5000";
  businessStudent.course = "Business Management";

  // Call the display() method of each student object to print their details
  cout <<"
return 0;
}
