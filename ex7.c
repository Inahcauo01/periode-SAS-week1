#include<stdlib.h>
#include<stdio.h>

int main(){
	int a,b;
	printf("Enter a : ");	scanf("%d",&a);
	printf("Enter b : ");	scanf("%d",&b);
	printf("\na+b = %d",(a+b));
	printf("\na-b = %d",(a-b));
	printf("\na/b = %.2f", (float) a / (float) b);
	printf("\na%b = %d",(a%b));
	
}
