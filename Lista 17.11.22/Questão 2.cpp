#include <stdio.h>
  int main(){
  	int X, Y;
  	
  	do{
  		scanf("%d", &X);
  		scanf("%d", &Y);
  		
  		if(X<Y){
  			printf("Crescente\n");
		  } else if(X>Y){
		    printf("Decrescente");
		  } else{
		  	return 0;
		  }
  		
	  } while(X!=Y);
  	 
  return 0;	 
  }
