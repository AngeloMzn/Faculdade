#include <stdio.h>

double calcSalario(double valorHora, int numHoras){
    
	if(numHoras <= 40){
	
		return numHoras*valorHora;
	
	}
	
	else{
        
        float horaSobrando = numHoras - 40;
        
		return (40 * valorHora) +  (1.5 * valorHora * horaSobrando);

	}
}

int main(){

	int numFuncionario, numHoras;
	
	double valorHora, salario;

	scanf("%d %lf %d", &numFuncionario, &valorHora, &numHoras);

	salario = calcSalario(valorHora, numHoras);

	printf("%d %d %.2f %.2f", numFuncionario, numHoras, valorHora, salario);

}