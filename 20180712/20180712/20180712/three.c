#include<stdio.h>

int main(void) {
	char space, tab, enter;

	scanf_s("%c%c%c", &space, &tab, &enter);
	printf("�����̽� Ű�� �ƽ�Ű �ڵ尪 : %d\n", space);
	printf("�� Ű�� �ƽ�Ű �ڵ尪 : %d\n", tab);
	printf("���� Ű�� �ƽ�Ű �ڵ尪 : %d\n", enter);

	system("pause");
	return 0;
}