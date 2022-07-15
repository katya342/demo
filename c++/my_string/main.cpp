#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<cstring>
#include<string>
#include "my_string.h"
using namespace std;
int main()
{
    my_string str1("hello world");
    str1.append("dogs");
    str1.print();

    my_string str2("hello");
    str2.pop_back();
    str2.print();
}

my_string::my_string()
{
    this->str = nullptr;
}

my_string::my_string(const char* str)
{
    this->str = new char[strlen(str) + 1];
    for (size_t i = 0; i < strlen(str); i++)
    {
        this->str[i] = str[i];
    }
    this->str[strlen(str)] = '\0';                           // конец массива символов

}

my_string::my_string(const my_string& obj)
{
    size_t size = strlen(obj.str);
    str = new char[size];
    for (size_t i = 0; i < size; i++)
    {
        this->str[i] = obj.str[i];
    }
}

my_string::my_string(my_string&& obj)
{
    this->str = obj.str;
}

my_string::~my_string()
{
    delete[] str;
}

void my_string::print()
{
    cout << this->str << endl;
}

inline size_t my_string::length() const
{
    size_t temp = strlen(str);
    return temp;
}

const char my_string::at(size_t pos) const
{
    size_t length = strlen(this->str);
    for (size_t i = 0; i < length; i++)
    {
        if (i == pos)
        {
            return str[i];
        }
    }
}

void my_string::push_back(char ch)
{
    size_t size = strlen(this->str);
    size++;
    str[size - 1] = ch;
}

void my_string::pop_back()
{
    size_t size = strlen(str);
    this->str[size - 1] = '\0';
}

void my_string::append(const char* str)
{
    size_t lenght2 = strlen(str);
    size_t length = strlen(this->str);
    str = new char[lenght2];
    this->str = new char[length];
    size_t size = lenght2 + length;
    for (size_t i = 0; i < size; i++)
    {
        size_t temp = str[i] + this->str[i];

    }


}

void my_string::append(const my_string& obj)
{
    size_t lenght2 = strlen(obj.str);
    size_t length = strlen(this->str);
    str = new char[lenght2];
    this->str = new char[length];
    size_t size = lenght2 + length;
    for (size_t i = 0; i < size; i++)
    {
        size_t temp = obj.str[i] + this->str[i];

    }

}

void my_string::insert(size_t pos, const char* str)
{
    size_t size = strlen(str);
    size_t size2 = strlen(this->str);
    for (size_t i = 0; i < size + size2; i++)
    {
        this->str[i] = str[pos - i];
    }

}

void my_string::insert(size_t pos, const my_string& obj)
{
    size_t size1 = strlen(this->str);
    size_t size2 = strlen(obj.str);
    for (size_t i = 0; i < size1 + size2; i++)
    {
        this->str[i] = obj.str[pos - i];
    }
}

void my_string::erase()
{
    cout << "String was erased" << endl;
    str[0] = '\0';
}

void my_string::replace(size_t pos, size_t len, const char* str)
{
    size_t size1 = strlen(this->str);
    size_t size2 = strlen(str);
    for (size_t i = pos; i < size1 + size2; i++)
    {
        strncpy_s(this->str, strlen(this->str) + 1, str + pos, len);
    }
}

void my_string::replace(size_t pos, size_t len, const my_string& obj)
{
    if (this->str) {
        if (len == npos) {
            strcpy_s(this->str, strlen(this->str) + 1, obj.str + pos);
        }
        else {
            strncpy_s(this->str, strlen(this->str) + 1, obj.str + pos, len);
        }
    }
}

void my_string::swap(my_string&& obj)
{
    char* mem = this->str;
    this->str = obj.str;
    obj.str = mem;
}

void my_string::copy(const char* str)
{
    size_t length = strlen(this->str);
    for (size_t i = 0; i < length; i++)
    {
        this->str[i] = str[i];
    }
}

void my_string::copy(const my_string& obj)
{
    size_t size = strlen(obj.str);
    for (size_t i = 0; i < size; i++)
    {
        this->str[i] = obj.str[i];
    }
}

size_t my_string::find(const char* str, size_t pos) const
{
    size_t size = strlen(this->str);
    size_t size2 = strlen(str);
    for (size_t i = pos; i < size + size2; i++)
    {
        const char *ptr = strstr(this->str, str);
        if (ptr)
            return ptr - str;
        else
            return npos;
    }
}

size_t my_string::find(const my_string& obj, size_t pos) const
{
    size_t size = strlen(this->str);
    size_t size2 = strlen(obj.str);
    for (size_t i = pos; i < size + size2; i++)
    {
        const char* ptr = strstr(this->str, obj.str);
        if (ptr)
            return ptr - obj.str;
        else
            return npos;
    }
}

int my_string::compare(const char* str) const
{
    size_t size1 = strlen(this->str);
    size_t size2 = strlen(str);
    if (size1 < size2)
        return -1;
    else if (size1 > size2)
        return 1;
    else
        return 0;
}

int my_string::compare(const my_string& obj) const
{
    size_t size1 = strlen(this->str);
    size_t size2 = strlen(obj.str);
    if (size1 > size2)
        return -1;
    else if (size1 < size2)
        return 1;
    return 0;
}

const char* my_string::c_str() const
{
    size_t size = strlen(this->str);
    char *str = new char[size];
    return str;

}

void my_string::clear()
{
    this->str[0] = '\0';
}

ostream& operator<<(ostream& out, const my_string& my_string)
{
    return out;
}