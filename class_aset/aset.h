
//
// Created by keke on 09.07.22.
//

#ifndef ASET_ASET_H
#define ASET_ASET_H

#endif //ASET_ASET_H
#include <list>
using namespace  std;
class ASet
{
private:
    int first;
    int last;
    //int *data;
public:
    ASet(int a, int b);
    ASet(int b);      // a по умолчанию 0
    ~ASet();
    void incl(int value);  // включить число в множество
    // если такое число уже есть, то ничего не делать
    void excl(int value);  // исключить  ;oi tq
    bool contain(int value); // содержится в множестве?
    void print(); // распечатать состояние объекта
};

ASet::ASet(int a, int b) {
    this->first = a;
    this->last = b;
}

ASet::ASet(int b) {
    this->first = 0;
    this->last = b;
}

void ASet::incl(int value) {

    if(this->last < value)
    {
        //print();
        for (int i = this->last; i <= value; i++)
        {
            cout << i << endl;
        }
//        unsigned long temp = ls.size();
//        ls.insert(temp, value);
    }

}

void ASet::print() {
    for (int i = this->first; i <= this->last; ++i) {
        cout << i << " " << endl;
    }
}

bool ASet::contain(int value) {
    if(value >= this->last || (value >= first && value <= last))
        return true;
    else
        return false;
}

void ASet::excl(int value) {

    this->first = value++;
}

ASet::~ASet() {

}






