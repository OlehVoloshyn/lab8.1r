#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int Count(char* str)
{
	int number = 0;
	int k = 0;
	int pos = 0;
	char* t;
	while (t = strchr(str + pos, ','))
	{
		pos = t - str + 1;
		
			k++;
		if (k == 3)
		{
			number = pos - 1;
			break;
		}
	}
	return number;

}
char* Change(char* str)
{
	char* t = new char[2*strlen(str)];
	char* p;
	int pos1 = 0;
	int pos2 = 0;
		
	*t = 0;
	while (p = strchr(str + pos1, ','))
	{
		
			pos2 = p - str + 1;
			strncat(t, str + pos1, pos2 - pos1 - 1);
			strcat(t, "**");
			pos1 = pos2;
		
	}
	strcat(t, str + pos1);
	
	return t;
}
int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	cout << "The number of the third comma " << Count(str) << endl;
	char* dest = new char[151];
	dest = Change(str);
	cout << "Modified string (result): " << dest << endl;
	return 0;
}
