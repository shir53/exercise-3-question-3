/* By: shir babay id : 211504642
Cours Workshop in C ++
Exercise 3 Question 3
Description :
*/
#include<iostream>
#include <string>
#include <string.h>
#include"MyString.h"
#pragma warning (disable:4996)
using namespace std;
int main()
{
	int size1, size2;
	char str1[15];//����� ���� ������ �������
	cin.getline(str1, 15);
	char str2[15];//����� ���� ������ �����
	cin.getline(str2, 15);
	size1 = strlen(str1);//���� �����
	size2 = strlen(str2);//���� �����
	MyString a(str1, size1);
	MyString b(str2,size2);
	int n;
	cin >> n;
	char tav;
	int index;
	cin >> tav >> index;//����� ����� ���� ���� �� �������
	if (a > b)
		cout << "a>b\n";
	else if (a < b)
		cout << "a<b\n";
	else if (!(a != b))
		cout << "a=b\n";
	char* help;
	help=(b.insert(n, str1));
	












	return 0;
}