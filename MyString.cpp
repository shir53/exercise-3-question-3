#include "MyString.h"
#include<iostream>
#include <string.h>
#include <string>
#include <cstring>
#pragma warning(disable : 4996)
using namespace std;
MyString::MyString(char* word, int size)
{
	length = size;
	char* string = new char(length + 1);
	strcpy(string, word);
}

MyString::~MyString()
{
	if (string)
		delete[]string;
	string = NULL;
}

bool MyString::operator<(MyString& s)
{
	int check= strcmp(string, s.string);//בדיקה איזה מהמחרוזות גדולה יותר
	return (strcmp(string, s.string) < 0);
}

MyString MyString::insert(int index, const char* str)
{
	if (index > length)
	{
		cout << "ERROR\n";
		char* str = NULL;
		MyString help(str, 1);
		return help;
	}
	int size = strlen(str) + index;
	char* help = new char[size];
	int i = 0;
	for (; i < index; i++)
		*(help + i) = *(str + i);
	for (int j = 0; i < size; i++, j++)
		help[i] = string[j];
	MyString myHelp(help, size);
	return myHelp;
}
char* MyString::getString()
{
	return string;
}

bool MyString::operator>(MyString& s)
{
	return (strcmp(string, s.string) > 0);
}

char& MyString::operator[](int index)
{
	if (index > length)
	{
		cout << "ERROR\n";
		exit(-1);
	}
		
	else
		return*(string + index);
}

MyString::MyString(const MyString& ms)
{
	length = strlen(ms.string);
	if (ms.string)
	{
		string = new char[length + 1];
		strcpy(string, ms.string);
	}
	else
		string = NULL;
}

bool MyString::operator<=(MyString& s)
{
	return (strcmp(s.string, string) <= 0);
}

bool MyString::operator>=(MyString& s)
{
    return (strcmp(s.string, string)>=0);
	
}

bool MyString::operator!=(MyString& s)
{
	return (strcmp(s.string, string)==0);
}
