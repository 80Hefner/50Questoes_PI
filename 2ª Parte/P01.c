#include "tipos.h"

//Apresente uma definição não recursiva da função int length (LInt) que calcula o comprimento de uma lista ligada.

void imprimeL (LInt lista) {

	printf("\nElementos:\n");

	while (lista != NULL){
		printf("%d\n", lista->valor);
		lista = lista->prox;
	}
	printf("\n");
}

int length (LInt lista) {
	
	int x = 0;

	if (lista != NULL){

		x ++;

		while (lista->prox != NULL){
			x ++;
			lista = lista->prox;
		}
	}

	return x;
}

int main () {
	LInt top = NULL;
	int x, l;

	scanf("%d", &x);

	while (x){
		top = newLInt(x, top);
		scanf("%d", &x);
	}
	
	LInt aux = top;
	imprimeL (aux);

	l = length (top);
	printf("Comprimento = %d\n", l);

	return 0;
}
