#pragma once
class MyString
{
private:
	int length;
	char* string;

public:
	//constructors:
	MyString(char* word, int size);
	MyString();
	MyString(const MyString& ms);
	~MyString();
	MyString insert(int index, const char* str);
	char* getString();
	char& operator[](int index);
	//bool operators:
	bool operator<(const MyString& s) const;
	bool operator>(const MyString& s) const;
	bool operator<=(const MyString& s) const;
	bool operator>=(const MyString& s) const;
	bool operator!=(const MyString& s) const;
};
