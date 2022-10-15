#include<stdio.h>
void swap(int x, int y){
	int n=x;
	x=y;
	y=n;
	printf("After swapping: n1 =%d, n2=%d", x, y);
}
int main(){
	int x=0;
	int y=0;
	printf("Input 1st number : ");
	scanf("%d", &x);
	printf("input 2nd number : ");
	scanf("%d", &y);
	printf("Before swapping: n1 =%d, n2=%d\n", x, y);
	swap(x,y);
	
}
