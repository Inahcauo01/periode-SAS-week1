#include<stdlib.h>
#include<stdio.h>

int main(){
	char str[3] ,inv[3];
	printf("Entrer le nombre de 3 chiffres : ");	scanf("%s",&str);
	int j=0,i;
	for(i=2 ;i>=0;i--){
		inv[j]=str[i];
		j++;
	}
	printf("%s",inv);
	
}
