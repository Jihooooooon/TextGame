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

enum MAP_TYPE
{
	MT_NONE,
	MT_EASY,
	MT_NORMAL,
	MT_HARD,
	MT_BACK
};

enum JOB
{
	JOB_NONE,
	JOB_KNIGHT,
	JOB_ARCHER,
	JOB_WIZARD
};

#define NAME_SIZE 32
struct _tagPlayer
{
	char strName[NAME_SIZE];
	char strJobName[NAME_SIZE];
	JOB eJob;
	int iAttackMin;
	int iAttackMax;
	int iArmorMin;
	int iArmorMax;
	int iHP;
	int iHPMax;
	int iMP;
	int iMPMax;
	int iExp;
	int iLevel;
};

struct _tagMonster
{
	char strName[NAME_SIZE];
	int iAttackMin;
	int iAttackMax;
	int iArmorMin;
	int iArmorMax;
	int iHP;
	int iHPMax;
	int iMP;
	int iMPMax;
	int iLevel;
	int iExp;
	int iGoldMin;
	int iGoldMax;
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

		if (iMenu == MM_EXIT) 
		{
			break;
		}

		switch (iMenu)
		{
		case MM_MAP:
			while (true)
			{
				system("cls");
				cout << "1. easy" << endl;
				cout << "2. normal" << endl;
				cout << "3. hard" << endl;
				cout << "4. back" << endl;
				cout << "맵을 선택하세요" << endl;
				cin >> iMenu;

				if (cin.fail()) {
					cin.clear();
					cin.ignore(1024, '\n');
					continue;
				}
			}
			break;
		case MM_STORE:
			break;
		case MM_INVENTORY:
			break;
		default:
			cout << "Wrong Choice" << endl;
			break;
		}
	}

	return 0;
}