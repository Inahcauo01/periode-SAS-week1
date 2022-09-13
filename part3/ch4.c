#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,i,s=0,max=1;
	printf("Entrer Combien des nombres : ");	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		do{	printf("tab[%d] = ",i);
			scanf("%d",&a[i]);			
		}while(a[i]<0 || a[i]>100 || a[i]%10!=0);
		s+=a[i];
		if(a[i]>max)	max=a[i];
	}
	printf("\nLa somme : %d\nLe max : %d",s,max);

}
