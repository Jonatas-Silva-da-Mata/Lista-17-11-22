#include <stdio.h>
  int main(){
  	int sen;
  	
  	do{
  		scanf("%d", &sen);
  		
  		if(sen!=2002){
  			printf("Senha Invalida\n");
		  } else{
		  	printf("Acesso Permitido\n");
		  }
  		
	  } while(sen!=2002);
	
	return 0;
  }
