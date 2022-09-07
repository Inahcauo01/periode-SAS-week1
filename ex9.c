#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
	int x1,x2,y1,y2;
	printf("(x1,y1)\n");
	printf("Enter x1 : ");	scanf("%d",&x1);
	printf("Enter y1 : ");	scanf("%d",&y1);
	printf("(x2,y2)\n");
	printf("Enter x2 : ");	scanf("%d",&x2);
	printf("Enter y2 : ");	scanf("%d",&y2);
	
	printf("La distance est : %.2f",(float) sqrt( ( (x2-x1)*(x2-x1) )+( (y2-y1)*(y2-y1) ) )	);
}
