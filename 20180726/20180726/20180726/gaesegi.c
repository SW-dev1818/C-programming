#include<stdio.h>
#include<string.h>

int main(void) {
	char name[20];
	char phone[20];
	char addr[80];

	printf("�̸� : ");
	fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = '\0';
	printf("��ȭ��ȣ : ");
	fgets(phone, sizeof(phone), stdin);
	phone[strlen(phone) - 1] = '\0';
	printf("�ּ� : ");
	fgets(addr, sizeof(addr), stdin);
	addr[strlen(addr) - 1] = '\0';
	printf("%s, %s, %s", name, phone, addr);

	system("pause");
	return 0;
}