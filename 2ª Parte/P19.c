#include "tipos.h"

// Apresente uma definição iterativa da função int take (int n, LInt *l) que, dado um inteiro n e uma lista ligada de inteirosl,
// apaga de l todos os nodos para além do n-ésimo (libertando o respectivo espaço). Se a lista tiver n ou menos nodos, a função
// não altera a lista. A função deve retornar o comprimento final da lista.

int take (int n, LInt *l) {
	LInt ant = newLInt (0, *l);
	*l = ant;
	int x = 0;
	LInt atual = ant->prox;

	while (atual != NULL && n > 0) {

		ant = ant->prox;
		atual = atual->prox;
		n--;
		x++;
	}

	if (n == 0) {

		ant->prox = NULL;

		while (atual != NULL) {
			ant = atual;
			atual = atual->prox;
			free (ant);
		}
	}

	atual = *l;
	*l = atual->prox;
	free (atual);

	return x;
}