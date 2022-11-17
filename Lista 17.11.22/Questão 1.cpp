#include <stdio.h>
  int main(){
  	int N, aux;
  	scanf("%d", &N);
  	
  	for(aux=1; aux<=10; aux++){
  		printf("%d x %d = %d", aux, N, aux*N);
	  }
	
	return 0;
  }
