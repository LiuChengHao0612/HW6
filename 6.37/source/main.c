
#include<stdio.h>
#include<stdlib.h>
#define SIZE 11
int q1(int a[]);
int s[60];
int i;
int t2;
int main(void)
{
	printf("輸入五個數值:");
	while (i < 5)
	{
		i++;
		scanf_s("%d", &s[i]);

	}
	;
	printf("\n %d", q1(s));
	system("pause");
	return 0;
}
int q1(int a[])
{
	int reg;
	if (i != 0)
	{
		if (a[1] > a[i])
		{
			reg = a[1];
			a[1] = a[i];
			a[i] = reg;
		}
		i--;
		q1(a);
	}
	else
		return a[1];


}