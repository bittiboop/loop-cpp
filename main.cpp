#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, 7);
	int st_range, en_range, max_dig;
	cout << "Enter the start of range limit:";
	cin >> st_range;
	cout << "\n" << "Enter the end of range limit:";
	cin >> en_range;
	max_dig = st_range > en_range ? en_range : st_range;

	do {
		st_range++;
		cout << st_range << endl;
	} while (st_range < max_dig);
	
	

	return 0;
}