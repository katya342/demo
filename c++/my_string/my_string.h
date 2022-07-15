//
// Created by keke on 10.07.22.
//

#ifndef MY_STRING_MY_STRING_H
#define MY_STRING_MY_STRING_H

#endif //MY_STRING_MY_STRING_H
#include<iostream>
#include<cstring>
using namespace std;

class my_string
{
private:
    char* str;
public:
    /* Предустановленное значение. Означает «до конца строки». */
    static const size_t npos = -1;
    //static const size_t npos = UINTMAX_MAX;
    my_string();
    my_string(const char* str);
    my_string(const my_string& obj); // Копирования
    my_string(my_string&& obj);      // Переноса
    ~my_string();
    void print();
    inline size_t length() const;

    ///* Возвращает символ из соответствующей позиции. */
    const char at(size_t pos) const;

    ///* Добавляет символ в конец строки. */
    void push_back(char ch);

    /* Удаляет последний символ из строки. */
    void pop_back();

    ///* Добавить строку в конец текущей строки. */
    void append(const char* str);
    void append(const my_string& obj);

    ///* Вставляет строку непосредственно перед символом, обозначенным pos. */
    void insert(size_t pos, const char* str);
    void insert(size_t pos, const my_string& obj);

    ///* Очищает строку. */
    void erase();

    ///* Заменяет часть строки, которая начинается с символа pos и заменяет len символов,
    //   новым содержимым. При значении len = npos копируются все символы до конца строки. */
    void replace(size_t pos, size_t len, const char* str);
    void replace(size_t pos, size_t len, const my_string& obj);

    ///* Обменивает содержание двух строк. */
    void swap(my_string&& obj);

    ///* Копирует строку. */
    void copy(const char* str);
    void copy(const my_string& obj);

    ///* Ищет в строке первое вхождение подстроки, указанной ее аргументами.
    //   Когда задано значение pos, поиск начинается с указанной позиции.
    //   Положение первого символа найденной последовательности.
    //   Если совпадений не найдено, функция возвращает my_string::npos.  */
    size_t find(const char* str, size_t pos = 0) const;
    size_t find(const my_string& obj, size_t pos = 0) const;

    ///* Сравнивает две строки. */
    int compare(const char* str) const;
    int compare(const my_string& obj) const;

    ///* Возвращает строку как массив символов в стиле С. */
    const char* c_str() const;
    void clear();
};
ostream& operator << (ostream& out, const my_string& my_string);
