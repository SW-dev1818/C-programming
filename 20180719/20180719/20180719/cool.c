#include<stdio.h>

int main(void) {
	char ch;
	int cnt = 0;

	while (scanf_s("%c", &ch) != -1) {
		if (ch == '\n') cnt++;
	}
	printf("엔터 키를 누른 횟수 : %d\n", cnt);

	system("pause");
	return 0;
}