#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
	
	
	int PlayerX = 1;
	int PlayerY = 1;
	char PlayerShape = 'p';
	bool bIsRunning = true;

	while (bIsRunning)
	{
		int Key = _getch();

		system("cls");

		if (Key == 'a' || Key == 'A')
		{
			cout << "����" << endl;
			PlayerX--;
		}
		else if (Key == 'd' || Key == 'D')
		{
			cout << "������" << endl;
			PlayerX++;
		}
		else if (Key == 'w' || Key == 'W')
		{
			cout << "��" << endl;
			PlayerY--;
		}
		else if (Key == 's' || Key == 'S')
		{
			cout << "�Ʒ�" << endl;
			PlayerY++;
		}
		else if (Key == 'q' || Key == 'Q')
		{
			cout << "����" << endl;
			bIsRunning = false;
		}
		cout << PlayerX << "," << PlayerY << endl;
		
		cout << PlayerShape;
	}
	
	return 0;
}