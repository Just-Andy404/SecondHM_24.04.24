#pragma once
#include "MyBaseStr.h"
#include <iostream>
using namespace std;

class Binary :public MyBaseStr
{
public:

	Binary() :MyBaseStr() {}
	Binary(int size) :MyBaseStr(size) {}
	Binary(char* _myStr, int size) :MyBaseStr(_myStr, size) {}
	Binary(const Binary& binStr) :MyBaseStr(binStr) {}

	Binary& operator=(const Binary& str);
	Binary& operator+(const Binary& str);
	Binary& operator+=(const Binary& str);

	void input();
	bool isCorrect(char val)const;


	bool operator==(const Binary& str) const;
	bool operator!=(const Binary& str) const;

	~Binary() {}

};