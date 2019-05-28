#include "tipos.h"

// Apresente uma definição da função void concatL (LInt *a, LInt b) que acrescenta a lista b à lista *a.

void concatL (LInt *a, LInt b) {

	LInt atual = *a, ant = newLInt (0, *a);
	*a = ant;

	while (atual != NULL) {
		atual = atual->prox;
		ant = ant->prox;
	}

	ant->prox = b;
	atual = *a;
	*a = atual->prox;
	free (atual);
}