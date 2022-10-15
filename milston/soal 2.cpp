#include<stdio.h>
int main(){
	int A=0;
	int B=0;
	int C=0;
	
	printf("input 3 numbers seperated by coma : ");
	scanf("%d,%d,%d", &A, &B, &C);
	printf("The sum of the three numbers :%d",A+B+C);
	printf("The multiplication of the three numbers : %d\n",A*B*C);
	printf("The division of the three numbers : %d\n",A/B/C);
	printf("The subtraction of the three numbers: %d\n",A-B-C);
}
