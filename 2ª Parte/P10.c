#include "tipos.h"

// Apresente uma definição não recursiva da função int removeAll (LInt *, int) que remove todas as ocorrências de um dado inteiro de
// uma lista, retornando o número de células removidas.

int removeAll (LInt *l, int x) {

	LInt actual = *l, ant  = newLInt (0,*l), aux;
	int i = 0;
	*l = ant;

	while (actual != NULL) {
		if (actual->valor == x) {
			i ++;
			ant->prox = actual->prox;
			aux = actual;
			actual = actual->prox;
			free (aux);
		}
		else {
		actual = actual->prox;
		ant = ant->prox;			
		}

	}

	aux = *l;
	*l = aux->prox;
	free (aux);

	return i;
}