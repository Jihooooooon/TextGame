#include <iostream>

using namespace std;

enum MAIN_MENU
{
	MM_NONE,
	MM_MAP,
	MM_STORE,
	MM_INVENTORY,
	MM_EXIT

};

int main() 
{
	while (true)
	{
		system("cls");
		cout << "1. Map" << endl;
		cout << "2. Store" << endl;
		cout << "3. Inventory" << endl;
		cout << "4. Exit" << endl;

		int iMenu;
		cin >> iMenu;

		if (cin.fail()) 
		{
			cin.clear();
			cin.ignore(1024, '\n');
			continue;
		}
	}

	return 0;
}