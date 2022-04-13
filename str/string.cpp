#include "string.h"
#include <iostream>
using namespace std;
MyString::MyString(void) {};


MyString::MyString(const char* str) {
	this->size = strlen(str);
	this->str = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		this->str[i] = str[i];
	}
	this->str[size] = '\0';
}


MyString::MyString(const MyString& other) {
	this->size = other.size;
	this->str = new char[this->size + 1];
	for (int i = 0; i < this->size; i++)
	{
		this->str[i] = other.str[i];
	}
	this->str[this->size] = '\0';
}


MyString MyString::operator+(const MyString& other) {
	MyString Temp;
	Temp.size = this->size + other.size;
	Temp.str = new char[this->size + other.size + 1];
	int i = 0;
	for (; i < this->size; i++)
	{
		Temp.str[i] = this->str[i];
	}
	for (int j = 0; j < other.size; i++, j++)
	{
		Temp.str[i] = other.str[j];
	}
	Temp.str[Temp.size] = '\0';
	return Temp;
}


char MyString::operator[](int index) {
	return this->str[index];
}


int MyString::count(char ch) {
	int count = 0;
	for (int i = 0; i < this->size; i++)
	{
		if (this->str[i] == ch) {
			count++;
		}
	}
	return count;
}


int MyString::countStr(const char* ch) {
	int newSize = strlen(ch); int s = 0, res = 0;
	for (int i = 0; i < newSize; i++)
	{
		for (int j = 0; j < this->size; j++)
		{
			if (ch[i] == this->str[j]) {
				i++;
				s++;
				if (s == newSize) {
					res++;
					s = 0;
					i = 0;
				}
			}
		}
	}
	return res;
}


std::ostream& operator<<(std::ostream& os, MyString& v) {
	os << v.str;
	return os;
}

MyString& MyString::replace(char a, char b) {
	MyString Temp;
	Temp.size = this->size;
	Temp.str = new char[this->size + 1];
	for (int i = 0; i < this->size; i++)
	{
		if (this->str[i] == a)this->str[i] = b;
		Temp.str[i] = this->str[i];
	}
	Temp.str[Temp.size] = '\0';
	return Temp;
}


void MyString::remove(char ch) {
	string result;
	for (int i = 0; i < this->size; i++)
	{
		if (this->str[i]!= ch) {
			result += this->str[i];
		}
	}
	std::cout <<'"' << result <<'"' << std::endl;
}


MyString& MyString::operator=(const MyString& other) {
	this->size = other.size;
	if (this->str != nullptr)delete[]str;
	this->str = new char[this->size];
	for (int i = 0; i < this->size; i++)
	{
		this->str[i] = other.str[i];
	}
	return *this;
}


MyString& MyString::insert(int a, char b) {
	MyString Temp;
	Temp.size = this->size;
	Temp.str = new char[this->size + 1];
	for (int i = 0; i < this->size; i++)
	{
		if (i == a) this->str[i] = b;
		Temp.str[i] = this->str[i];
	}
	Temp.str[Temp.size] = '\0';
	return Temp;
}


bool MyString::empty() {
	if ((this->str != NULL) and (this->str[0] == '\0'))return true;
	else return false;
}


int MyString::Size() {
	return strlen(this->str);
}


MyString::~MyString() {
	delete[]str;
}