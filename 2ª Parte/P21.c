#include "tipos.h"

// Defina uma função LInt Nforward (LInt l, int N) que, dada uma lista circular dá como resultado o endereço do elemento da lista
// que está N posições à frente.

LInt NForward (LInt l, int N) {

	if (l == NULL) return NULL;

	while (N > 0) {
		l = l->prox;
		N--;
	}

	return l;
}