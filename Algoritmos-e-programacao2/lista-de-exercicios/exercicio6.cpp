#include <stdio.h>

bool testeTri(double a, double b, double c){

    double hip = c*c;
    double l1 = b*b;
    double l2 = a*a;

	if (hip == l1 + l2){

		return true;

	}
	
	else{

		return false;

	}

}

int main(){

	double a, b, c;
	bool resposta;

	scanf("%lf %lf %lf", &a, &b, &c);

	resposta = testeTri(a, b, c);

	if (resposta == true){

		printf("%.1f %.1f %.1f formam um triângulo retângulo", a, b, c);

	}
	else{

		printf("%.1f %.1f %.1f não formam um triângulo retângulo", a, b, c);

	}

}