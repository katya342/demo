#include <iostream>
#include"stack.h"
#include "queue.h"

using namespace std;
int main() {
    Stack<int> si;
    Stack<int>(10);
    for (int i = 0; i < 10; ++i) {
        si.push(i);
    }
    for (int i = 0; i < 10; ++i) {
        si.pop();
    }

    Queue <int> qu;
    Queue<int>(10);
    qu.add(5);
    qu.add(8);
    qu.add(12);
    qu.show();
    return 0;
}
