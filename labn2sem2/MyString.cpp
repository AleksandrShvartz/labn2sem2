#include "myString.h"
using namespace std;

// Определение конструктора.
MyString::MyString(const char* s) {
	int i = 0;
	while (s[i] != 0) {
		i++;
	}
	m_pStr = new  char[i + 1];
	for (int j = 0;j <= i;j++)
		m_pStr[j] = s[j];
	std::cout << "1";
}
MyString::MyString() {
	m_pStr = 0;
	std::cout << "0";
}
MyString::MyString(const MyString& s) {
	if (s.m_pStr == 0) {
		m_pStr = 0;
	}
	else {
		int i = 0;
		while (s.m_pStr[i] != 0)i++;
		m_pStr = new char[i + 1];
		for (int j = 0;j <= i;j++)
			m_pStr[j] = s.m_pStr[j];
		std::cout << "2";
	}
}

// Определение деструктора.
MyString::~MyString() {
	std::cout << "3";
	if (m_pStr != 0) {
		delete[] m_pStr;

	}
}


char* MyString::GetString()
{
	
		return (m_pStr);
	// TODO: Add your implementation code here.
}


void MyString::SetNewString(const char* s) {
	if (s == 0) {
		delete[] m_pStr;
		m_pStr = 0;
	}
	else {
		delete[] m_pStr;
		int i = 0;
		while (s[i] != 0)i++;
		m_pStr = new char[i + 1];
		for (int j = 0;j <= i;j++)
			m_pStr[j] = s[j];
	}
	// TODO: Add your implementation code here.
}

