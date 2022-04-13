#pragma once
#include <iostream>
using namespace std;
class MyString
{
private:
	int size;
	char* str;
public:
	MyString();
	MyString(const char*);
	MyString(const MyString&);
	MyString operator+(const MyString&);
	int count(char);
	int countStr(const char*);
	MyString& replace(char a, char b);
	MyString& insert(int, char);
	MyString& operator=(const MyString& other);
	void remove(char ch);
	friend std::ostream& operator<<(std::ostream& os, MyString& v);
	bool empty();
	int Size();
	char operator[](int index);
	~MyString();
};