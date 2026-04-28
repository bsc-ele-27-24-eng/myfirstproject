#pragma once
#include <string>
using namespace std;

class Person {
public:
    Person();                         
    Person(string name, float weight); 
    ~Person();

    float operator+(const Person& otherPerson);

private:
    float mWeight;
    string mFirstName;
    int mAge;
};