#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	float x,y,c,fx,fy,fc;
    x = -15;
    y = -10;
    while(y-x > 0.00001){
    	c=(x+y)/2;
    	fx=pow(x,3)+12*(pow(x,2))+1;
    	fy=pow(y,3)+12*(pow(y,2))+1;
    	fc=pow(c,3)+12*(pow(c,2))+1;
    	if((fx*fc)<0)
    		y=c;
    	else if((fy*fc)<=0)
    		x=c;
	}
	fx=pow(x,3)+12*(pow(x,2))+1;
    printf("La solution est : %.5f",x);
    
}
