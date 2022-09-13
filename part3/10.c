#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,i,a[10],s=0;
	for(i=0;i<10;i++){
		printf("num %d = ",i);
		scanf("%d",&a[i]);
		if(a[i] > 0)	
			s += a[i];
	}
	printf("La somme : %d",s);
	
	
}
