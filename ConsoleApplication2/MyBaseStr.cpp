#include "MyBaseStr.h"

MyBaseStr::MyBaseStr(char* myStr, int size)
{
    _size = size;
    _myStr = new char[size];
    for (int i = 0; i < size; i++) {
        _myStr[i] = myStr[i];
    }
}

MyBaseStr::MyBaseStr(const MyBaseStr& str)
{
    _size = str._size;
    char* newStr = new char[_size];
    for (int i = 0; i < _size; i++) {
        newStr[i] = str._myStr[i];
    }

    delete[] _myStr;
    _myStr = newStr;
}

void MyBaseStr::operator=(const MyBaseStr& str)
{
    _size = str._size;
    char* newStr = new char[_size];
    for (int i = 0; i < _size; i++) {
        newStr[i] = str._myStr[i];
    }

    delete[] _myStr;
    _myStr = newStr;
}