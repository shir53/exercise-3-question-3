#include<iostream>
#include <string>
#include <string.h>
#include"MyString.h"
#pragma warning (disable:4996)
using namespace std;
int main()
{
	int size1, size2;
	char str1[15];//הגדרת מערך למחרות הראשונה
	cin.getline(str1, 14);
	char str2[15];//הגדרת מערך למחרות השניה
	cin.getline(str2, 14);
	size1 = strlen(str1);//גודל המילה
	size2 = strlen(str2);//גודל המילה
	MyString a(str1, size1);
	MyString b(str2,size2);
	if (a > b)
		cout << "a>b\n";
	else if (a < b)
		cout << "a<b\n";
	else if (!(a != b))
		cout << "a=b\n";
	char tav;
	int index;
	cin >> tav >> index;//קליטת ערכים לחלק השני של התוכנית
	MyString help = (b.insert(index, str1));
	if (help.getString())
		cout << help.getString();
	help[index] = tav;
	cout << help.getString();
	return 0;

}
