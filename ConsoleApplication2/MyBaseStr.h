#pragma once
#include <iostream>
class MyBaseStr
{
protected:
	char* _myStr;
	int _size;
public:
	MyBaseStr(char* myStr, int size);
	MyBaseStr() :MyBaseStr(nullptr, 0) {}
	MyBaseStr(int size) :_size(size), _myStr(nullptr) {}

	MyBaseStr(const MyBaseStr& str);
	void operator=(const MyBaseStr& str);


	bool MyBaseStrCmp(const MyBaseStr str) {
		if (_size != str._size) {
			return false;
		}

		for (int i = 0; i < _size; i++) {
			if (_myStr[i] != str._myStr[i]) {
				return false;
			}
		}

		return true;
	}

	void clearStr() {
		_myStr = nullptr;
		_size = 0;
	}

	int getSize() {
		return _size;
	}


	const char* getLine() {
		return _myStr;
	}

	void setLine(char* newLine) {
		if (_myStr != nullptr) {
			delete[]_myStr;
		}
		delete[]_myStr;
		_myStr = newLine;
	}

	~MyBaseStr() {
		delete[] _myStr;
	}

	void show() {
		for (int i = 0; i < _size; i++) {
			std::cout << _myStr[i] << " ";
		}
		std::cout << std::endl;
	}

	void setSize(const int size) {
		_size = size;
	}

	int getSize() const {
		return _size;
	}
};