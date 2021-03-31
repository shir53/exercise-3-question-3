#include "MyString.h"
#include<iostream>
#include <string.h>
#include <string>
#include <cstring>
#include <cstdlib>
#pragma warning(disable : 4996)
using namespace std;
MyString::MyString(char* word, int size)
{
	length = size;
	string = new char(length + 1);
	strcpy(string, word);
}
MyString::MyString()
{
	length = 0;
	string = NULL;

}
MyString::MyString(const MyString& ms)// copy constractor
{
	length = ms.length;
	if (ms.string)
	{
		string = new char[length + 1];
		strcpy(string, ms.string);
	}
	else
		string = NULL;
}

MyString::~MyString()
{
	if (string)
		delete[]string;
	string = NULL;
}

bool MyString::operator<(MyString& s)
{
	return (strcmp(string, s.string) < 0);
}

MyString MyString::insert(int index, const char* str)
{
	if (index > length || index < 0)
	{
		cout << "ERROR\n";
		MyString help;
		return help;
	}
	int size = strlen(str) + length+1;
	char* strHelp = new char[size];
	int i = 0;
	for (; i < index; i++)
		*(strHelp + i) = *(string + i);//העתקת החלק הראשון של המחרוזת המקורית
	for (int j = 0; j < strlen(str); j++, i++)
		strHelp[i] = str[j];//העתקת המחרוזת השניה
	for (int k=index; i < size - 1; i++,k++)
		strHelp[i] = string[k];//העתקת החלק השני של המחרוזת המקורית
	MyString help(strHelp, size);
	return help;

	/*int i = 0;
	for (; i < index; i++)
		*(help + i) = *(str + i);
	for (int j = 0; i < size-1; i++, j++)
		help[i] = string[j];
	MyString myHelp(help, size);
	return myHelp;*/
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
	if (index >= length)
	{
		cout << "ERROR\n";
		exit(-1);
	}
		
	else
		return*(string + index);
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
	int x = strcmp(s.string, string);
	if ((x == 0) && length == s.length)//במקרה שהמחרוזות יצאו שונות, אבל האורך שלהן שווה
	{
		for (int i = 0; i < length; i++)
			if ((string[i] != s.string[i]) || (string[i] - s.string[i] != 32) || (string[i] - s.string[i] != -32))
				return false;
	}
	return (strcmp(s.string, string));
}
