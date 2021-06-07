#include<stdio.h>

int add(int x, int y);

int main(void) {
	
	int a = 20, b = 40;
	int god;

	god = add(a, b);
	printf("result: %d\n", god);
	system("pause");
	return 0;
}

int add(int x, int y)
{
	int temp;
	temp = x + y;

	return temp;
}