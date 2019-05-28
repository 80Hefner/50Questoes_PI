#include "tipos.h"

// Apresente uma definição não recursiva da função void init (LInt *) que remove o último elemento de uma lista não vazia
// (libertando o correspondente espaço).

void init (LInt *l) {

	LInt atual = *l, ant = newLInt (0, *l);
	*l = ant;

	while (atual->prox != NULL) {
		atual = atual->prox;
		ant = ant->prox;
	}

	ant->prox = NULL;
	free (atual);

	atual = *l;
	*l = atual->prox;
	free (atual);
}