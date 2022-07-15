#include <iostream>
#include<vector>
#include "aset.h"

using namespace  std;
int main() {

    ASet obj (2, 5);
    //obj.print();
    obj.print();
    obj.incl(8);

    obj.contain(3);
    return 0;
}
