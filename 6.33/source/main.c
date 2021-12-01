#include <stdio.h>
#include <stdlib.h>
#define SIZE 15
int binarySearch(int num[], int key, int l, int r);
void printfarray(int num[], int l, int mid, int r);

int main() {
	int key, num[SIZE], index;
	printf("Enter a number between 0 and 28:");
	scanf_s("%d", &key);
	printf("Indices:\n");

	for (int i = 0; i < SIZE; i++) {
		printf("%3d ", i);
		num[i] = i * 2;
	}

	printf("\n");

	for (int i = 0; i < 4*SIZE; i++) printf("-");
	printf("\n");

	index = binarySearch(num, key, 0, SIZE - 1);

	if (index == -1) printf("%d not found\n", key);
	else printf("%d found at index %d\n", key, index);

	system("pause");
}

int binarySearch(int num[], int key, int l, int r) {
	int mid = (l + r) / 2;
	if (r >= l) {
		if (num[mid] > key) {
			printfarray(num, l, mid, r);
			return binarySearch(num, key, l, mid - 1);
		}
		else if (num[mid] < key) {
			printfarray(num, l, mid, r);
			return binarySearch(num, key, mid + 1, r);
		}
		else {
			printfarray(num, l, mid, r);
			return mid;
		}
	}
	else
		return -1;
}

void printfarray(int num[], int l, int mid, int r) {
	for (int i = 0; i < SIZE; i++) {
		if (i < l || i > r)  printf("%4s", " ");
		else if (i == mid)  printf("%3d*", num[i]);
		else printf("%3d ", num[i]);
	}
	printf("\n");
}
/*#include <stdio.h>
#include <stdlib.h>

int bisearch(const int arr[], int start, int end, int khey);

int main()
{
	int arr[10] = { 0,2,4,6,8,10,12,14,16,18 };
	int end = 10;
	int start = 0;
	int key = 0;
	int x;
	printf("請輸入要搜尋的key: ");
	scanf_s("%d", &key);
	x = bisearch(arr, start, end, key);
	if (x != -1)
	{
		printf("%d在第%d個位置\n", key, x + 1);
	}
	else
	{
		printf("找不到\n");
	}
	system("pause");
	return 0;
}

int bisearch(const int arr[], int start, int end, int khey)
{
	if (start > end)
		return -1;

	int mid = start + (end - start) / 2;
	if (arr[mid] > khey)
	{
		return bisearch(arr, start, mid - 1, khey);
	}
	else if (arr[mid] < khey)
	{
		return bisearch(arr, mid + 1, end, khey);
	}
	else
	{
		return mid;
	}
}*/