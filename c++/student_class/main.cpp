#include <iostream>
#include<vector>
#include "student.h"
#include<algorithm>
using namespace  std;
int main() {
    student obj1("bezverkhova", "kb", 5, 1);
    student obj2("ivanov", "ds", 5, 2);
    student obj3("b", "kb", 2, 5);
    student obj4("burito", "ds", 3, 4);
    student obj5("bash", "kb", 5, 4);
    student obj6("blender", "ds", 1, 2);
    student obj7("benzopila", "kb", 5, 5);
    student obj8("bosnia", "ds", 1, 5);
    student obj9("bumer", "kb", 5, 2);
    student obj10("buffer", "ds", 1, 2);
    student masiv[10] = {obj1, obj2, obj3, obj4, obj5, obj6, obj7, obj8, obj9, obj10};
  //  vector <student> students  = {obj1, obj2, obj3, obj4, obj5, obj6, obj7, obj8, obj9, obj10};;
    for (size_t i = 0; i < 10; ++i)
    {
        if(masiv[i].get_access() == 4 || masiv[i].get_access() == 5)
        cout <<"Surname: "<< masiv[i].get_surname() << "----------" <<"Group number: "<< masiv[i].get_nomer_group() << endl;
    }
    cout << "Grade average: " << endl;

//        sort(masiv, masiv + 10);
//        cout << masiv[i].get_access();
        // Сортировка массива пузырьком
        student temp;
        for (int i = 0; i < 10 - 1; i++) {
            for (int j = 0; j < 10 - i - 1; j++) {
                if (masiv[j] > masiv[j + 1]) {
                    // меняем элементы местами
                    temp = masiv[j];
                    masiv[j] = masiv[j + 1];
                    masiv[j + 1] = temp;
                }
            }
        }
    for (size_t i = 0; i < 10; ++i)
    {
        cout << masiv[i].get_access() << " ";
    }
    return 0;
}
