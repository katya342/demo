#include <iostream>
#include "abonent.h"
#include <algorithm>
#include <vector>

const int limit_time_gorodsk = 10;

bool comparator (int a, int b)
{
    return (a<b);
}

using namespace std;
int main() {
    const int size = 3;
    abonent obj1("katya", "bezverkhova", 234, 33, 5555, 23, 25, 28);
    abonent obj2("noname", "ddsdsdsds", 154, 22, 7777, 65, 27, 9);
    abonent obj3("noname2", "kadkadkakdk", 132, 45, 8888, 78, 12, 1);
    abonent massiv[size] = {obj1, obj2, obj3};
    vector <abonent> sort_in_vector (massiv, massiv + size);
//    massiv->set_name("katya");
//    massiv->set_surname("bezverkhova");
//    massiv->set_ID(234);
//    massiv->set_time_gorodsk(12);
//    massiv->set_time_mezhd(24);
  //  massiv->show();
//  obj1.set_time_mezhd(24);
//  obj2.set_time_mezhd(29);
    for (size_t i = 0; i < size; ++i)
    {
       if (massiv[i].get_time_mezhd() != 0)
           cout <<  "Пользовались междугородной связью: " << endl;
            massiv[i].show();

            if(massiv[i].get_time_gorodsk() > limit_time_gorodsk)
                cout << "Время городских переговоров превышает заданное: " << endl;
                massiv[i].show();
    }
    sort(sort_in_vector.begin(), sort_in_vector.end());
    for (size_t i = 0; i < size; ++i)
    {
        cout << sort_in_vector[i].get_name() << " " << endl;
    }

    return 0;
}
