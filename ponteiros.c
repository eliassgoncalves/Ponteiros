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
#include<stdlib.h>

// Main
int main (void){
	setlocale(LC_ALL, "Portuguese");

	int a, b, *c;
	c = &a;
	a = 100;
	b = *c;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %p\n\n", c);

	// Outras operações com ponteiros:
	int *pt, i;

	// Aloca memória para o ponteiro
	pt = (int*)malloc(5*sizeof(int));

	// Preenche valores no ponteiro como vetor
	for(i=0; i<5; i++)
		pt[i] = i+1;

	// Mostra valores do ponteiro como vetor
	printf("Ponteiro como vetor:\n[\t");
	for(i=0; i<5; i++)
		printf("%d\t", pt[i]);
	printf("]\n\n");

	// OPERAÇÕES COM O ENDEREÇO QUE ESTÁ NO PONTEIRO:

	// Endereço do ponteiro
	printf("Endereco do ponteiro: [ %p ]\n", pt);

	// Soma +1 ao endereço que está no ponteiro
	pt++;
	printf("Endereco do ponteiro acrescido de 1: [ %p ]\n", pt);

	// Subtraí -1 ao endereço que está no ponteiro
	pt--;
	printf("Endereco do ponteiro subtraido de 1:[ %p ]\n", pt);
	printf("Perceba que foi incrementado e decrementado em 4 bytes.\n\n");


	// OPERAÇÕES COM O CONTEÚDO QUE ESTÁ NO ENDEREÇO QUE ESTÁ NO PONTEIRO:

	// Conteúdo no endereço do ponteiro
	printf("Conteúdo no endereco do ponteiro: [ %d ]\n", *pt);	
	printf("Observe acima que o endereco aponta para o conteudo da posicao 0\n");
	
	// Soma +1 ao conteúdo que está no endereço do ponteiro	
	(*pt)++;
	printf("O valor do conteudo eh acrescido de 1: [ %d ]\n", *pt);

	// Subtrai -1 ao conteúdo que está no endereço do ponteiro
	(*pt)--;
	printf("O valor do conteudo eh subtraido em 1: [ %d ]\n", *pt);	
	printf("Perceba que foi incrementado e decrementado em 1 unidade.\n\n");

	// ACESSAR O CONTEÚDO DAS OUTRAS POSIÇÕES DE UM PONTEIRO (VETOR) PELA MANIPULAÇÃO DE ENDEREÇO
	for(i=0; i<5; i++, pt++) // i e pt são incrementados
		printf("pt[%d] = %d\n", i, *pt);

	return 0;
}