#ifndef CCC23_STUDENT_H
#define CCC23_STUDENT_H

#endif //CCC23_STUDENT_H

#include <string>
using namespace std;
class abonent
{
private:
    string name;      string surname;
    size_t ID;    size_t address;
    size_t credit; size_t debet;
    size_t time_mezhd;  size_t time_gorodsk;
public:
    abonent();
    abonent(string nm, string surnm, size_t id, size_t addr, size_t credit, size_t debet, size_t time_mezhd, size_t time_gorodsk);
    void set_name(string nm);      void set_surname(string surnm);
    void set_ID(size_t id);  void set_address(size_t addr);
    void set_credit(size_t credit);  void set_debet(size_t debet);
    void set_time_mezhd(size_t time_m);   void set_time_gorodsk(size_t time_g);
    string get_name();  string get_surname();
    size_t get_ID();    size_t get_address();
    size_t get_credit();    size_t get_debet();
    size_t get_time_mezhd();    size_t get_time_gorodsk();
    void show();
};
ostream & operator << (ostream &out, abonent obj)
{
    out << "Name:" << obj.get_name() << " " << "Surname:" << obj.get_surname()<< "ID:" << obj.get_ID() << "Address:" <<obj.get_address() << endl;
    return out;
}
abonent::abonent() {
    this->ID = 0;
    this->address = 0;
    this->name = "";
    this->time_gorodsk = 0;
    this->time_mezhd = 0;
    this->surname = " ";
    this->debet = 0;
    this->credit = 0;
}

void abonent::set_name(string nm) {
    this->name = nm;
}

void abonent::set_surname(string surnm) {
    this->surname = surnm;
}

void abonent::set_ID(size_t id) {
    this->ID = id;
}

void abonent::set_address(size_t addr) {
    this->address = addr;
}

void abonent::set_credit(size_t credit) {
    this->credit = credit;
}

void abonent::set_debet(size_t debet) {
    this->debet = debet;
}

void abonent::set_time_mezhd(size_t time_m) {
    this->time_mezhd = time_m;
}

void abonent::set_time_gorodsk(size_t time_g) {
    this->time_gorodsk = time_g;
}

string abonent::get_name() {
    return this->name;
}

string abonent::get_surname() {
    return this->surname;
}

size_t abonent::get_ID() {
    return this->ID;
}

size_t abonent::get_address() {
    return this->address;
}

size_t abonent::get_credit() {
    return this->credit;
}

size_t abonent::get_debet() {
    return this->debet;
}

size_t abonent::get_time_mezhd() {
    return this->time_mezhd;
}

size_t abonent::get_time_gorodsk() {
    return this->time_gorodsk;
}

void abonent::show() {
    cout << "Name:" << this->get_name() << " " << "Surname:" << this->get_surname() << "-" << this->get_ID() << "-" << endl;

}

abonent::abonent(string nm, string surnm, size_t id, size_t addr, size_t credit, size_t debet, size_t time_mezhd,
                 size_t time_gorodsk)
                 {
    this->name = nm;
    this->surname = surnm;
    this->ID = id;
    this->address = addr;
    this->credit = credit;
    this->debet = debet;
    this->time_mezhd = time_mezhd;
    this->time_gorodsk = time_gorodsk;

}





