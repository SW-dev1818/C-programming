#include<stdio.h>

int main(void) {
	int scores[5];
	int i;
	int tot = 0;
	double avg;

	for (i = 0; i < 3; i++) {
		scanf("%d", &scores[i]);
	}		
	
	for (i = 0; i < 3; i++) {
		tot += scores[i];
	}
	avg = tot / 4.0;

	for (i = 0; i < 3; i++) {
		scanf("%5d", scores[i]);
	}
	printf("\n");

	printf("평균:%.1lf\n", avg);

	return 0;
	getchar(); getchar(); getchar();
}














/*int main(void) {
	int you[6];

	you[1] = 20;
	you[2] = 45;
	you[3] = 50;
	you[4] = you[1] * you[2];
	you[5] = 100;
	scanf("%d", &you[6]);

	printf("%d\n", you[3]);
	printf("%d\n", you[2]);
	printf("%d\n", you[4]);
	printf("%d\n", you[5]);

	return 0;
}*/













/*void fruit(int n);

int main(void) {
	fruit(1);

		return 0;
}

void fruit(int n)
{
	printf("apple\n");
	if (n == 4) return;
	fruit(n + 1);
	getchar();
}*/















/*void print_char(char go, int op);

int main(void) {
	print_char('%', 7);

	return 0;
}

void print_char(char go, int op)
{
	int a;

	while (print_char > 0)
	{
		printf("하이: ");
		scanf("%d", &a);
	}
}*/














/*int poste(int,int); //매개변수가 없는 함수
int god;

void like() {
	printf("^0^^0^^0^^0^\n");
}

void main() {
	
	int a = 3, b = 3;
	god = a * b;
	printf("%d\n", god);
	like();
	
	getchar();
	

}*/























/*double add(int x, int y);

double main(void) {
	double a = 2, b = 4;
	double cap;
	cap = add(a, b);
	printf("result:%3lf\n", cap);
	
	getchar(); getchar();
	return 0;
}

double add(int x, int y) { 
	double gode;
	gode = x + y;

	return gode;
	getchar(); getchar();
}*/