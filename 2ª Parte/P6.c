#include "tipos.h"

// Apresente uma definição não recursiva da função int removeOneOrd (LInt *, int) que remove um elemento de uma lista ordenada. Retorna 1 caso o elemento a remover não exista,0 no outro caso.

int removeOneOrd (LInt * lista, int x) {
	LInt ant, atual;

	atual = *lista;

	if (atual == NULL)
		return 1;

	if (atual->valor == x) {
		*lista = NULL;
		return 0;
	}

	while (atual->prox != NULL) {
		ant = atual;
		atual = atual->prox;

		if (atual->valor == x) {
			ant->prox = atual->prox;
			return 0;
		}
	}

	return 1;
}