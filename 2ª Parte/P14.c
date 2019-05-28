#include "tipos.h"

// Apresente uma definição não recursiva da função void appendL (LInt *, int) que acrescenta um elemento no fim da lista.

void appendL (LInt *l, int x) {
	
	if (*l == NULL) {
		*l = newLInt (x, NULL);
		return;
	}

	LInt atual = *l, ant = newLInt (0, *l);
	*l = ant;

	while (atual->prox != NULL) {
		atual = atual->prox;
		ant = ant->prox;
	}

	atual->prox = newLInt (x, NULL);
	atual = *l;
	*l = atual->prox;
	free (atual);
}