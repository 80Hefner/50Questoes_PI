#include "tipos.h"

// Defina uma função LInt rotateL (LInt l) que coloca o primeiro elemento de uma lista nofim. Se a lista for vazia ou tiver apenas
// um elemento, a função não tem qualquer efeito prático (i.e., devolve a mesma lista que recebe como argumento).
// Note que a sua função não deve alocar nem libertar memória. Apenas re-organizar as células da lista.

LInt rotateL (LInt l) {

	if (l == NULL) return l;

	LInt atual = l;

	while (atual->prox != NULL)
		atual = atual->prox;

	atual->prox = l;
	atual = l;
	l = l->prox;
	atual->prox = NULL;

	return l;
}