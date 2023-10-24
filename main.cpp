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
			cout << "왼쪽" << endl;
			PlayerX--;
		}
		else if (Key == 'd' || Key == 'D')
		{
			cout << "오른쪽" << endl;
			PlayerX++;
		}
		else if (Key == 'w' || Key == 'W')
		{
			cout << "위" << endl;
			PlayerY--;
		}
		else if (Key == 's' || Key == 'S')
		{
			cout << "아래" << endl;
			PlayerY++;
		}
		else if (Key == 'q' || Key == 'Q')
		{
			cout << "종료" << endl;
			bIsRunning = false;
		}
		cout << PlayerX << "," << PlayerY << endl;
		
		cout << PlayerShape;
	}
	
	return 0;
}