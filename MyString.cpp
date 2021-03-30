#include "MyString.h"
#include<iostream>
//#include <string.h>
#include <string>
#include <cstring>
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
	string = NULL;
}

bool MyString::operator<(MyString& s)
{
	int check=strcmp(string, s.string);//áãé÷ä àéæä îäîçøåæåú âãåìä éåúø
	if (check < 0)
		return true;
	return false;
	// Better way: return (strcmp(string, s.string) < 0);
}

MyString MyString::insert(int index, const char* str)
{
	if (index > length)
	{
		cout << "ERROR\n";
		MyString help(1);
		return help;	// Prefer just to return NULL -> return NULL;
	}
	int size = strlen(str) + index;
	char* help = new char[size];
	int i = 0;
	for (; i < index; i++)	// Part I from the second string.
		*(help + i) = *(string + i);
	for (int j = 0; i < size; i++, j++)	// The entire first string.
		help[i] = str[j];
	// Now we need to complete the proccess and copy the rest of the second string.
	for(int k=index; i < (length + strlen(str)); k++, i++)
		help[i] = string[k];
	return help;
}

bool MyString::operator>(MyString& s)
{
	int check;
	check = strcmp(string,s.string);
	if (check > 0)
		return true;
	return false;
	//Better way: return (strcmp(string, s.string) > 0);
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
	int check = strcmp(string, s.string);//áãé÷ä àéæä îäîçøåæåú âãåìä éåúø
	if (check <= 0)
		return true;
	return false;
	//Better way: return (strcmp(string, s.string) <= 0);
}

bool MyString::operator>=(MyString& s)
{
	int check = strcmp(string, s.string);//áãé÷ä àéæä îäîçøåæåú âãåìä éåúø
	if (check >= 0)
		return true;
	return false;
	//Better way: return (strcmp(string, s.string) >= 0);
}

bool MyString::operator!=(MyString& s)
{
	int check = strcmp(s.string, string);//áãé÷ä àéæä îäîçøåæåú âãåìä éåúø
	if (check == 0)
		return true;
	return false;
}
