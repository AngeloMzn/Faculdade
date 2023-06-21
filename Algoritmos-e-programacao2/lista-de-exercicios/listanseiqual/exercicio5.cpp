#include <stdio.h>

int pisoLog2(int n){

	if(n == 1){
	        
	   return 0;
	    
	}
	
	if(n / 2 == 1){

		return 1;

	}
	else{

		return 1 + pisoLog2(n/2);

	}

}

int main(){

	int k, resposta;

	scanf("%d", &k);

    resposta = pisoLog2(k);
    
	printf("%d", resposta);

}