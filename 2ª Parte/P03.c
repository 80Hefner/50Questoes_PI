#include "tipos.h"

// Apresente uma definição não recursiva da função void imprimeL (LInt) que imprime no ecran os elementos de uma lista (um por linha).

void imprimeL (LInt lista) {

	while (lista != NULL){
		printf("%d\n", lista->valor);
		lista = lista->prox;
	}
}
