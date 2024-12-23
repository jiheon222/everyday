#include "stdio.h"
#include "stdlib.h"
void main()
{
	int a;
	float fa = 3;
	float fb = 2;
	char cbuf[30];
	a = 1;
	printf("a = %d\n",a);
	printf("fa = %f\n", fa);
	printf("fa*fb = %f\n",fa * fb);
	printf("fa/fb = %f\n", fa / fb);
	printf("cbuf = %p\n", cbuf);
	printf("cbuf = %p\n", &cbuf[0]);
	printf("cbuf = %p\n", &cbuf[1]);
	printf("Hello World\n");
	printf("\"");
	printf("\'");
	printf("\n");

	struct score 
	{
		char name[10];
		int korea;
		int english;
		int math;
	};

	score man[50];
	memset(man, 0x00, sizeof(man));
	scanf_s("%s", man[0].name);
	scanf_s("%d", &man[0].korea);
	scanf_s("%d", &man[0].english);
	scanf_s("%d",&man[0].math);

	printf("name : %s\n", man[0].name);
	printf("korea : %d\n", man[0].korea);
	printf("english : %d\n", man[0].english);
	printf("math : %d\n", man[0].math);
	int avg = (man[0].korea + man[0].english + man[0].math) / 3;
	printf("avg : %d\n", avg);

	return;
	                   
}