#include "Person.h"

Person::Person() {
    mWeight = 0;
    mFirstName = "";
}

Person::Person(string name, float weight) {
    mFirstName = name;
    mWeight = weight;
}

Person::~Person() {
}

float Person::operator+(const Person& otherPerson) {
    return this->mWeight + otherPerson.mWeight;
}