#include "tipos.h"

// Defina uma função int maximo (LInt l) que calcula qual o maior valor armazenado numa lista não vazia.

int maximo (LInt l) {

	int max = l->valor;

	while (l->prox != NULL) {
		l = l->prox;

		if (l->valor > max)
			max = l->valor;
	}

	return max;
}