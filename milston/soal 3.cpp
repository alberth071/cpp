#include<stdio.h>
int main(){
	int x[10];
	printf("input 10 elements into the array :\n ");
	for (int I=0;I<10;I++){
		printf("element %d: ",I);
		scanf("%d",&x[I]);
		printf("\n");
	}
	int P=0;
	int O=0;
	printf("Even elements in array are: ");
	while (P!=10){
		if(x[P]%2==0){
		printf("%d ",x[P]);
		}
		P++;
	} printf("\n4Odd elements in array are: ");
		while (O!=10){
		if(x[O]%2==1){
		printf("%d ",x[O]);
		}
		O++;
		
	}
}
