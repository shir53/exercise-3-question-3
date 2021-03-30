
#pragma once
class MyString
{
private:
	int length;
	char* string;

public:
	MyString(char* word, int size);
	MyString(int num);
	~MyString();
	MyString insert(int index, const char* str);
	char& operator[](int index);
	//bool operators:
	bool operator<(MyString& s);
	bool operator>(MyString& s);
	bool operator<=(MyString& s);
	bool operator>=(MyString& s);
	bool operator!=(MyString& s);
};

