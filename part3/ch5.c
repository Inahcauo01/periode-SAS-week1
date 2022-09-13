#include<stdlib.h>
#include<stdio.h>

int main(){
	char str[10],inv[10];
	printf("Entrer l entier : ");	scanf("%s",&str);
	int j=0,i;
	int l=strlen(str);
	for(i=l-1 ;i>=0;i--){
		inv[j]=str[i];
		j++;
	}
	int n=atoi(inv);
	printf("\nNum inverse: %d",n);
}
