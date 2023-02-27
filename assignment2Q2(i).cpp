#include <iostream>
#include <string>

class Person {
public:
    Person(const std::string& name, int age)
        : name_(name), age_(age) {}

    std::string name() const { return name_; }
    int age() const { return age_; }

private:
    std::string name_;
    int age_;
};

class Student : public Person {
public:
    Student(const std::string& name, int age,
            const std::string& institution,
            int year,
            const std::string& registrationNumber)
        : Person(name, age), institution_(institution),
          year_(year), registrationNumber_(registrationNumber) {}

    std::string institution() const { return institution_; }
    int year() const { return year_; }
    std::string registrationNumber() const { return registrationNumber_; }

private:
    std::string institution_;
    int year_;
    std::string registrationNumber_;
};
