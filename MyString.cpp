#include "MyString.h"
#include<iostream>
#include <string.h>
#include <string>
#pragma warning(disable : 4996)
using namespace std;
MyString::MyString(int num)
{
	length = 0;
	string = new char[1];
}

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
	string = nullptr;
}

bool MyString::operator<(MyString& s)
{
	int check=strcmp(s.string, string);//בדיקה איזה מהמחרוזות גדולה יותר
	if (check < 0)
		return true;
	return false;
}

MyString MyString::insert(int index, const char* str)
{
	if (index > length)
	{
		cout << "ERROR\n";
		MyString help(1);
		return help;
	}
	int size = strlen(str) + index;
	char* help = new char[size];
	int i = 0;
	for (; i < index; i++)
		*(help + i) = *(string + i);
	for (int j = 0; i < size; i++, j++)
		help[i] = str[j];
	MyString he(help, size);
	return he;
}

bool MyString::operator>(MyString& s)
{
	int check;
	check = strcmp(string,s.string);
	if (check < 0)
		return true;
	return false;
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

bool MyString::operator<=(MyString& s)
{
	int check = strcmp(s.string, string);//בדיקה איזה מהמחרוזות גדולה יותר
	if (check <= 0)
		return true;
	return false;
}

bool MyString::operator>=(MyString& s)
{
	int check = strcmp(s.string, string);//בדיקה איזה מהמחרוזות גדולה יותר
	if (check <= 0)
		return true;
	return false;
}

bool MyString::operator!=(MyString& s)
{
	int check = strcmp(s.string, string);//בדיקה איזה מהמחרוזות גדולה יותר
	if (check == 0)
		return true;
	return false;
}
