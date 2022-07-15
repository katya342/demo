#include <iostream>
#include "vector.h"
#include <string>
using namespace  std;
template <typename T>
void show(const vector<T> & vector_V)
{
    for (int i = 0; i < vector_V.Size(); ++i) {
        cout << vector_V[i] << endl;
    }
}



int main() {

    vector<string> vector_V;
    vector_V.PushBack("Dog");
    vector_V.PushBack("Cpp");
    vector_V.PushBack("Vector");
    show(vector_V);
    return 0;
}
