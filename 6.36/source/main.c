#include<stdio.h>
#include<stdlib.h>
#define SIZE 11
int q1(char a[]);
char a[60];
int i;
int t2;
int main(void)
{

	while (i < 5)
	{
		scanf_s("%c", &a[i]);
		i++;
	}
	q1(a);
	printf("\n\n");
	system("pause");
	return 0;
}
int q1(char a[])
{
	printf("%c", a[i]);
	if (i > 0)
	{
		i--;
		q1(a);
	}
	else
		return 0;


}