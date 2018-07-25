#include <stdio.h>
#include <iostream>

using namespace std;
#define Min(a,b) ((a)>(b) ? (b) :(a))

int main()
{
	int num = 0;
	cin >> num;
	int *arr1 = new int[num];

	int **arrValue = new int*[num];
	int **d = new int*[num];
	
	for (int i = 0; i < num+1;++i) {
		arrValue[i] = new int[3];
		d[i] = new int[3];
	}
	for (int i = 0; i < 3;++i)
	{
		arrValue[0][i] = 0;
		
	}
	for (int i = 0; i <= num;++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			d[i][j] = 0;
		}
	}
	int arrSize = num;
	int arrC = 1;

	while (num--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		arrValue[arrC][0] = a;
		arrValue[arrC][1] = b;
		arrValue[arrC][2] = c;
		
		++arrC;

	}

	for (int i = 1; i <= arrSize; ++i) {
		d[i][0] = Min(d[i - 1][1], d[i - 1][2]) + arrValue[i][0];
		d[i][1] = Min(d[i - 1][0], d[i - 1][2]) + arrValue[i][1];
		d[i][2] = Min(d[i - 1][0], d[i - 1][1]) + arrValue[i][2];
	}

	cout << Min(Min(d[arrSize][0], d[arrSize][1]), d[arrSize][2]) << endl;



	return 0;
}