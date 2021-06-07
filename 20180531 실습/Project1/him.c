#include<stdio.h>

void swap(int *pc, int *pd);

int main(void) {

	int c = 20, d = 40;

	swap(&c, &d);
	printf("c:%d, d:%d\n", c, d);
	
	return 0;
	system("pause");
}

void swap(int *pc, int *pd)
{
	int temp;

	temp = *pc;
	*pc = *pd;
	*pd = temp;
}

	/*printf("%d\n", sizeof(&a));
	printf("%d\n", sizeof(&b));
	printf("%d\n", sizeof(&c));
	printf("%d\n", sizeof(&d));
	printf("%d\n", sizeof(ac));
	printf("%d\n", sizeof(ab));
	printf("%d\n", sizeof(ad));
	printf("%d\n", sizeof(ag));
	printf("%d\n", sizeof(*ac));
	printf("%d\n", sizeof(*ab));
	printf("%d\n", sizeof(*ad));
	printf("%d\n", sizeof(*ag));*/
				
	/*int a = 10, b = 20;
	const int *pa = &a;

	printf("변수 a값: %d\n", *pa);
	pa = &b;
	printf("변수 b값: %d\n", *pa);
	pa = &a;
	a = 20;
	printf("변수 a값: %d\n", *pa);*/
	
	/*int g = 20, h = 30, tree;
	double apple;
	int *pg, *ph;
	int *pt = &tree;
	double *pe = &apple;

	pg = &g;
	ph = &h;
	
	*pt = *pg**ph;
	*pe = *pt + 7;

	printf("%d,%d\n", *pg, *ph);
	printf("%d\n", *pt);
	printf("%.3lf\n", *pe);*/
		
	/*int a;
	double b;
	char c;
	float c;
	char d;
	int *pa;

	pa = &a;
	*pa = 77;

	scanf_s("%d", &a);
	scanf_s("%3lf", &b);
	scanf_s("%c", &c);
	scanf_s("%d", &*pa);
	printf("%x\n", &a);
	printf("%p\n", &b);
	printf("%u\n", &c);
	printf("%u\n", &d);
	printf("%d\n", a);
	printf("%3lf\n", b);
	printf("%c\n", c);
	printf("%d\n", *pa);*/

