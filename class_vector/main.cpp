#include <iostream>
#include "MyVector.h"
using namespace  std;
int main() {
    MyVector<int> first, second;

    for (size_t i = 0; i < 10; i++)
    {
        //first.push_front(i);
        second.push_back(i);
    }
   // cout << first << endl << second << endl << endl;
    cout << second << endl;
//    first += second;
//    cout << first << endl << second << endl << endl;
//
//    for (size_t i = 0; i < 3; i++)
//        first.pop_back();
//    cout << first << endl << second << endl << endl;
//
//    for (size_t i = 0; i < 3; i++)
//        first.pop_front();
//    cout << first << endl << second << endl << endl;
//
//    cout << first.csize() << endl << first.max_size() << endl << endl;
//
//    first.resize(6);
//    cout << first << endl << second << endl << endl;
//
//    second.resize(15);
//    cout << first << endl << second << endl << endl;
//
//    first.erase();
//    cout << first << endl << second << endl << endl;
//
//    second += first;
//    first.swap(second);
//    cout << first << endl << second << endl << endl;
    return 0;
}
