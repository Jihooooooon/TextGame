#include <iostream>
#include <stdio.h>

using namespace std;

#define MAX(a,b) ((a)>(b) ? (a):(b))

int main()
{

	int n = 0;
	int count = 1;
	cin >> n;

	int **rec = new int*[n];
	int **max = new int*[n];
	for (int i = 0; i < n;++i)
	{
		rec[i] = new int[count];
		max[i] = new int[count];
		for (int j = 0;j < count; ++j)
		{
			int temp = 0;
			cin >> temp;
			rec[i][j] = temp;
			max[i][j] = 0;
		}
		/*
		for (int j = 0; j < count; j++)
		{
			cout << temp2[j] << " ";
		}

		cout << endl;
		*/
		++count;
		
	}

	int temp = n;
	int count2 = 0;
	while (temp--)
	{
		if (count2 == 0)
		{
			max[0][0] = rec[0][0];
			count2++;
		}
		else 
		{
			int col = count2;
			for (int i = 0; i <= count2; ++i)
			{
				if (i - 1 < 0)
				{
					max[count2][i] = max[count2 - 1][i] + rec[count2][i];
					continue;
				}
				else if (i == count2)
				{
					max[count2][i] = max[count2 - 1][i-1] + rec[count2][i];
					count2++;
					break;
				}
				else
				{
					max[count2][i] = MAX(max[count2 - 1][i-1], max[count2 - 1][i]) + rec[count2][i];
					
					continue;
				}
				
			}
			
		}
	}
	int maxV = 0;
	for (int i = 0; i < n;++i)
	{
		maxV = MAX(maxV, max[n - 1][i]);
	}
	cout << maxV << endl;
	return 0;
}