#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
	bool A = true;
	bool B = true;
	bool C = false;
	if (A || B || !C)
	{
		cout << "����" << endl;
	}

	return 0;
}