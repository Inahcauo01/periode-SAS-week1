#include<stdlib.h>
#include<stdio.h>

int main(){
	float x1,x2,y1,y2,x,y,a,b;
	printf("les coordonnees du premier point (x1,y1): ");	scanf("%d,%d",&x1,&y1);
	printf("les coordonnees du deuxieme point (x2,y2): ");	scanf("%d,%d",&x2,&y2);
	printf("les coordonnees du premier point (x,y): ");	scanf("%d,%d",&x,&y);
	a = ((y2-y1)/(x2-x1));
	y = a*x +b;
	b = y1 - (a*x1) ;
	if(y == (a*x + b))
		printf("Le point se trouve dans le segment ");
	else
		printf("Le point n\'existe pas dans le segment !");
	

}
