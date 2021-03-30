#include<iostream>
#include <string>
#include <cstring>
//#include <string.h>
#include"MyString.h"
#pragma warning (disable:4996)
using namespace std;
int main()
{
	int size1, size2;
	char str1[15];//äâãøú îòøê ìîçøåú äøàùåðä
	cin.getline(str1, 15);
	char str2[15];//äâãøú îòøê ìîçøåú äùðéä
	cin.getline(str2, 15);
	size1 = strlen(str1);//âåãì äîéìä
	size2 = strlen(str2);//âåãì äîéìä
	MyString a(str1, size1);
	MyString b(str2,size2);
	int n;
	cin >> n;
	//char tav;
	//int index;
	//cin >> tav >> index;//÷ìéèú òøëéí ìçì÷ äùðé ùì äúåëðéú
	if (a > b)
		cout << "a>b\n";
	else if (a < b)
		cout << "a<b\n";
	else if (!(a != b))
		cout << "a=b\n";
	char* help;
	help= (b.insert(n, str1)); // instead of str1 write 'a.string'.
	if(help)
		cout << help;
	char tav;
	int index;
	help[index] = tav;
	cout << help;
	return 0;
}
