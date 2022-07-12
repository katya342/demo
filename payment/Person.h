//
// Created by keke on 12.07.22.
//

#ifndef PAYMENT_PERSON_H
#define PAYMENT_PERSON_H

#endif //PAYMENT_PERSON_H
#include<iostream>
using namespace std;
class Person
{
private:
    string name;
    string surname;
    string familiya;

public:
    Person();
    Person(string nm, string surnm, string fam);
};

Person::Person(string nm,  string surnm, string fam) {
    this->surname = surnm;
    this->name = nm;
    this->familiya = fam;
}

Person::Person() {
    this->name = " ";
    this->familiya = " ";
    this->surname = " ";
}
