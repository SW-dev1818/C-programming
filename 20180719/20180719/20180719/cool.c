#include<stdio.h>

int main(void) {
	char ch;
	int cnt = 0;

	while (scanf_s("%c", &ch) != -1) {
		if (ch == '\n') cnt++;
	}
	printf("���� Ű�� ���� Ƚ�� : %d\n", cnt);

	system("pause");
	return 0;
}