//
// Created by keke on 12.07.22.
//

#ifndef STUDENT_CLASS_STUDENT_H
#define STUDENT_CLASS_STUDENT_H

#endif //STUDENT_CLASS_STUDENT_H

class student
{
private:
    std::string surname;
    std::string initials;
    size_t nomer_group;
//    size_t access[5] = {1, 2, 3, 4, 5};
    size_t access;
public:
   // size_t sredniy_ball(arr[5]);
   student();
   student(std::string surn, std:: string init, size_t nom, size_t access);
   size_t get_access();
   std::string get_surname();
   std::size_t get_nomer_group();
   //void set_access(size_t access[]);
};

student::student(std::string surn, std::string init, size_t nom, size_t access) {
    this->surname = surn;
    this->initials = init;
    this->nomer_group = nom;
    this->access = access;
    //this->access[4] = ac;
}

size_t student::get_access() {
    return this->access;
}

std::size_t student::get_nomer_group() {
    return this->nomer_group;
}

std::string student::get_surname() {
    return this->surname;
}






