#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define SIZE 11
int t2;
int a1[90000], a2[90000], a[30];

int main(void)
{
	srand(time(NULL));
	for (int i = 0; i < 36000; i++)
	{
		a1[i] = 1 + rand() % 6;
		a2[i] = 1 + rand() % 6;
		int j;
		j = a1[i] + a2[i];
		switch (j)
		{
		case 2:a[2]++; break;
		case 3:a[3]++; break;
		case 4:a[4]++; break;
		case 5:a[5]++; break;
		case 6:a[6]++; break;
		case 7:a[7]++; break;
		case 8:a[8]++; break;
		case 9:a[9]++; break;
		case 10:a[10]++; break;
		case 11:a[11]++; break;
		case 12:a[12]++; break;
		}

	}
	for (int i = 2; i < 13; i++)
	{
		printf("%d    %d\n", i, a[i]);

	}
	system("pause");
	return 0;
}