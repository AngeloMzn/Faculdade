#include <stdio.h>
#define MAX 9
void mediaAR(float media, float notaAP, char mensagem[MAX]){

	if (media >= notaAP){

		printf("%f  %s\n", media, mensagem);

	}

	else{

		printf("%f  %s\n", media, mensagem);

	}

}

int media(){

	float notaAP, media;

	scanf("%f %f", &notaAP, &media);

	if(media >= notaAP){
        
		char mensagem[MAX];

		mensagem[0] = 'A';
		mensagem[1] = 'p';
		mensagem[2] = 'r';
		mensagem[3] = 'o';
		mensagem[4] = 'v';
		mensagem[5] = 'a';
		mensagem[6] = 'd';
		mensagem[7] = 'o';
		mensagem[8] = '\0'

	} 

	else{

		char mensagem[MAX + 1];

		mensagem[0] = 'R';
		mensagem[1] = 'e';
		mensagem[2] = 'p';
		mensagem[3] = 'r';
		mensagem[4] = 'o';
		mensagem[5] = 'v';
		mensagem[6] = 'a';
		mensagem[7] = 'd';
		mensagem[8] = 'o';
		mensagem[9] = '\0';


	}
	
	mediaAR(media, notaAP, mensagem);

}