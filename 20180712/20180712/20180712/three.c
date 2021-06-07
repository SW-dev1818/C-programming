#include<stdio.h>

int main(void) {
	char space, tab, enter;

	scanf_s("%c%c%c", &space, &tab, &enter);
	printf("스페이스 키의 아스키 코드값 : %d\n", space);
	printf("탭 키의 아스키 코드값 : %d\n", tab);
	printf("엔터 키의 아스키 코드값 : %d\n", enter);

	system("pause");
	return 0;
}