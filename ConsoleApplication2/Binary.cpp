#include "Binary.h"

Binary& Binary::operator=(const Binary& str)
{
	if (this != &str) {
		MyBaseStr::operator=(str);
	}

	return *this;
}

Binary& Binary::operator+(const Binary& str) {

	int size = (str.getSize()) + (this->getSize());
	char* newStr = new char[size + 1];

	int index = 0;
	const char* fLine = this->_myStr;
	for (int i = 0; i < this->getSize(); i++) {
		newStr[index] = fLine[i];
		index++;

	}

	const char* sLine = str._myStr;
	for (int i = 0; i < str.getSize(); i++) {
		newStr[index] = sLine[i];
		index++;
	}

	newStr[size] = '\0';

	this->_size = size;
	delete[]this->_myStr;
	this->_myStr = newStr;

	return *this;

}

Binary& Binary::operator+=(const Binary& str)
{
	*this = *this + str;
	return *this;

}

void Binary::input()
{
	int size = 100;
	char* bitStr = new char[size];
	cout << "Enter bit string < 0 or 1 >: ";
	cin.getline(bitStr, size);

	int index = 0;
	while (bitStr[index] != '\0') {
		if (!isCorrect(bitStr[index])) {
			clearStr();
			cout << "You enter wrong str\n";
			break;
		}
		index++;
	}

	if (this->_myStr != nullptr) {
		delete[] this->_myStr;
	}
	this->_myStr = bitStr;
	this->_size = index;
}

bool Binary::isCorrect(char val) const
{
	if (val == '0' || val == '1') {
		return true;
	}
	return false;
}

bool Binary::operator==(const Binary& str) const
{
	if (this->_size != str._size) {
		return false;
	}
	else {
		for (int i = 0; i < this->_size; i++) {
			if (this->_myStr[i] != str._myStr[i]) {
				return false;
			}
		}
	}

	return true;

}

bool Binary::operator!=(const Binary& str) const
{
	if (this->_size != str._size) {
		return true;
	}
	for (int i = 0; i < this->_size; i++) {
		if (this->_myStr[i] != str._myStr[i]) {
			return true;
		}
	}

	return false;
}