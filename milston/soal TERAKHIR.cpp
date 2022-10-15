#include<stdio.h>
int main(){
	int m=300;
	float fx=300.600006;
	char cht='z';
	printf("Using & operator : \n");
	printf("Adress of m = %p\n", &m);
	printf("Adress of fx = %p\n", &fx);
	printf("Adress of cht = %p\n", &cht);
	printf("\n");
	printf("Using & and * operator : \n");
	printf("Value at address of m =%d\n", m);
	printf("Value at address of fx =%f\n", fx);
	printf("Value at address of cht =%c\n", cht);
	printf("\n");
	printf("Using only pointer variable : \n");
	int *p=&m;
	float *p2=&fx;
	char *p3=&cht;
	printf("Adress of m = %p\n", p);
	printf("Adress of fx = %p\n", p2);
	printf("Adress of cht = %p\n", p3);
	printf("using only pointer operator\n");
	printf("Value at address of m =%d\n", *p);
	printf("Value at address of fx =%f\n", *p2);
	printf("Value at address of cht =%c\n", *p3);
}
