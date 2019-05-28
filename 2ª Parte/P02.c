#include "tipos.h"

// Apresente uma definição não recursiva da função void freeL (LInt)que liberta o espaço ocupado por uma lista.

void freeL (Lint lista) {
	LInt aux;

	if (lista == NULL)
		return;

	while (lista != NULL){
		aux = lista;
		lista = lista->prox;
		free(aux);
	}
}
