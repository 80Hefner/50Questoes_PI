#include "tipos.h"

// Apresente uma definição iterativa da função int drop (int n, LInt *l) que, dado um inteiro n e uma lista ligada de inteiros l,
// apaga de l os n primeiros elementos da lista (libertando o respectivo espaço). Se a lista tiver n ou menos nodos, a função liberta
// a totalidade da lista. A função deve retornar o número de elementos removidos.

int drop (int n, LInt *l) {
	LInt ant = newLInt (0, *l);
	*l = ant;
	int x = 0;
	LInt atual = ant->prox, aux = NULL;

	while (atual != NULL && n > 0) {

		ant->prox = atual->prox;
		aux = atual;
		atual = atual->prox;
		free (aux);
		n--;
		x++;
	}

	atual = *l;
	*l = atual->prox;
	free (atual);

	return x;
}