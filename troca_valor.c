/*
*
* Computer Science Section
* Faculdades Doctum de Caratinga
* Caratinga, MG, Brazil
* Feb. 20, 2020
* author: Elias Goncalves
* email: falarcomelias@gmail.com
* Licensed under the Apache License, Version 2.0
*
*/

#include<stdio.h>

// Troca por valor
void troca(int a, int b){
	int tmp = a;
	a = b;
	b = tmp;

	printf("Valor de a na troca(): %d\n", a);
	printf("Valor de b na troca(): %d\n", b);
}

// Main
int main (void){
	setlocale(LC_ALL, "Portuguese");
	
	/*
	 * Para melhor utilização, add nesse programa um menu para 
	 * informar ao usuário as opções que o programa implementa. 
	 * Desenvolva casos de teste para cada função do programa.
	 */
	 
	int a = 10, b = 20;
	
	printf("Valor de a antes da troca(): %d\n", a);
	printf("Valor de b antes da troca(): %d\n", b);
	
	troca(a, b);
	
	printf("Valor de a depois da troca(): %d\n", a);
	printf("Valor de b depois da troca(): %d\n", b);
	
	return 0;
}