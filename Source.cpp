/******************************************************************************

							  Online C++ Compiler.
			   Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include <string>
#include <cstring>
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
	MyString b(str2, size2);
	int index;
	cin >> index;
	if (a > b)
		cout << "a>b\n";
	else if (a < b)
		cout << "a<b\n";
	else if (!(a != b))
		cout << "a=b\n";
	MyString help = (b.insert(index, str1));
	if (help.getString())
		cout << help.getString() << endl;
	char tav;
	cin >> tav >> index;//קליטת ערכים לחלק השני של התוכנית
	help[index] = tav;
	cout << help.getString() << endl;
	return 0;
}
