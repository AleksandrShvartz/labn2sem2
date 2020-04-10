#pragma once
#include <iostream>
class MyString
{
	char* m_pStr;	//строка-член класса
public:
	MyString(const char* s);
	MyString();
	~MyString();
	char* GetString();
	MyString(const MyString& s);
	void SetNewString(const char* s);
};
