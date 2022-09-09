#include<stdio.h>
#include<stdlib.h>
int main(){
	int h1,m1,s1,h2,m2,s2,t1,t2;
	printf("Entrer Le premier instant (HH:MM:SS): ");	scanf("%d:%d:%d",&h1,&m1,&m1);
	printf("Entrer Le deuxieme instant (HH:MM:SS): ");	scanf("%d:%d:%d",&h2,&m2,&m2);
	t1 = (h1*3600)+(m1*60)+s1;
	t2 = (h2*3600)+(m2*60)+s2;
	if(t1<t2){
		printf("Le premier instant vient avant le deuxieme;");
	}else if(t1>t2){
		printf("Le deuxième instant vient avant le premier;");
	}else{
		printf("Il s'agit du meme instant.");
	}
	
	
}
