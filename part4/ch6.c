#include<stdio.h>
#include<stdlib.h>

int main(){
	int tab[10],n,i,j,tmp;
	printf("Entrer la taille du tableau :");	scanf("%d",&n);
	//remplissage du tableau
 	for(i=0;i<n;i++){
 		printf("tab[%d] = ",i);	scanf("%d",&tab[i]);
	 }
    //affichage du tableau Avant
    printf("\nAvant le tri :\t");
	for (i=0;i<n;i++)
      printf("%d  ", tab[i]);
 	//tri du tableau
 	for(i=0;i<n-1;i++){
 		for(j=0;j<n-1-i;j++){
	 		if(tab[j]>tab[j+1]){
	 			tmp=tab[j];
	 			tab[j]=tab[j+1];
	 			tab[j+1]=tmp;
			}
		}
	}
	//affichage du tableau Apres
	printf("\nApres le tri :\t");
	for (i=0;i<n;i++)
    	printf("%d  ", tab[i]);

}
